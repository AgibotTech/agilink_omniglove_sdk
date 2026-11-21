// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PoseData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'thumb'
// Member 'index'
// Member 'middle'
// Member 'ring'
// Member 'pinky'
// Member 'wrist'
#include "omniglove_interfaces/msg/detail/pose_node__struct.hpp"
// Member 'back_of_hand_imu'
#include "omniglove_interfaces/msg/detail/pose_imu__struct.hpp"
// Member 'tactile'
#include "omniglove_interfaces/msg/detail/tactile_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PoseData __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PoseData __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseData_
{
  using Type = PoseData_<ContainerAllocator>;

  explicit PoseData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : thumb(_init),
    index(_init),
    middle(_init),
    ring(_init),
    pinky(_init),
    wrist(_init),
    back_of_hand_imu(_init),
    tactile(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mapped = false;
      this->components = 0ul;
      this->device_tick_ms = 0ul;
    }
  }

  explicit PoseData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : thumb(_alloc, _init),
    index(_alloc, _init),
    middle(_alloc, _init),
    ring(_alloc, _init),
    pinky(_alloc, _init),
    wrist(_alloc, _init),
    back_of_hand_imu(_alloc, _init),
    tactile(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mapped = false;
      this->components = 0ul;
      this->device_tick_ms = 0ul;
    }
  }

  // field types and members
  using _mapped_type =
    bool;
  _mapped_type mapped;
  using _components_type =
    uint32_t;
  _components_type components;
  using _device_tick_ms_type =
    uint32_t;
  _device_tick_ms_type device_tick_ms;
  using _thumb_type =
    omniglove_interfaces::msg::PoseNode_<ContainerAllocator>;
  _thumb_type thumb;
  using _index_type =
    omniglove_interfaces::msg::PoseNode_<ContainerAllocator>;
  _index_type index;
  using _middle_type =
    omniglove_interfaces::msg::PoseNode_<ContainerAllocator>;
  _middle_type middle;
  using _ring_type =
    omniglove_interfaces::msg::PoseNode_<ContainerAllocator>;
  _ring_type ring;
  using _pinky_type =
    omniglove_interfaces::msg::PoseNode_<ContainerAllocator>;
  _pinky_type pinky;
  using _wrist_type =
    omniglove_interfaces::msg::PoseNode_<ContainerAllocator>;
  _wrist_type wrist;
  using _back_of_hand_imu_type =
    omniglove_interfaces::msg::PoseImu_<ContainerAllocator>;
  _back_of_hand_imu_type back_of_hand_imu;
  using _tactile_type =
    omniglove_interfaces::msg::TactileData_<ContainerAllocator>;
  _tactile_type tactile;
  using _unmapped_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _unmapped_data_type unmapped_data;

  // setters for named parameter idiom
  Type & set__mapped(
    const bool & _arg)
  {
    this->mapped = _arg;
    return *this;
  }
  Type & set__components(
    const uint32_t & _arg)
  {
    this->components = _arg;
    return *this;
  }
  Type & set__device_tick_ms(
    const uint32_t & _arg)
  {
    this->device_tick_ms = _arg;
    return *this;
  }
  Type & set__thumb(
    const omniglove_interfaces::msg::PoseNode_<ContainerAllocator> & _arg)
  {
    this->thumb = _arg;
    return *this;
  }
  Type & set__index(
    const omniglove_interfaces::msg::PoseNode_<ContainerAllocator> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__middle(
    const omniglove_interfaces::msg::PoseNode_<ContainerAllocator> & _arg)
  {
    this->middle = _arg;
    return *this;
  }
  Type & set__ring(
    const omniglove_interfaces::msg::PoseNode_<ContainerAllocator> & _arg)
  {
    this->ring = _arg;
    return *this;
  }
  Type & set__pinky(
    const omniglove_interfaces::msg::PoseNode_<ContainerAllocator> & _arg)
  {
    this->pinky = _arg;
    return *this;
  }
  Type & set__wrist(
    const omniglove_interfaces::msg::PoseNode_<ContainerAllocator> & _arg)
  {
    this->wrist = _arg;
    return *this;
  }
  Type & set__back_of_hand_imu(
    const omniglove_interfaces::msg::PoseImu_<ContainerAllocator> & _arg)
  {
    this->back_of_hand_imu = _arg;
    return *this;
  }
  Type & set__tactile(
    const omniglove_interfaces::msg::TactileData_<ContainerAllocator> & _arg)
  {
    this->tactile = _arg;
    return *this;
  }
  Type & set__unmapped_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->unmapped_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PoseData_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PoseData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PoseData
    std::shared_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PoseData
    std::shared_ptr<omniglove_interfaces::msg::PoseData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseData_ & other) const
  {
    if (this->mapped != other.mapped) {
      return false;
    }
    if (this->components != other.components) {
      return false;
    }
    if (this->device_tick_ms != other.device_tick_ms) {
      return false;
    }
    if (this->thumb != other.thumb) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->middle != other.middle) {
      return false;
    }
    if (this->ring != other.ring) {
      return false;
    }
    if (this->pinky != other.pinky) {
      return false;
    }
    if (this->wrist != other.wrist) {
      return false;
    }
    if (this->back_of_hand_imu != other.back_of_hand_imu) {
      return false;
    }
    if (this->tactile != other.tactile) {
      return false;
    }
    if (this->unmapped_data != other.unmapped_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseData_

// alias to use template instance with default allocator
using PoseData =
  omniglove_interfaces::msg::PoseData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_DATA__STRUCT_HPP_
