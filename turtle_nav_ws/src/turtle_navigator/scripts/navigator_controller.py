#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtle_navigator.msg import RobotState, TargetPose
from turtle_navigator.srv import AddWaypoint, ClearWaypoints, SetControlParams

import math
from collections import deque

class NavigatorController(Node):
    def __init__(self):
        super().__init__('navigator_controller')
        
        # Configuración de control ajustable
        self.linear_gain = 0.8
        self.angular_gain = 4.0
        self.max_speed = 1.5
        self.target_tolerance = 0.2
        
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
        self.set_params_srv = self.create_service(
            SetControlParams,
            '/turtle_navigator/set_control_params',
            self.set_params_callback,
            callback_group=self.cb_group_service
        )
        
        # Timer para control de movimiento
        self.control_timer = self.create_timer(
            0.1, 
            self.control_loop, 
            callback_group=self.cb_group_timer
        )
        
        self.get_logger().info('Controlador de navegación iniciado')
        self.get_logger().info(f'Parámetros iniciales: Linear={self.linear_gain}, Angular={self.angular_gain}, MaxSpeed={self.max_speed}')

    def target_callback(self, msg):
        """Maneja nuevos objetivos recibidos por topic"""
        # 1. Detener movimiento inmediatamente
        self.stop_turtle()
        
        # 2. Limpiar los waypoints existentes
        self.waypoints.clear()
        
        # 3. Añadir nuevo objetivo como único punto
        self.waypoints.append((msg.x, msg.y))
        
        # 4. Forzar inicio de nuevo objetivo
        self.navigating = False  # Resetear estado
        self.current_target = self.waypoints.popleft()
        self.navigating = True
        
        self.get_logger().info(f'Objetivo directo recibido. Cancelando ruta y yendo a: ({msg.x}, {msg.y})')

    def pose_callback(self, msg):
        """Actualiza la pose actual de la tortuga"""
        self.current_pose = msg
        state_msg = RobotState(
            current_x=msg.x,
            current_y=msg.y,
            navigating=self.navigating
        )
        self.state_pub.publish(state_msg)

    def add_waypoint_callback(self, request, response):
        """Añade un nuevo punto de ruta"""
        self.waypoints.append((request.x, request.y))
        response.success = True
        self.get_logger().info(f'Waypoint añadido: ({request.x:.2f}, {request.y:.2f})')
        
        # Iniciar si no se está navegando
        if not self.navigating:
            self.get_logger().info('Iniciando navegación desde servicio (waypoints pendientes)')
        return response

    def clear_waypoints_callback(self, request, response):
        """Limpia todos los puntos de ruta"""
        self.waypoints.clear()
        if self.navigating:
            self.stop_turtle()
            self.navigating = False
            self.current_target = None
        response.cleared = True
        self.get_logger().info('Waypoints eliminados')
        return response

    def set_params_callback(self, request, response):
        """Ajusta los parámetros de control"""
        if request.linear_gain <= 0 or request.angular_gain <= 0 or request.max_speed <= 0:
            self.get_logger().error("Valores deben ser positivos")
            response.success = False
            return response
            
        self.linear_gain = request.linear_gain
        self.angular_gain = request.angular_gain
        self.max_speed = request.max_speed
        self.get_logger().info(f'Parámetros actualizados: Linear={request.linear_gain:.2f}, Angular={request.angular_gain:.2f}, MaxSpeed={request.max_speed:.2f}')
        response.success = True
        return response

    def stop_turtle(self):
        """Detiene el movimiento de la tortuga"""
        cmd = Twist()
        cmd.linear.x = 0.0
        cmd.angular.z = 0.0
        self.cmd_vel_pub.publish(cmd)

    def control_loop(self):
        """Bucle principal de control"""
        if not self.current_pose:
            return
            
        # Verificar si hay nuevos waypoints y no se está navegando
        if not self.navigating and self.waypoints:
            self.current_target = self.waypoints.popleft()
            self.navigating = True
            self.get_logger().info(f'Navegando a: ({self.current_target[0]:.2f}, {self.current_target[1]:.2f})')
        
        # Si está navegando, controlar movimiento
        if self.navigating:
            if self.reached_target():
                self.get_logger().info('Objetivo alcanzado!')
                self.stop_turtle()
                self.navigating = False
                self.current_target = None
                
                # Verificar nuevos waypoints
                if self.waypoints:
                    self.get_logger().info('Waypoints pendientes detectados')
            else:
                self.move_to_target()

    def reached_target(self):
        """Verifica si se alcanzó el objetivo"""
        dx = self.current_target[0] - self.current_pose.x
        dy = self.current_target[1] - self.current_pose.y
        return math.sqrt(dx**2 + dy**2) < self.target_tolerance

    def move_to_target(self):
        """Calcula y envía comandos de movimiento"""
        cmd = Twist()
        dx = self.current_target[0] - self.current_pose.x
        dy = self.current_target[1] - self.current_pose.y
        distance = math.sqrt(dx**2 + dy**2)
        target_angle = math.atan2(dy, dx)
        
        angle_diff = target_angle - self.current_pose.theta
        angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff))
        
        # Control proporcional con parámetros ajustables
        cmd.angular.z = self.angular_gain * angle_diff
        cmd.linear.x = self.linear_gain * distance if distance > self.target_tolerance else 0.0
        
        # Aplicar límites de velocidad
        cmd.linear.x = min(cmd.linear.x, self.max_speed)
        cmd.angular.z = max(min(cmd.angular.z, self.max_speed), -self.max_speed)
        
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