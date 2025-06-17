// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_navigator:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_navigator/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_navigator
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_x
  {
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << ", ";
  }

  // member: current_y
  {
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << ", ";
  }

  // member: navigating
  {
    out << "navigating: ";
    rosidl_generator_traits::value_to_yaml(msg.navigating, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << "\n";
  }

  // member: current_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << "\n";
  }

  // member: navigating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigating: ";
    rosidl_generator_traits::value_to_yaml(msg.navigating, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtle_navigator

namespace rosidl_generator_traits
{

[[deprecated("use turtle_navigator::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_navigator::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_navigator::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_navigator::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_navigator::msg::RobotState & msg)
{
  return turtle_navigator::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_navigator::msg::RobotState>()
{
  return "turtle_navigator::msg::RobotState";
}

template<>
inline const char * name<turtle_navigator::msg::RobotState>()
{
  return "turtle_navigator/msg/RobotState";
}

template<>
struct has_fixed_size<turtle_navigator::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_navigator::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_navigator::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
