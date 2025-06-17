// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_navigator:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_
#define TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_navigator/srv/detail/add_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_navigator
{

namespace srv
{

namespace builder
{

class Init_AddWaypoint_Request_y
{
public:
  explicit Init_AddWaypoint_Request_y(::turtle_navigator::srv::AddWaypoint_Request & msg)
  : msg_(msg)
  {}
  ::turtle_navigator::srv::AddWaypoint_Request y(::turtle_navigator::srv::AddWaypoint_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_navigator::srv::AddWaypoint_Request msg_;
};

class Init_AddWaypoint_Request_x
{
public:
  Init_AddWaypoint_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddWaypoint_Request_y x(::turtle_navigator::srv::AddWaypoint_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_AddWaypoint_Request_y(msg_);
  }

private:
  ::turtle_navigator::srv::AddWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::srv::AddWaypoint_Request>()
{
  return turtle_navigator::srv::builder::Init_AddWaypoint_Request_x();
}

}  // namespace turtle_navigator


namespace turtle_navigator
{

namespace srv
{

namespace builder
{

class Init_AddWaypoint_Response_success
{
public:
  Init_AddWaypoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_navigator::srv::AddWaypoint_Response success(::turtle_navigator::srv::AddWaypoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_navigator::srv::AddWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::srv::AddWaypoint_Response>()
{
  return turtle_navigator::srv::builder::Init_AddWaypoint_Response_success();
}

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_
