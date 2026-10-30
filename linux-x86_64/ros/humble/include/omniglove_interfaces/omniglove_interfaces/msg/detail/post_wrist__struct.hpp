// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PostWrist.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'landmark'
#include "omniglove_interfaces/msg/detail/pose6__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PostWrist __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PostWrist __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostWrist_
{
  using Type = PostWrist_<ContainerAllocator>;

  explicit PostWrist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : landmark(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion_xyzw.begin(), this->quaternion_xyzw.end(), 0.0f);
    }
  }

  explicit PostWrist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : landmark(_alloc, _init),
    quaternion_xyzw(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion_xyzw.begin(), this->quaternion_xyzw.end(), 0.0f);
    }
  }

  // field types and members
  using _landmark_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _landmark_type landmark;
  using _quaternion_xyzw_type =
    std::array<float, 4>;
  _quaternion_xyzw_type quaternion_xyzw;

  // setters for named parameter idiom
  Type & set__landmark(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->landmark = _arg;
    return *this;
  }
  Type & set__quaternion_xyzw(
    const std::array<float, 4> & _arg)
  {
    this->quaternion_xyzw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PostWrist_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PostWrist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostWrist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostWrist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PostWrist
    std::shared_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PostWrist
    std::shared_ptr<omniglove_interfaces::msg::PostWrist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostWrist_ & other) const
  {
    if (this->landmark != other.landmark) {
      return false;
    }
    if (this->quaternion_xyzw != other.quaternion_xyzw) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostWrist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostWrist_

// alias to use template instance with default allocator
using PostWrist =
  omniglove_interfaces::msg::PostWrist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_WRIST__STRUCT_HPP_
