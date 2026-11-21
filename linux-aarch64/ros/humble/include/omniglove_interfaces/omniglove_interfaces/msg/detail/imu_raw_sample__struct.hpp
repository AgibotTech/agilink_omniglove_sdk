// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/ImuRawSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__ImuRawSample __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__ImuRawSample __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuRawSample_
{
  using Type = ImuRawSample_<ContainerAllocator>;

  explicit ImuRawSample_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 6>::iterator, int16_t>(this->axes.begin(), this->axes.end(), 0);
    }
  }

  explicit ImuRawSample_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : axes(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 6>::iterator, int16_t>(this->axes.begin(), this->axes.end(), 0);
    }
  }

  // field types and members
  using _axes_type =
    std::array<int16_t, 6>;
  _axes_type axes;

  // setters for named parameter idiom
  Type & set__axes(
    const std::array<int16_t, 6> & _arg)
  {
    this->axes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__ImuRawSample
    std::shared_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__ImuRawSample
    std::shared_ptr<omniglove_interfaces::msg::ImuRawSample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuRawSample_ & other) const
  {
    if (this->axes != other.axes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuRawSample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuRawSample_

// alias to use template instance with default allocator
using ImuRawSample =
  omniglove_interfaces::msg::ImuRawSample_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__STRUCT_HPP_
