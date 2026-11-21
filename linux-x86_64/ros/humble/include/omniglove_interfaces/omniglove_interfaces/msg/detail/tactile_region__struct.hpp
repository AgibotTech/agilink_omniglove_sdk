// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/TactileRegion.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__TactileRegion __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__TactileRegion __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TactileRegion_
{
  using Type = TactileRegion_<ContainerAllocator>;

  explicit TactileRegion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0ul;
      this->columns = 0ul;
    }
  }

  explicit TactileRegion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0ul;
      this->columns = 0ul;
    }
  }

  // field types and members
  using _rows_type =
    uint32_t;
  _rows_type rows;
  using _columns_type =
    uint32_t;
  _columns_type columns;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__rows(
    const uint32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__columns(
    const uint32_t & _arg)
  {
    this->columns = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__TactileRegion
    std::shared_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__TactileRegion
    std::shared_ptr<omniglove_interfaces::msg::TactileRegion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TactileRegion_ & other) const
  {
    if (this->rows != other.rows) {
      return false;
    }
    if (this->columns != other.columns) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TactileRegion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TactileRegion_

// alias to use template instance with default allocator
using TactileRegion =
  omniglove_interfaces::msg::TactileRegion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_REGION__STRUCT_HPP_
