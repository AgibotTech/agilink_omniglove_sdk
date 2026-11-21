// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/Pose6.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__Pose6 __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__Pose6 __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose6_
{
  using Type = Pose6_<ContainerAllocator>;

  explicit Pose6_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->position_m.begin(), this->position_m.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion_xyzw.begin(), this->quaternion_xyzw.end(), 0.0f);
    }
  }

  explicit Pose6_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_m(_alloc),
    quaternion_xyzw(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->position_m.begin(), this->position_m.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion_xyzw.begin(), this->quaternion_xyzw.end(), 0.0f);
    }
  }

  // field types and members
  using _position_m_type =
    std::array<float, 3>;
  _position_m_type position_m;
  using _quaternion_xyzw_type =
    std::array<float, 4>;
  _quaternion_xyzw_type quaternion_xyzw;

  // setters for named parameter idiom
  Type & set__position_m(
    const std::array<float, 3> & _arg)
  {
    this->position_m = _arg;
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
    omniglove_interfaces::msg::Pose6_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::Pose6_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::Pose6_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::Pose6_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__Pose6
    std::shared_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__Pose6
    std::shared_ptr<omniglove_interfaces::msg::Pose6_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose6_ & other) const
  {
    if (this->position_m != other.position_m) {
      return false;
    }
    if (this->quaternion_xyzw != other.quaternion_xyzw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose6_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose6_

// alias to use template instance with default allocator
using Pose6 =
  omniglove_interfaces::msg::Pose6_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__STRUCT_HPP_
