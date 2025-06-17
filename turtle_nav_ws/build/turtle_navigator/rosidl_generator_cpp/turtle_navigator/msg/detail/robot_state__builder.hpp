// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_navigator:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_navigator/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_navigator
{

namespace msg
{

namespace builder
{

class Init_RobotState_navigating
{
public:
  explicit Init_RobotState_navigating(::turtle_navigator::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::turtle_navigator::msg::RobotState navigating(::turtle_navigator::msg::RobotState::_navigating_type arg)
  {
    msg_.navigating = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_navigator::msg::RobotState msg_;
};

class Init_RobotState_current_y
{
public:
  explicit Init_RobotState_current_y(::turtle_navigator::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_navigating current_y(::turtle_navigator::msg::RobotState::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_RobotState_navigating(msg_);
  }

private:
  ::turtle_navigator::msg::RobotState msg_;
};

class Init_RobotState_current_x
{
public:
  Init_RobotState_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_current_y current_x(::turtle_navigator::msg::RobotState::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_RobotState_current_y(msg_);
  }

private:
  ::turtle_navigator::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::msg::RobotState>()
{
  return turtle_navigator::msg::builder::Init_RobotState_current_x();
}

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
