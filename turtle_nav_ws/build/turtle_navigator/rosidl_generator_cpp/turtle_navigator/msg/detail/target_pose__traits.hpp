// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_navigator:msg/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__TRAITS_HPP_
#define TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_navigator/msg/detail/target_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_navigator
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetPose & msg,
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
  const TargetPose & msg,
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

inline std::string to_yaml(const TargetPose & msg, bool use_flow_style = false)
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
  const turtle_navigator::msg::TargetPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_navigator::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_navigator::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_navigator::msg::TargetPose & msg)
{
  return turtle_navigator::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_navigator::msg::TargetPose>()
{
  return "turtle_navigator::msg::TargetPose";
}

template<>
inline const char * name<turtle_navigator::msg::TargetPose>()
{
  return "turtle_navigator/msg/TargetPose";
}

template<>
struct has_fixed_size<turtle_navigator::msg::TargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_navigator::msg::TargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_navigator::msg::TargetPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__TRAITS_HPP_
