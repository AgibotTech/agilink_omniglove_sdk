// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/PoseEmf.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__PoseEmf __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__PoseEmf __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseEmf_
{
  using Type = PoseEmf_<ContainerAllocator>;

  explicit PoseEmf_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->position_mm.begin(), this->position_mm.end(), 0);
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->yaw_pitch_roll_cdeg.begin(), this->yaw_pitch_roll_cdeg.end(), 0);
      this->confidence_milli = 0;
      this->valid = false;
    }
  }

  explicit PoseEmf_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_mm(_alloc),
    yaw_pitch_roll_cdeg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->position_mm.begin(), this->position_mm.end(), 0);
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->yaw_pitch_roll_cdeg.begin(), this->yaw_pitch_roll_cdeg.end(), 0);
      this->confidence_milli = 0;
      this->valid = false;
    }
  }

  // field types and members
  using _position_mm_type =
    std::array<int16_t, 3>;
  _position_mm_type position_mm;
  using _yaw_pitch_roll_cdeg_type =
    std::array<int16_t, 3>;
  _yaw_pitch_roll_cdeg_type yaw_pitch_roll_cdeg;
  using _confidence_milli_type =
    uint16_t;
  _confidence_milli_type confidence_milli;
  using _valid_type =
    bool;
  _valid_type valid;

  // setters for named parameter idiom
  Type & set__position_mm(
    const std::array<int16_t, 3> & _arg)
  {
    this->position_mm = _arg;
    return *this;
  }
  Type & set__yaw_pitch_roll_cdeg(
    const std::array<int16_t, 3> & _arg)
  {
    this->yaw_pitch_roll_cdeg = _arg;
    return *this;
  }
  Type & set__confidence_milli(
    const uint16_t & _arg)
  {
    this->confidence_milli = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::PoseEmf_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::PoseEmf_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseEmf_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::PoseEmf_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__PoseEmf
    std::shared_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__PoseEmf
    std::shared_ptr<omniglove_interfaces::msg::PoseEmf_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseEmf_ & other) const
  {
    if (this->position_mm != other.position_mm) {
      return false;
    }
    if (this->yaw_pitch_roll_cdeg != other.yaw_pitch_roll_cdeg) {
      return false;
    }
    if (this->confidence_milli != other.confidence_milli) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseEmf_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseEmf_

// alias to use template instance with default allocator
using PoseEmf =
  omniglove_interfaces::msg::PoseEmf_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__STRUCT_HPP_
