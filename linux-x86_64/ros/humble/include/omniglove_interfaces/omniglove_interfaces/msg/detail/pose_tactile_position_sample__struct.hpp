// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PoseTactilePositionSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'metadata'
#include "omniglove_interfaces/msg/detail/stream_metadata__struct.hpp"
// Member 'data'
#include "omniglove_interfaces/msg/detail/pose_data__struct.hpp"
// Member 'tac_pos'
#include "omniglove_interfaces/msg/detail/tactile_position_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PoseTactilePositionSample __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PoseTactilePositionSample __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseTactilePositionSample_
{
  using Type = PoseTactilePositionSample_<ContainerAllocator>;

  explicit PoseTactilePositionSample_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : metadata(_init),
    data(_init),
    tac_pos(_init)
  {
    (void)_init;
  }

  explicit PoseTactilePositionSample_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : metadata(_alloc, _init),
    data(_alloc, _init),
    tac_pos(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _metadata_type =
    omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>;
  _metadata_type metadata;
  using _data_type =
    omniglove_interfaces::msg::PoseData_<ContainerAllocator>;
  _data_type data;
  using _tac_pos_type =
    omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator>;
  _tac_pos_type tac_pos;

  // setters for named parameter idiom
  Type & set__metadata(
    const omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }
  Type & set__data(
    const omniglove_interfaces::msg::PoseData_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__tac_pos(
    const omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator> & _arg)
  {
    this->tac_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PoseTactilePositionSample
    std::shared_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PoseTactilePositionSample
    std::shared_ptr<omniglove_interfaces::msg::PoseTactilePositionSample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseTactilePositionSample_ & other) const
  {
    if (this->metadata != other.metadata) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->tac_pos != other.tac_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseTactilePositionSample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseTactilePositionSample_

// alias to use template instance with default allocator
using PoseTactilePositionSample =
  omniglove_interfaces::msg::PoseTactilePositionSample_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__STRUCT_HPP_
