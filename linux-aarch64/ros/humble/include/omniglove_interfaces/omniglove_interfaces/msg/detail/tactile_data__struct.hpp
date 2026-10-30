// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/TactileData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__STRUCT_HPP_

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
#include "omniglove_interfaces/msg/detail/tactile_finger__struct.hpp"
// Member 'palm_surface'
#include "omniglove_interfaces/msg/detail/tactile_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__TactileData __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__TactileData __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TactileData_
{
  using Type = TactileData_<ContainerAllocator>;

  explicit TactileData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : thumb(_init),
    index(_init),
    middle(_init),
    ring(_init),
    pinky(_init),
    palm_surface(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mapped = false;
      this->count = 0ul;
    }
  }

  explicit TactileData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : thumb(_alloc, _init),
    index(_alloc, _init),
    middle(_alloc, _init),
    ring(_alloc, _init),
    pinky(_alloc, _init),
    palm_surface(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mapped = false;
      this->count = 0ul;
    }
  }

  // field types and members
  using _mapped_type =
    bool;
  _mapped_type mapped;
  using _count_type =
    uint32_t;
  _count_type count;
  using _thumb_type =
    omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>;
  _thumb_type thumb;
  using _index_type =
    omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>;
  _index_type index;
  using _middle_type =
    omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>;
  _middle_type middle;
  using _ring_type =
    omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>;
  _ring_type ring;
  using _pinky_type =
    omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>;
  _pinky_type pinky;
  using _palm_surface_type =
    omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>;
  _palm_surface_type palm_surface;
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
  Type & set__count(
    const uint32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__thumb(
    const omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> & _arg)
  {
    this->thumb = _arg;
    return *this;
  }
  Type & set__index(
    const omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__middle(
    const omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> & _arg)
  {
    this->middle = _arg;
    return *this;
  }
  Type & set__ring(
    const omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> & _arg)
  {
    this->ring = _arg;
    return *this;
  }
  Type & set__pinky(
    const omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> & _arg)
  {
    this->pinky = _arg;
    return *this;
  }
  Type & set__palm_surface(
    const omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> & _arg)
  {
    this->palm_surface = _arg;
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
    omniglove_interfaces::msg::TactileData_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::TactileData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactileData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactileData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__TactileData
    std::shared_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__TactileData
    std::shared_ptr<omniglove_interfaces::msg::TactileData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TactileData_ & other) const
  {
    if (this->mapped != other.mapped) {
      return false;
    }
    if (this->count != other.count) {
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
    if (this->palm_surface != other.palm_surface) {
      return false;
    }
    if (this->unmapped_data != other.unmapped_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TactileData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TactileData_

// alias to use template instance with default allocator
using TactileData =
  omniglove_interfaces::msg::TactileData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__STRUCT_HPP_
