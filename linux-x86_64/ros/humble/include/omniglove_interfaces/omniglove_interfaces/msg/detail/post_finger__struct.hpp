// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PostFinger.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joints_rad'
#include "omniglove_interfaces/msg/detail/post_finger_joints__struct.hpp"
// Member 'landmarks'
#include "omniglove_interfaces/msg/detail/post_finger_landmarks__struct.hpp"
// Member 'rx_tip_target'
#include "omniglove_interfaces/msg/detail/pose6__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PostFinger __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PostFinger __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostFinger_
{
  using Type = PostFinger_<ContainerAllocator>;

  explicit PostFinger_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints_rad(_init),
    landmarks(_init),
    rx_tip_target(_init)
  {
    (void)_init;
  }

  explicit PostFinger_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joints_rad(_alloc, _init),
    landmarks(_alloc, _init),
    rx_tip_target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joints_rad_type =
    omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator>;
  _joints_rad_type joints_rad;
  using _landmarks_type =
    omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator>;
  _landmarks_type landmarks;
  using _rx_tip_target_type =
    omniglove_interfaces::msg::Pose6_<ContainerAllocator>;
  _rx_tip_target_type rx_tip_target;

  // setters for named parameter idiom
  Type & set__joints_rad(
    const omniglove_interfaces::msg::PostFingerJoints_<ContainerAllocator> & _arg)
  {
    this->joints_rad = _arg;
    return *this;
  }
  Type & set__landmarks(
    const omniglove_interfaces::msg::PostFingerLandmarks_<ContainerAllocator> & _arg)
  {
    this->landmarks = _arg;
    return *this;
  }
  Type & set__rx_tip_target(
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> & _arg)
  {
    this->rx_tip_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PostFinger_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PostFinger_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostFinger_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PostFinger_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PostFinger
    std::shared_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PostFinger
    std::shared_ptr<omniglove_interfaces::msg::PostFinger_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostFinger_ & other) const
  {
    if (this->joints_rad != other.joints_rad) {
      return false;
    }
    if (this->landmarks != other.landmarks) {
      return false;
    }
    if (this->rx_tip_target != other.rx_tip_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostFinger_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostFinger_

// alias to use template instance with default allocator
using PostFinger =
  omniglove_interfaces::msg::PostFinger_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_FINGER__STRUCT_HPP_
