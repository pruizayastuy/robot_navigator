// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_navigator:srv/SetControlParams.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__BUILDER_HPP_
#define TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_navigator/srv/detail/set_control_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_navigator
{

namespace srv
{

namespace builder
{

class Init_SetControlParams_Request_max_speed
{
public:
  explicit Init_SetControlParams_Request_max_speed(::turtle_navigator::srv::SetControlParams_Request & msg)
  : msg_(msg)
  {}
  ::turtle_navigator::srv::SetControlParams_Request max_speed(::turtle_navigator::srv::SetControlParams_Request::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_navigator::srv::SetControlParams_Request msg_;
};

class Init_SetControlParams_Request_angular_gain
{
public:
  explicit Init_SetControlParams_Request_angular_gain(::turtle_navigator::srv::SetControlParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetControlParams_Request_max_speed angular_gain(::turtle_navigator::srv::SetControlParams_Request::_angular_gain_type arg)
  {
    msg_.angular_gain = std::move(arg);
    return Init_SetControlParams_Request_max_speed(msg_);
  }

private:
  ::turtle_navigator::srv::SetControlParams_Request msg_;
};

class Init_SetControlParams_Request_linear_gain
{
public:
  Init_SetControlParams_Request_linear_gain()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetControlParams_Request_angular_gain linear_gain(::turtle_navigator::srv::SetControlParams_Request::_linear_gain_type arg)
  {
    msg_.linear_gain = std::move(arg);
    return Init_SetControlParams_Request_angular_gain(msg_);
  }

private:
  ::turtle_navigator::srv::SetControlParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::srv::SetControlParams_Request>()
{
  return turtle_navigator::srv::builder::Init_SetControlParams_Request_linear_gain();
}

}  // namespace turtle_navigator


namespace turtle_navigator
{

namespace srv
{

namespace builder
{

class Init_SetControlParams_Response_success
{
public:
  Init_SetControlParams_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_navigator::srv::SetControlParams_Response success(::turtle_navigator::srv::SetControlParams_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_navigator::srv::SetControlParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::srv::SetControlParams_Response>()
{
  return turtle_navigator::srv::builder::Init_SetControlParams_Response_success();
}

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__BUILDER_HPP_
