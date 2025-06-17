// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_navigator:srv/ClearWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__STRUCT_HPP_
#define TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_navigator__srv__ClearWaypoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_navigator__srv__ClearWaypoints_Request __declspec(deprecated)
#endif

namespace turtle_navigator
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearWaypoints_Request_
{
  using Type = ClearWaypoints_Request_<ContainerAllocator>;

  explicit ClearWaypoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ClearWaypoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_navigator__srv__ClearWaypoints_Request
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_navigator__srv__ClearWaypoints_Request
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearWaypoints_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearWaypoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearWaypoints_Request_

// alias to use template instance with default allocator
using ClearWaypoints_Request =
  turtle_navigator::srv::ClearWaypoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_navigator


#ifndef _WIN32
# define DEPRECATED__turtle_navigator__srv__ClearWaypoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_navigator__srv__ClearWaypoints_Response __declspec(deprecated)
#endif

namespace turtle_navigator
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearWaypoints_Response_
{
  using Type = ClearWaypoints_Response_<ContainerAllocator>;

  explicit ClearWaypoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cleared = false;
    }
  }

  explicit ClearWaypoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cleared = false;
    }
  }

  // field types and members
  using _cleared_type =
    bool;
  _cleared_type cleared;

  // setters for named parameter idiom
  Type & set__cleared(
    const bool & _arg)
  {
    this->cleared = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_navigator__srv__ClearWaypoints_Response
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_navigator__srv__ClearWaypoints_Response
    std::shared_ptr<turtle_navigator::srv::ClearWaypoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearWaypoints_Response_ & other) const
  {
    if (this->cleared != other.cleared) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearWaypoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearWaypoints_Response_

// alias to use template instance with default allocator
using ClearWaypoints_Response =
  turtle_navigator::srv::ClearWaypoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_navigator

namespace turtle_navigator
{

namespace srv
{

struct ClearWaypoints
{
  using Request = turtle_navigator::srv::ClearWaypoints_Request;
  using Response = turtle_navigator::srv::ClearWaypoints_Response;
};

}  // namespace srv

}  // namespace turtle_navigator

#endif  // TURTLE_NAVIGATOR__SRV__DETAIL__CLEAR_WAYPOINTS__STRUCT_HPP_
