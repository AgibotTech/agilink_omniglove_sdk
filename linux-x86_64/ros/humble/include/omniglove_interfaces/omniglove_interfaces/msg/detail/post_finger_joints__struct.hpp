// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PostFingerJoints.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PostFingerJoints __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PostFingerJoints __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostFingerJoints_
{
  using Type = PostFingerJoints_<ContainerAllocator>;

  explicit PostFingerJoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mcp_abduction = 0.0f;
      this->mcp_flexion = 0.0f;
      this->pip_flexion = 0.0f;
      this->dip_flexion = 0.0f;
    }
  }

  explicit PostFingerJoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mcp_abduction = 0.0f;
      this->mcp_flexion = 0.0f;
      this->pip_flexion = 0.0f;
      this->dip_flexion = 0.0f;
    }
  }

  // field types and members
  using _mcp_abduction_type =
    float;
  _mcp_abduction_type mcp_abduction;
  using _mcp_flexion_type =
    float;
  _mcp_flexion_type mcp_flexion;
  using _pip_flexion_type =
    float;
  _pip_flexion_type pip_flexion;
  using _dip_flexion_type =
    float;
  _dip_flexion_type dip_flexion;

  // setters for named parameter idiom
  Type & set__mcp_abduction(
    const float & _arg)
  {
    this->mcp_abduction = _arg;
    return *this;
  }
  Type & set__mcp_flexion(
    const float & _arg)
  {
    this->mcp_flexion = _arg;
    return *this;
  }
  Type & set__pip_flexion(
    const float & _arg)
  {
    this->pip_flexion = _arg;
    return *this;
  }
  Type & set__dip_flexion(
    const float & _arg)
  {
    this->dip_flexion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PostFingerJoints
    std::shared_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PostFingerJoints
    std::shared_ptr<omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostFingerJoints_ & other) const
  {
    if (this->mcp_abduction != other.mcp_abduction) {
      return false;
    }
    if (this->mcp_flexion != other.mcp_flexion) {
      return false;
    }
    if (this->pip_flexion != other.pip_flexion) {
      return false;
    }
    if (this->dip_flexion != other.dip_flexion) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostFingerJoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostFingerJoints_

// alias to use template instance with default allocator
using PostFingerJoints =
  omniglove_interfaces::msg::PostFingerJoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER_JOINTS__STRUCT_HPP_
