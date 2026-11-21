// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PostFingerLandmarks.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mcp'
// Member 'pip'
// Member 'dip'
// Member 'tip'
#include "omniglove_interfaces/msg/detail/pose6__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PostFingerLandmarks __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PostFingerLandmarks __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostFingerLandmarks_
{
  using Type = PostFingerLandmarks_<ContainerAllocator>;

  explicit PostFingerLandmarks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mcp(_init),
    pip(_init),
    dip(_init),
    tip(_init)
  {
    (void)_init;
  }

  explicit PostFingerLandmarks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mcp(_alloc, _init),
    pip(_alloc, _init),
    dip(_alloc, _init),
    tip(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mcp_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _mcp_type mcp;
  using _pip_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _pip_type pip;
  using _dip_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _dip_type dip;
  using _tip_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _tip_type tip;

  // setters for named parameter idiom
  Type & set__mcp(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->mcp = _arg;
    return *this;
  }
  Type & set__pip(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->pip = _arg;
    return *this;
  }
  Type & set__dip(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->dip = _arg;
    return *this;
  }
  Type & set__tip(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->tip = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PostFingerLandmarks
    std::shared_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PostFingerLandmarks
    std::shared_ptr<omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostFingerLandmarks_ & other) const
  {
    if (this->mcp != other.mcp) {
      return false;
    }
    if (this->pip != other.pip) {
      return false;
    }
    if (this->dip != other.dip) {
      return false;
    }
    if (this->tip != other.tip) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostFingerLandmarks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostFingerLandmarks_

// alias to use template instance with default allocator
using PostFingerLandmarks =
  omniglove_interfaces::msg::PostFingerLandmarks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_LANDMARKS__STRUCT_HPP_
