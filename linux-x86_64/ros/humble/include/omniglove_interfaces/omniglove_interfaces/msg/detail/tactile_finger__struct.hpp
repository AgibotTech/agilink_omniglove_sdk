// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/TactileFinger.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tip'
// Member 'pad'
// Member 'middle'
// Member 'root'
#include "omniglove_interfaces/msg/detail/tactile_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__TactileFinger __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__TactileFinger __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TactileFinger_
{
  using Type = TactileFinger_<ContainerAllocator>;

  explicit TactileFinger_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tip(_init),
    pad(_init),
    middle(_init),
    root(_init)
  {
    (void)_init;
  }

  explicit TactileFinger_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tip(_alloc, _init),
    pad(_alloc, _init),
    middle(_alloc, _init),
    root(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tip_type =
    omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>;
  _tip_type tip;
  using _pad_type =
    omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>;
  _pad_type pad;
  using _middle_type =
    omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>;
  _middle_type middle;
  using _root_type =
    omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>;
  _root_type root;

  // setters for named parameter idiom
  Type & set__tip(
    const omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> & _arg)
  {
    this->tip = _arg;
    return *this;
  }
  Type & set__pad(
    const omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> & _arg)
  {
    this->pad = _arg;
    return *this;
  }
  Type & set__middle(
    const omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> & _arg)
  {
    this->middle = _arg;
    return *this;
  }
  Type & set__root(
    const omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> & _arg)
  {
    this->root = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__TactileFinger
    std::shared_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__TactileFinger
    std::shared_ptr<omniglove_interfaces::msg::TactileFinger_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TactileFinger_ & other) const
  {
    if (this->tip != other.tip) {
      return false;
    }
    if (this->pad != other.pad) {
      return false;
    }
    if (this->middle != other.middle) {
      return false;
    }
    if (this->root != other.root) {
      return false;
    }
    return true;
  }
  bool operator!=(const TactileFinger_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TactileFinger_

// alias to use template instance with default allocator
using TactileFinger =
  omniglove_interfaces::msg::TactileFinger_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_FINGER__STRUCT_HPP_
