// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_navigator:srv/SetControlParams.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__STRUCT_HPP_
#define TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_navigator__srv__SetControlParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_navigator__srv__SetControlParams_Request __declspec(deprecated)
#endif

namespace turtle_navigator
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControlParams_Request_
{
  using Type = SetControlParams_Request_<ContainerAllocator>;

  explicit SetControlParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_gain = 0.0f;
      this->angular_gain = 0.0f;
      this->max_speed = 0.0f;
    }
  }

  explicit SetControlParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_gain = 0.0f;
      this->angular_gain = 0.0f;
      this->max_speed = 0.0f;
    }
  }

  // field types and members
  using _linear_gain_type =
    float;
  _linear_gain_type linear_gain;
  using _angular_gain_type =
    float;
  _angular_gain_type angular_gain;
  using _max_speed_type =
    float;
  _max_speed_type max_speed;

  // setters for named parameter idiom
  Type & set__linear_gain(
    const float & _arg)
  {
    this->linear_gain = _arg;
    return *this;
  }
  Type & set__angular_gain(
    const float & _arg)
  {
    this->angular_gain = _arg;
    return *this;
  }
  Type & set__max_speed(
    const float & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_navigator__srv__SetControlParams_Request
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_navigator__srv__SetControlParams_Request
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControlParams_Request_ & other) const
  {
    if (this->linear_gain != other.linear_gain) {
      return false;
    }
    if (this->angular_gain != other.angular_gain) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControlParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControlParams_Request_

// alias to use template instance with default allocator
using SetControlParams_Request =
  turtle_navigator::srv::SetControlParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_navigator


#ifndef _WIN32
# define DEPRECATED__turtle_navigator__srv__SetControlParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_navigator__srv__SetControlParams_Response __declspec(deprecated)
#endif

namespace turtle_navigator
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControlParams_Response_
{
  using Type = SetControlParams_Response_<ContainerAllocator>;

  explicit SetControlParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetControlParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_navigator__srv__SetControlParams_Response
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_navigator__srv__SetControlParams_Response
    std::shared_ptr<turtle_navigator::srv::SetControlParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControlParams_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControlParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControlParams_Response_

// alias to use template instance with default allocator
using SetControlParams_Response =
  turtle_navigator::srv::SetControlParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_navigator

namespace turtle_navigator
{

namespace srv
{

struct SetControlParams
{
  using Request = turtle_navigator::srv::SetControlParams_Request;
  using Response = turtle_navigator::srv::SetControlParams_Response;
};

}  // namespace srv

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__SET_CONTROL_PARAMS__STRUCT_HPP_
