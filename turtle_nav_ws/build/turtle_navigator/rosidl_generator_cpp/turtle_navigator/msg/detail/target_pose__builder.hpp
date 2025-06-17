// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_navigator:msg/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__BUILDER_HPP_
#define TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_navigator/msg/detail/target_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_navigator
{

namespace msg
{

namespace builder
{

class Init_TargetPose_y
{
public:
  explicit Init_TargetPose_y(::turtle_navigator::msg::TargetPose & msg)
  : msg_(msg)
  {}
  ::turtle_navigator::msg::TargetPose y(::turtle_navigator::msg::TargetPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_navigator::msg::TargetPose msg_;
};

class Init_TargetPose_x
{
public:
  Init_TargetPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_y x(::turtle_navigator::msg::TargetPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TargetPose_y(msg_);
  }

private:
  ::turtle_navigator::msg::TargetPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::msg::TargetPose>()
{
  return turtle_navigator::msg::builder::Init_TargetPose_x();
}

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__BUILDER_HPP_
