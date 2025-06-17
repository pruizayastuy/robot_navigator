// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_navigator:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_
#define TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddWaypoint in the package turtle_navigator.
typedef struct turtle_navigator__srv__AddWaypoint_Request
{
  float x;
  float y;
} turtle_navigator__srv__AddWaypoint_Request;

// Struct for a sequence of turtle_navigator__srv__AddWaypoint_Request.
typedef struct turtle_navigator__srv__AddWaypoint_Request__Sequence
{
  turtle_navigator__srv__AddWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__srv__AddWaypoint_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddWaypoint in the package turtle_navigator.
typedef struct turtle_navigator__srv__AddWaypoint_Response
{
  bool success;
} turtle_navigator__srv__AddWaypoint_Response;

// Struct for a sequence of turtle_navigator__srv__AddWaypoint_Response.
typedef struct turtle_navigator__srv__AddWaypoint_Response__Sequence
{
  turtle_navigator__srv__AddWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__srv__AddWaypoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_
