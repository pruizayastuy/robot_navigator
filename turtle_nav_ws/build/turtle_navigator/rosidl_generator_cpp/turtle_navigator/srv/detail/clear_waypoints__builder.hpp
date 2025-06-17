// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_navigator:srv/ClearWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__BUILDER_HPP_
#define TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_navigator/srv/detail/clear_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_navigator
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::srv::ClearWaypoints_Request>()
{
  return ::turtle_navigator::srv::ClearWaypoints_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtle_navigator


namespace turtle_navigator
{

namespace srv
{

namespace builder
{

class Init_ClearWaypoints_Response_cleared
{
public:
  Init_ClearWaypoints_Response_cleared()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_navigator::srv::ClearWaypoints_Response cleared(::turtle_navigator::srv::ClearWaypoints_Response::_cleared_type arg)
  {
    msg_.cleared = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_navigator::srv::ClearWaypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_navigator::srv::ClearWaypoints_Response>()
{
  return turtle_navigator::srv::builder::Init_ClearWaypoints_Response_cleared();
}

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__BUILDER_HPP_
