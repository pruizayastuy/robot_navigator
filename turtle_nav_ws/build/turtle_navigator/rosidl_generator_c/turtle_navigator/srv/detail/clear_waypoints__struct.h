// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_navigator:srv/ClearWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__STRUCT_H_
#define TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ClearWaypoints in the package turtle_navigator.
typedef struct turtle_navigator__srv__ClearWaypoints_Request
{
  uint8_t structure_needs_at_least_one_member;
} turtle_navigator__srv__ClearWaypoints_Request;

// Struct for a sequence of turtle_navigator__srv__ClearWaypoints_Request.
typedef struct turtle_navigator__srv__ClearWaypoints_Request__Sequence
{
  turtle_navigator__srv__ClearWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__srv__ClearWaypoints_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ClearWaypoints in the package turtle_navigator.
typedef struct turtle_navigator__srv__ClearWaypoints_Response
{
  bool cleared;
} turtle_navigator__srv__ClearWaypoints_Response;

// Struct for a sequence of turtle_navigator__srv__ClearWaypoints_Response.
typedef struct turtle_navigator__srv__ClearWaypoints_Response__Sequence
{
  turtle_navigator__srv__ClearWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__srv__ClearWaypoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__STRUCT_H_
