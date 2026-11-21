// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__DeviceInfo __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__DeviceInfo __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceInfo_
{
  using Type = DeviceInfo_<ContainerAllocator>;

  explicit DeviceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = 0ull;
      this->product_key = "";
      this->opaque_token = "";
      this->hand = 0;
      this->nominal_source_rate_hz = 0ul;
      this->topic_namespace = "";
    }
  }

  explicit DeviceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : product_key(_alloc),
    opaque_token(_alloc),
    topic_namespace(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = 0ull;
      this->product_key = "";
      this->opaque_token = "";
      this->hand = 0;
      this->nominal_source_rate_hz = 0ul;
      this->topic_namespace = "";
    }
  }

  // field types and members
  using _uid_type =
    uint64_t;
  _uid_type uid;
  using _product_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _product_key_type product_key;
  using _opaque_token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _opaque_token_type opaque_token;
  using _hand_type =
    uint8_t;
  _hand_type hand;
  using _nominal_source_rate_hz_type =
    uint32_t;
  _nominal_source_rate_hz_type nominal_source_rate_hz;
  using _topic_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_namespace_type topic_namespace;

  // setters for named parameter idiom
  Type & set__uid(
    const uint64_t & _arg)
  {
    this->uid = _arg;
    return *this;
  }
  Type & set__product_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->product_key = _arg;
    return *this;
  }
  Type & set__opaque_token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->opaque_token = _arg;
    return *this;
  }
  Type & set__hand(
    const uint8_t & _arg)
  {
    this->hand = _arg;
    return *this;
  }
  Type & set__nominal_source_rate_hz(
    const uint32_t & _arg)
  {
    this->nominal_source_rate_hz = _arg;
    return *this;
  }
  Type & set__topic_namespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_namespace = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAND_UNKNOWN =
    0u;
  static constexpr uint8_t HAND_LEFT =
    1u;
  static constexpr uint8_t HAND_RIGHT =
    2u;

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__DeviceInfo
    std::shared_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__DeviceInfo
    std::shared_ptr<omniglove_interfaces::msg::DeviceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceInfo_ & other) const
  {
    if (this->uid != other.uid) {
      return false;
    }
    if (this->product_key != other.product_key) {
      return false;
    }
    if (this->opaque_token != other.opaque_token) {
      return false;
    }
    if (this->hand != other.hand) {
      return false;
    }
    if (this->nominal_source_rate_hz != other.nominal_source_rate_hz) {
      return false;
    }
    if (this->topic_namespace != other.topic_namespace) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceInfo_

// alias to use template instance with default allocator
using DeviceInfo =
  omniglove_interfaces::msg::DeviceInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInfo_<ContainerAllocator>::HAND_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInfo_<ContainerAllocator>::HAND_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInfo_<ContainerAllocator>::HAND_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
