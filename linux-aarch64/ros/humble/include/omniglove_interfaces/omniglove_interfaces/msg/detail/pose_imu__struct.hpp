// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PoseImu.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PoseImu __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PoseImu __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseImu_
{
  using Type = PoseImu_<ContainerAllocator>;

  explicit PoseImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->roll_pitch_yaw_cdeg.begin(), this->roll_pitch_yaw_cdeg.end(), 0);
      this->flags = 0;
    }
  }

  explicit PoseImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roll_pitch_yaw_cdeg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->roll_pitch_yaw_cdeg.begin(), this->roll_pitch_yaw_cdeg.end(), 0);
      this->flags = 0;
    }
  }

  // field types and members
  using _roll_pitch_yaw_cdeg_type =
    std::array<int16_t, 3>;
  _roll_pitch_yaw_cdeg_type roll_pitch_yaw_cdeg;
  using _flags_type =
    uint8_t;
  _flags_type flags;

  // setters for named parameter idiom
  Type & set__roll_pitch_yaw_cdeg(
    const std::array<int16_t, 3> & _arg)
  {
    this->roll_pitch_yaw_cdeg = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PoseImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PoseImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PoseImu
    std::shared_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PoseImu
    std::shared_ptr<omniglove_interfaces::msg::PoseImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseImu_ & other) const
  {
    if (this->roll_pitch_yaw_cdeg != other.roll_pitch_yaw_cdeg) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseImu_

// alias to use template instance with default allocator
using PoseImu =
  omniglove_interfaces::msg::PoseImu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__STRUCT_HPP_
