#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from turtle_navigator.srv import AddWaypoint, ClearWaypoints
from turtle_navigator.msg import TargetPose
import sys

class WaypointCommander(Node):
    def __init__(self):
        super().__init__('waypoint_commander')
        self.add_waypoint_client = self.create_client(AddWaypoint, '/turtle_navigator/add_waypoint')
        self.clear_waypoints_client = self.create_client(ClearWaypoints, '/turtle_navigator/clear_waypoints')
        self.target_pub = self.create_publisher(TargetPose, '/turtle_navigator/target_pose', 10)
        
        while not self.add_waypoint_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Servicio add_waypoint no disponible, esperando...')
        while not self.clear_waypoints_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Servicio clear_waypoints no disponible, esperando...')
        
        self.get_logger().info('Waypoint commander listo')

    def add_waypoint(self, x, y):
        req = AddWaypoint.Request()
        req.x = float(x)
        req.y = float(y)
        future = self.add_waypoint_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info(f'Waypoint añadido: ({x}, {y})')
            return True
        else:
            self.get_logger().error('Error al llamar al servicio add_waypoint')
            return False

    def clear_waypoints(self):
        req = ClearWaypoints.Request()
        future = self.clear_waypoints_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info('Todos los waypoints eliminados')
            return True
        else:
            self.get_logger().error('Error al llamar al servicio clear_waypoints')
            return False

    def publish_target(self, x, y):
        msg = TargetPose()
        msg.x = float(x)
        msg.y = float(y)
        self.target_pub.publish(msg)
        self.get_logger().info(f'Objetivo publicado: ({x}, {y})')

def main(args=None):
    rclpy.init(args=args)
    commander = WaypointCommander()
    
    # Ejemplo de uso
    commander.add_waypoint(2.0, 2.0)
    commander.add_waypoint(8.0, 8.0)
    commander.publish_target(3.0, 3.0)
    
    # Mantener el nodo activo
    try:
        rclpy.spin(commander)
    except KeyboardInterrupt:
        pass
    finally:
        commander.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()