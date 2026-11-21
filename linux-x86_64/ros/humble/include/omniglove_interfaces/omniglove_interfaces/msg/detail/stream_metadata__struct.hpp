// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:msg/StreamMetadata.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__msg__StreamMetadata __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__msg__StreamMetadata __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StreamMetadata_
{
  using Type = StreamMetadata_<ContainerAllocator>;

  explicit StreamMetadata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand = 0;
      this->flags = 0ul;
      this->layout_version = 0ul;
      this->device_sequence = 0ul;
      this->device_uid = 0ull;
      this->source_device_id = 0ull;
      this->connection_generation = 0ull;
      this->source_sequence = 0ull;
      this->sample_monotonic_ns = 0ull;
      this->gap_count = 0ull;
    }
  }

  explicit StreamMetadata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand = 0;
      this->flags = 0ul;
      this->layout_version = 0ul;
      this->device_sequence = 0ul;
      this->device_uid = 0ull;
      this->source_device_id = 0ull;
      this->connection_generation = 0ull;
      this->source_sequence = 0ull;
      this->sample_monotonic_ns = 0ull;
      this->gap_count = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hand_type =
    uint8_t;
  _hand_type hand;
  using _flags_type =
    uint32_t;
  _flags_type flags;
  using _layout_version_type =
    uint32_t;
  _layout_version_type layout_version;
  using _device_sequence_type =
    uint32_t;
  _device_sequence_type device_sequence;
  using _device_uid_type =
    uint64_t;
  _device_uid_type device_uid;
  using _source_device_id_type =
    uint64_t;
  _source_device_id_type source_device_id;
  using _connection_generation_type =
    uint64_t;
  _connection_generation_type connection_generation;
  using _source_sequence_type =
    uint64_t;
  _source_sequence_type source_sequence;
  using _sample_monotonic_ns_type =
    uint64_t;
  _sample_monotonic_ns_type sample_monotonic_ns;
  using _gap_count_type =
    uint64_t;
  _gap_count_type gap_count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hand(
    const uint8_t & _arg)
  {
    this->hand = _arg;
    return *this;
  }
  Type & set__flags(
    const uint32_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__layout_version(
    const uint32_t & _arg)
  {
    this->layout_version = _arg;
    return *this;
  }
  Type & set__device_sequence(
    const uint32_t & _arg)
  {
    this->device_sequence = _arg;
    return *this;
  }
  Type & set__device_uid(
    const uint64_t & _arg)
  {
    this->device_uid = _arg;
    return *this;
  }
  Type & set__source_device_id(
    const uint64_t & _arg)
  {
    this->source_device_id = _arg;
    return *this;
  }
  Type & set__connection_generation(
    const uint64_t & _arg)
  {
    this->connection_generation = _arg;
    return *this;
  }
  Type & set__source_sequence(
    const uint64_t & _arg)
  {
    this->source_sequence = _arg;
    return *this;
  }
  Type & set__sample_monotonic_ns(
    const uint64_t & _arg)
  {
    this->sample_monotonic_ns = _arg;
    return *this;
  }
  Type & set__gap_count(
    const uint64_t & _arg)
  {
    this->gap_count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAND_UNKNOWN =
    0u;
  static constexpr uint8_t HAND_LEFT =
    1u;
  static constexpr uint8_t HAND_RIGHT =
    2u;
  static constexpr uint32_t SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH =
    1u;
  static constexpr uint32_t DEVICE_SEQUENCE_VALID =
    2u;

  // pointer types
  using RawPtr =
    omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__msg__StreamMetadata
    std::shared_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__msg__StreamMetadata
    std::shared_ptr<omniglove_interfaces::msg::StreamMetadata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StreamMetadata_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hand != other.hand) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->layout_version != other.layout_version) {
      return false;
    }
    if (this->device_sequence != other.device_sequence) {
      return false;
    }
    if (this->device_uid != other.device_uid) {
      return false;
    }
    if (this->source_device_id != other.source_device_id) {
      return false;
    }
    if (this->connection_generation != other.connection_generation) {
      return false;
    }
    if (this->source_sequence != other.source_sequence) {
      return false;
    }
    if (this->sample_monotonic_ns != other.sample_monotonic_ns) {
      return false;
    }
    if (this->gap_count != other.gap_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const StreamMetadata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StreamMetadata_

// alias to use template instance with default allocator
using StreamMetadata =
  omniglove_interfaces::msg::StreamMetadata_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StreamMetadata_<ContainerAllocator>::HAND_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StreamMetadata_<ContainerAllocator>::HAND_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StreamMetadata_<ContainerAllocator>::HAND_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t StreamMetadata_<ContainerAllocator>::SOURCE_DEVICE_ID_OPAQUE_TOKEN_HASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t StreamMetadata_<ContainerAllocator>::DEVICE_SEQUENCE_VALID;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__STRUCT_HPP_
