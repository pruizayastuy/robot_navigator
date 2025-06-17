// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_navigator:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotState in the package turtle_navigator.
typedef struct turtle_navigator__msg__RobotState
{
  float current_x;
  float current_y;
  bool navigating;
} turtle_navigator__msg__RobotState;

// Struct for a sequence of turtle_navigator__msg__RobotState.
typedef struct turtle_navigator__msg__RobotState__Sequence
{
  turtle_navigator__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
