#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtle_navigator.msg import RobotState, TargetPose
from turtle_navigator.srv import AddWaypoint, ClearWaypoints

import math
from collections import deque

class NavigatorController(Node):
    def __init__(self):
        super().__init__('navigator_controller')
        
        # Callback groups para ejecución concurrente
        self.cb_group_service = MutuallyExclusiveCallbackGroup()
        self.cb_group_timer = MutuallyExclusiveCallbackGroup()
        
        # Variables internas
        self.waypoints = deque()
        self.current_target = None
        self.navigating = False
        self.current_pose = None
        
        # Publishers
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.state_pub = self.create_publisher(RobotState, '/turtle_navigator/current_state', 10)
        self.target_pub = self.create_publisher(TargetPose, '/turtle_navigator/target_pose', 10)
        
        # Subscribers
        self.pose_sub = self.create_subscription(
            Pose, 
            '/turtle1/pose', 
            self.pose_callback, 
            10)
        self.target_sub = self.create_subscription(
            TargetPose,
            '/turtle_navigator/target_pose',
            self.target_callback,
            10)
        
        # Services
        self.add_waypoint_srv = self.create_service(
            AddWaypoint, 
            '/turtle_navigator/add_waypoint', 
            self.add_waypoint_callback,
            callback_group=self.cb_group_service
        )
        self.clear_waypoints_srv = self.create_service(
            ClearWaypoints, 
            '/turtle_navigator/clear_waypoints', 
            self.clear_waypoints_callback,
            callback_group=self.cb_group_service
        )
        
        # Timer para control de movimiento
        self.control_timer = self.create_timer(
            0.1, 
            self.control_loop, 
            callback_group=self.cb_group_timer
        )
        
        self.get_logger().info('Navigator controller iniciado')

    def target_callback(self, msg):
        """Handle new target poses from topic"""
        self.get_logger().info(f'Objetivo directo recibido: ({msg.x}, {msg.y})')
        self.waypoints.clear()
        self.waypoints.append((msg.x, msg.y))
        if not self.navigating:
            self.current_target = self.waypoints.popleft()
            self.navigating = True

    def pose_callback(self, msg):
        """Handle turtle's current pose"""
        self.current_pose = msg
        # Publicar estado actual
        state_msg = RobotState()
        state_msg.current_x = msg.x
        state_msg.current_y = msg.y
        state_msg.navigating = self.navigating
        self.state_pub.publish(state_msg)

    def add_waypoint_callback(self, request, response):
        """Service to add new waypoint"""
        self.waypoints.append((request.x, request.y))
        response.success = True
        self.get_logger().info(f'Waypoint añadido: ({request.x}, {request.y})')
        return response

    def clear_waypoints_callback(self, request, response):
        """Service to clear all waypoints"""
        self.waypoints.clear()
        if self.navigating:
            self.stop_turtle()
            self.navigating = False
            self.current_target = None
        response.cleared = True
        self.get_logger().info('Waypoints eliminados')
        return response

    def stop_turtle(self):
        """Stop turtle movement"""
        cmd = Twist()
        cmd.linear.x = 0.0
        cmd.angular.z = 0.0
        self.cmd_vel_pub.publish(cmd)

    def control_loop(self):
        """Main control loop"""
        if not self.current_pose:
            return
            
        if not self.navigating and self.waypoints:
            self.current_target = self.waypoints.popleft()
            self.navigating = True
            self.get_logger().info(f'Navegando a: ({self.current_target[0]}, {self.current_target[1]})')
        
        if self.navigating:
            if self.reached_target():
                self.get_logger().info(f'Objetivo alcanzado: ({self.current_target[0]}, {self.current_target[1]})')
                self.stop_turtle()
                self.navigating = False
                self.current_target = None
                return
                
            self.move_to_target()

    def reached_target(self, tolerance=0.1):
        """Check if target is reached"""
        dx = self.current_target[0] - self.current_pose.x
        dy = self.current_target[1] - self.current_pose.y
        return math.sqrt(dx**2 + dy**2) < tolerance

    def move_to_target(self):
        """Calculate and send movement commands"""
        cmd = Twist()
        dx = self.current_target[0] - self.current_pose.x
        dy = self.current_target[1] - self.current_pose.y
        distance = math.sqrt(dx**2 + dy**2)
        target_angle = math.atan2(dy, dx)
        
        angle_diff = target_angle - self.current_pose.theta
        angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff))  # Normalize angle
        
        # Proportional control
        cmd.angular.z = 2.0 * angle_diff
        cmd.linear.x = distance * 0.5 if distance > 0.1 else 0.0
        
        # Velocity limits
        cmd.linear.x = min(cmd.linear.x, 2.0)
        cmd.angular.z = max(min(cmd.angular.z, 2.0), -2.0)
        
        self.cmd_vel_pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    controller = NavigatorController()
    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(controller)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()