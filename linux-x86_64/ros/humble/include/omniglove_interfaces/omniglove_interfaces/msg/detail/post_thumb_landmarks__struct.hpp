// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PostThumbLandmarks.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cmc'
// Member 'mcp'
// Member 'ip'
// Member 'tip'
#include "omniglove_interfaces/msg/detail/pose6__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PostThumbLandmarks __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PostThumbLandmarks __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostThumbLandmarks_
{
  using Type = PostThumbLandmarks_<ContainerAllocator>;

  explicit PostThumbLandmarks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmc(_init),
    mcp(_init),
    ip(_init),
    tip(_init)
  {
    (void)_init;
  }

  explicit PostThumbLandmarks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmc(_alloc, _init),
    mcp(_alloc, _init),
    ip(_alloc, _init),
    tip(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cmc_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _cmc_type cmc;
  using _mcp_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _mcp_type mcp;
  using _ip_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _ip_type ip;
  using _tip_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _tip_type tip;

  // setters for named parameter idiom
  Type & set__cmc(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->cmc = _arg;
    return *this;
  }
  Type & set__mcp(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->mcp = _arg;
    return *this;
  }
  Type & set__ip(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->ip = _arg;
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
    omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PostThumbLandmarks
    std::shared_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PostThumbLandmarks
    std::shared_ptr<omniglove_interfaces::msg::PostThumbLandmarks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostThumbLandmarks_ & other) const
  {
    if (this->cmc != other.cmc) {
      return false;
    }
    if (this->mcp != other.mcp) {
      return false;
    }
    if (this->ip != other.ip) {
      return false;
    }
    if (this->tip != other.tip) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostThumbLandmarks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostThumbLandmarks_

// alias to use template instance with default allocator
using PostThumbLandmarks =
  omniglove_interfaces::msg::PostThumbLandmarks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_LANDMARKS__STRUCT_HPP_
