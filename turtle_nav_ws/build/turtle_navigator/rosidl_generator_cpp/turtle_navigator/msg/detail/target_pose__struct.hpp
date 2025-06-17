// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_navigator:msg/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__STRUCT_HPP_
#define TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_navigator__msg__TargetPose __attribute__((deprecated))
#else
# define DEPRECATED__turtle_navigator__msg__TargetPose __declspec(deprecated)
#endif

namespace turtle_navigator
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetPose_
{
  using Type = TargetPose_<ContainerAllocator>;

  explicit TargetPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit TargetPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_navigator::msg::TargetPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_navigator::msg::TargetPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::msg::TargetPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::msg::TargetPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_navigator__msg__TargetPose
    std::shared_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_navigator__msg__TargetPose
    std::shared_ptr<turtle_navigator::msg::TargetPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetPose_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetPose_

// alias to use template instance with default allocator
using TargetPose =
  turtle_navigator::msg::TargetPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__MSG__DETAIL__TARGET_POSE__STRUCT_HPP_
