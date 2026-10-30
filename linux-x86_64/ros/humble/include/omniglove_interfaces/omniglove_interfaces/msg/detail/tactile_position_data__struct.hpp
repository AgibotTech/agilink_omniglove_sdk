// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "omniglove_interfaces/msg/detail/tactile_point_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__TactilePositionData __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__TactilePositionData __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TactilePositionData_
{
  using Type = TactilePositionData_<ContainerAllocator>;

  explicit TactilePositionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ul;
      this->coordinate_frame = 0ul;
      this->unit = 0ul;
    }
  }

  explicit TactilePositionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ul;
      this->coordinate_frame = 0ul;
      this->unit = 0ul;
    }
  }

  // field types and members
  using _count_type =
    uint32_t;
  _count_type count;
  using _coordinate_frame_type =
    uint32_t;
  _coordinate_frame_type coordinate_frame;
  using _unit_type =
    uint32_t;
  _unit_type unit;
  using _points_type =
    std::vector<omniglove_interfaces::msg::TactilePointPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omniglove_interfaces::msg::TactilePointPosition_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__count(
    const uint32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__coordinate_frame(
    const uint32_t & _arg)
  {
    this->coordinate_frame = _arg;
    return *this;
  }
  Type & set__unit(
    const uint32_t & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<omniglove_interfaces::msg::TactilePointPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omniglove_interfaces::msg::TactilePointPosition_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t FRAME_WRIST =
    1u;
  static constexpr uint32_t UNIT_METER =
    1u;

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__TactilePositionData
    std::shared_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__TactilePositionData
    std::shared_ptr<omniglove_interfaces::msg::TactilePositionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TactilePositionData_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->coordinate_frame != other.coordinate_frame) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const TactilePositionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TactilePositionData_

// alias to use template instance with default allocator
using TactilePositionData =
  omniglove_interfaces::msg::TactilePositionData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TactilePositionData_<ContainerAllocator>::FRAME_WRIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TactilePositionData_<ContainerAllocator>::UNIT_METER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_POSITION_DATA__STRUCT_HPP_
