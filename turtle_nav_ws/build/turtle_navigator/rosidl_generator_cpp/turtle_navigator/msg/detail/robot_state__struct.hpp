// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_navigator:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_navigator__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__turtle_navigator__msg__RobotState __declspec(deprecated)
#endif

namespace turtle_navigator
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0f;
      this->current_y = 0.0f;
      this->navigating = false;
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0f;
      this->current_y = 0.0f;
      this->navigating = false;
    }
  }

  // field types and members
  using _current_x_type =
    float;
  _current_x_type current_x;
  using _current_y_type =
    float;
  _current_y_type current_y;
  using _navigating_type =
    bool;
  _navigating_type navigating;

  // setters for named parameter idiom
  Type & set__current_x(
    const float & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const float & _arg)
  {
    this->current_y = _arg;
    return *this;
  }
  Type & set__navigating(
    const bool & _arg)
  {
    this->navigating = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_navigator::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_navigator::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_navigator__msg__RobotState
    std::shared_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_navigator__msg__RobotState
    std::shared_ptr<turtle_navigator::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    if (this->navigating != other.navigating) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  turtle_navigator::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
