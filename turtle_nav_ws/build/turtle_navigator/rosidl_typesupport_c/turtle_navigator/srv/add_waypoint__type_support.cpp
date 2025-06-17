// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from turtle_navigator:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtle_navigator/srv/detail/add_waypoint__struct.h"
#include "turtle_navigator/srv/detail/add_waypoint__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtle_navigator
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddWaypoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddWaypoint_Request_type_support_ids_t;

static const _AddWaypoint_Request_type_support_ids_t _AddWaypoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddWaypoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddWaypoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddWaypoint_Request_type_support_symbol_names_t _AddWaypoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_navigator, srv, AddWaypoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_navigator, srv, AddWaypoint_Request)),
  }
};

typedef struct _AddWaypoint_Request_type_support_data_t
{
  void * data[2];
} _AddWaypoint_Request_type_support_data_t;

static _AddWaypoint_Request_type_support_data_t _AddWaypoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddWaypoint_Request_message_typesupport_map = {
  2,
  "turtle_navigator",
  &_AddWaypoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddWaypoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddWaypoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddWaypoint_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddWaypoint_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtle_navigator

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtle_navigator, srv, AddWaypoint_Request)() {
  return &::turtle_navigator::srv::rosidl_typesupport_c::AddWaypoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtle_navigator/srv/detail/add_waypoint__struct.h"
// already included above
// #include "turtle_navigator/srv/detail/add_waypoint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_navigator
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddWaypoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddWaypoint_Response_type_support_ids_t;

static const _AddWaypoint_Response_type_support_ids_t _AddWaypoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddWaypoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddWaypoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddWaypoint_Response_type_support_symbol_names_t _AddWaypoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_navigator, srv, AddWaypoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_navigator, srv, AddWaypoint_Response)),
  }
};

typedef struct _AddWaypoint_Response_type_support_data_t
{
  void * data[2];
} _AddWaypoint_Response_type_support_data_t;

static _AddWaypoint_Response_type_support_data_t _AddWaypoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddWaypoint_Response_message_typesupport_map = {
  2,
  "turtle_navigator",
  &_AddWaypoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddWaypoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddWaypoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddWaypoint_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddWaypoint_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtle_navigator

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtle_navigator, srv, AddWaypoint_Response)() {
  return &::turtle_navigator::srv::rosidl_typesupport_c::AddWaypoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_navigator/srv/detail/add_waypoint__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_navigator
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddWaypoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddWaypoint_type_support_ids_t;

static const _AddWaypoint_type_support_ids_t _AddWaypoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddWaypoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddWaypoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddWaypoint_type_support_symbol_names_t _AddWaypoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_navigator, srv, AddWaypoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_navigator, srv, AddWaypoint)),
  }
};

typedef struct _AddWaypoint_type_support_data_t
{
  void * data[2];
} _AddWaypoint_type_support_data_t;

static _AddWaypoint_type_support_data_t _AddWaypoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddWaypoint_service_typesupport_map = {
  2,
  "turtle_navigator",
  &_AddWaypoint_service_typesupport_ids.typesupport_identifier[0],
  &_AddWaypoint_service_typesupport_symbol_names.symbol_name[0],
  &_AddWaypoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddWaypoint_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddWaypoint_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtle_navigator

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, turtle_navigator, srv, AddWaypoint)() {
  return &::turtle_navigator::srv::rosidl_typesupport_c::AddWaypoint_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
