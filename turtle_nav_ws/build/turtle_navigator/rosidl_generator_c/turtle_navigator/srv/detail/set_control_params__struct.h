// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_navigator:srv/SetControlParams.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__STRUCT_H_
#define TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetControlParams in the package turtle_navigator.
typedef struct turtle_navigator__srv__SetControlParams_Request
{
  float linear_gain;
  float angular_gain;
  float max_speed;
} turtle_navigator__srv__SetControlParams_Request;

// Struct for a sequence of turtle_navigator__srv__SetControlParams_Request.
typedef struct turtle_navigator__srv__SetControlParams_Request__Sequence
{
  turtle_navigator__srv__SetControlParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__srv__SetControlParams_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetControlParams in the package turtle_navigator.
typedef struct turtle_navigator__srv__SetControlParams_Response
{
  bool success;
} turtle_navigator__srv__SetControlParams_Response;

// Struct for a sequence of turtle_navigator__srv__SetControlParams_Response.
typedef struct turtle_navigator__srv__SetControlParams_Response__Sequence
{
  turtle_navigator__srv__SetControlParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_navigator__srv__SetControlParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__STRUCT_H_
