// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PostThumbJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PostThumbJoints __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PostThumbJoints __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostThumbJoints_
{
  using Type = PostThumbJoints_<ContainerAllocator>;

  explicit PostThumbJoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmc_rotation = 0.0f;
      this->cmc_abduction = 0.0f;
      this->cmc_flexion = 0.0f;
      this->mcp_flexion = 0.0f;
      this->ip_flexion = 0.0f;
    }
  }

  explicit PostThumbJoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmc_rotation = 0.0f;
      this->cmc_abduction = 0.0f;
      this->cmc_flexion = 0.0f;
      this->mcp_flexion = 0.0f;
      this->ip_flexion = 0.0f;
    }
  }

  // field types and members
  using _cmc_rotation_type =
    float;
  _cmc_rotation_type cmc_rotation;
  using _cmc_abduction_type =
    float;
  _cmc_abduction_type cmc_abduction;
  using _cmc_flexion_type =
    float;
  _cmc_flexion_type cmc_flexion;
  using _mcp_flexion_type =
    float;
  _mcp_flexion_type mcp_flexion;
  using _ip_flexion_type =
    float;
  _ip_flexion_type ip_flexion;

  // setters for named parameter idiom
  Type & set__cmc_rotation(
    const float & _arg)
  {
    this->cmc_rotation = _arg;
    return *this;
  }
  Type & set__cmc_abduction(
    const float & _arg)
  {
    this->cmc_abduction = _arg;
    return *this;
  }
  Type & set__cmc_flexion(
    const float & _arg)
  {
    this->cmc_flexion = _arg;
    return *this;
  }
  Type & set__mcp_flexion(
    const float & _arg)
  {
    this->mcp_flexion = _arg;
    return *this;
  }
  Type & set__ip_flexion(
    const float & _arg)
  {
    this->ip_flexion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PostThumbJoints
    std::shared_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PostThumbJoints
    std::shared_ptr<omniglove_interfaces::msg::PostThumbJoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostThumbJoints_ & other) const
  {
    if (this->cmc_rotation != other.cmc_rotation) {
      return false;
    }
    if (this->cmc_abduction != other.cmc_abduction) {
      return false;
    }
    if (this->cmc_flexion != other.cmc_flexion) {
      return false;
    }
    if (this->mcp_flexion != other.mcp_flexion) {
      return false;
    }
    if (this->ip_flexion != other.ip_flexion) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostThumbJoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostThumbJoints_

// alias to use template instance with default allocator
using PostThumbJoints =
  omniglove_interfaces::msg::PostThumbJoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_THUMB_JOINTS__STRUCT_HPP_
