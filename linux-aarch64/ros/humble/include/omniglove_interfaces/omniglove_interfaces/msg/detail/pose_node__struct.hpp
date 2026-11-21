// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PoseNode.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'emf'
#include "omniglove_interfaces/msg/detail/pose_emf__struct.hpp"
// Member 'imu'
#include "omniglove_interfaces/msg/detail/pose_imu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PoseNode __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PoseNode __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseNode_
{
  using Type = PoseNode_<ContainerAllocator>;

  explicit PoseNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : emf(_init),
    imu(_init)
  {
    (void)_init;
  }

  explicit PoseNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : emf(_alloc, _init),
    imu(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _emf_type =
    omniglove_interfaces::msg::PoseEmf_<ContainerAllocator>;
  _emf_type emf;
  using _imu_type =
    omniglove_interfaces::msg::PoseImu_<ContainerAllocator>;
  _imu_type imu;

  // setters for named parameter idiom
  Type & set__emf(
    const omniglove_interfaces::msg::PoseEmf_<ContainerAllocator> & _arg)
  {
    this->emf = _arg;
    return *this;
  }
  Type & set__imu(
    const omniglove_interfaces::msg::PoseImu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PoseNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PoseNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PoseNode
    std::shared_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PoseNode
    std::shared_ptr<omniglove_interfaces::msg::PoseNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseNode_ & other) const
  {
    if (this->emf != other.emf) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseNode_

// alias to use template instance with default allocator
using PoseNode =
  omniglove_interfaces::msg::PoseNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_NODE__STRUCT_HPP_
