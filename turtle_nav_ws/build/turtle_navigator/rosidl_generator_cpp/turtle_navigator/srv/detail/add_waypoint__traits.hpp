// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_navigator:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__TRAITS_HPP_
#define TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_navigator/srv/detail/add_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_navigator
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddWaypoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddWaypoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_navigator

namespace rosidl_generator_traits
{

[[deprecated("use turtle_navigator::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_navigator::srv::AddWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_navigator::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_navigator::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_navigator::srv::AddWaypoint_Request & msg)
{
  return turtle_navigator::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_navigator::srv::AddWaypoint_Request>()
{
  return "turtle_navigator::srv::AddWaypoint_Request";
}

template<>
inline const char * name<turtle_navigator::srv::AddWaypoint_Request>()
{
  return "turtle_navigator/srv/AddWaypoint_Request";
}

template<>
struct has_fixed_size<turtle_navigator::srv::AddWaypoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_navigator::srv::AddWaypoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_navigator::srv::AddWaypoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_navigator
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddWaypoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddWaypoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_navigator

namespace rosidl_generator_traits
{

[[deprecated("use turtle_navigator::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_navigator::srv::AddWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_navigator::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_navigator::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_navigator::srv::AddWaypoint_Response & msg)
{
  return turtle_navigator::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_navigator::srv::AddWaypoint_Response>()
{
  return "turtle_navigator::srv::AddWaypoint_Response";
}

template<>
inline const char * name<turtle_navigator::srv::AddWaypoint_Response>()
{
  return "turtle_navigator/srv/AddWaypoint_Response";
}

template<>
struct has_fixed_size<turtle_navigator::srv::AddWaypoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_navigator::srv::AddWaypoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_navigator::srv::AddWaypoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_navigator::srv::AddWaypoint>()
{
  return "turtle_navigator::srv::AddWaypoint";
}

template<>
inline const char * name<turtle_navigator::srv::AddWaypoint>()
{
  return "turtle_navigator/srv/AddWaypoint";
}

template<>
struct has_fixed_size<turtle_navigator::srv::AddWaypoint>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_navigator::srv::AddWaypoint_Request>::value &&
    has_fixed_size<turtle_navigator::srv::AddWaypoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_navigator::srv::AddWaypoint>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_navigator::srv::AddWaypoint_Request>::value &&
    has_bounded_size<turtle_navigator::srv::AddWaypoint_Response>::value
  >
{
};

template<>
struct is_service<turtle_navigator::srv::AddWaypoint>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_navigator::srv::AddWaypoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_navigator::srv::AddWaypoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__TRAITS_HPP_
