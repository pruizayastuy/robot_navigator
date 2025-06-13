cmake_minimum_required(VERSION 3.5)
project(turtle_navigator)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Buscar dependencias
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generar interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/TargetPose.msg"
  "msg/RobotState.msg"
  "srv/AddWaypoint.srv"
  "srv/ClearWaypoints.srv"
  "srv/SetControlParams.srv"
  DEPENDENCIES std_msgs
)

# Instalar scripts Python
install(PROGRAMS scripts/navigator_controller.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME navigator_controller  
)

install(PROGRAMS scripts/waypoint_commander.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME waypoint_commander
)

# Instalar mensajes y servicios
install(
  DIRECTORY 
  msg 
  srv
  DESTINATION share/${PROJECT_NAME}
)

ament_package()