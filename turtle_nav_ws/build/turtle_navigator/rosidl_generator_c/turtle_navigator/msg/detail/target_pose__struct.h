// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_navigator:msg/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__STRUCT_H_
#define TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TargetPose in the package turtle_navigator.
typedef struct turtle_navigator__msg__TargetPose
{
  float x;
  float y;
} turtle_navigator__msg__TargetPose;

// Struct for a sequence of turtle_navigator__msg__TargetPose.
typedef struct turtle_navigator__msg__TargetPose__Sequence
{
  turtle_navigator__msg__TargetPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__msg__TargetPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__STRUCT_H_
