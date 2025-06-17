// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_navigator:srv/ClearWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__TRAITS_HPP_
#define TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_navigator/srv/detail/clear_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_navigator
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearWaypoints_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearWaypoints_Request & msg, bool use_flow_style = false)
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
  const turtle_navigator::srv::ClearWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_navigator::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_navigator::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_navigator::srv::ClearWaypoints_Request & msg)
{
  return turtle_navigator::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_navigator::srv::ClearWaypoints_Request>()
{
  return "turtle_navigator::srv::ClearWaypoints_Request";
}

template<>
inline const char * name<turtle_navigator::srv::ClearWaypoints_Request>()
{
  return "turtle_navigator/srv/ClearWaypoints_Request";
}

template<>
struct has_fixed_size<turtle_navigator::srv::ClearWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_navigator::srv::ClearWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_navigator::srv::ClearWaypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_navigator
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearWaypoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cleared
  {
    out << "cleared: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cleared
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cleared: ";
    rosidl_generator_traits::value_to_yaml(msg.cleared, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearWaypoints_Response & msg, bool use_flow_style = false)
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
  const turtle_navigator::srv::ClearWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_navigator::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_navigator::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_navigator::srv::ClearWaypoints_Response & msg)
{
  return turtle_navigator::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_navigator::srv::ClearWaypoints_Response>()
{
  return "turtle_navigator::srv::ClearWaypoints_Response";
}

template<>
inline const char * name<turtle_navigator::srv::ClearWaypoints_Response>()
{
  return "turtle_navigator/srv/ClearWaypoints_Response";
}

template<>
struct has_fixed_size<turtle_navigator::srv::ClearWaypoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_navigator::srv::ClearWaypoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_navigator::srv::ClearWaypoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_navigator::srv::ClearWaypoints>()
{
  return "turtle_navigator::srv::ClearWaypoints";
}

template<>
inline const char * name<turtle_navigator::srv::ClearWaypoints>()
{
  return "turtle_navigator/srv/ClearWaypoints";
}

template<>
struct has_fixed_size<turtle_navigator::srv::ClearWaypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_navigator::srv::ClearWaypoints_Request>::value &&
    has_fixed_size<turtle_navigator::srv::ClearWaypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_navigator::srv::ClearWaypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_navigator::srv::ClearWaypoints_Request>::value &&
    has_bounded_size<turtle_navigator::srv::ClearWaypoints_Response>::value
  >
{
};

template<>
struct is_service<turtle_navigator::srv::ClearWaypoints>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_navigator::srv::ClearWaypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_navigator::srv::ClearWaypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__TRAITS_HPP_
