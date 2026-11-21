// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:srv/SetStreamConfig.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Request __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStreamConfig_Request_
{
  using Type = SetStreamConfig_Request_<ContainerAllocator>;

  explicit SetStreamConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_uid = 0ull;
      this->stream_kind = 0;
      this->stream_mode = 0ul;
      this->enabled = false;
      this->source_interval_ms = 0ul;
      this->source_timeout_ms = 0ul;
      this->callback_queue_capacity = 0ul;
      this->pose_components = 0ul;
    }
  }

  explicit SetStreamConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_uid = 0ull;
      this->stream_kind = 0;
      this->stream_mode = 0ul;
      this->enabled = false;
      this->source_interval_ms = 0ul;
      this->source_timeout_ms = 0ul;
      this->callback_queue_capacity = 0ul;
      this->pose_components = 0ul;
    }
  }

  // field types and members
  using _device_uid_type =
    uint64_t;
  _device_uid_type device_uid;
  using _stream_kind_type =
    uint8_t;
  _stream_kind_type stream_kind;
  using _stream_mode_type =
    uint32_t;
  _stream_mode_type stream_mode;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _source_interval_ms_type =
    uint32_t;
  _source_interval_ms_type source_interval_ms;
  using _source_timeout_ms_type =
    uint32_t;
  _source_timeout_ms_type source_timeout_ms;
  using _callback_queue_capacity_type =
    uint32_t;
  _callback_queue_capacity_type callback_queue_capacity;
  using _pose_components_type =
    uint32_t;
  _pose_components_type pose_components;

  // setters for named parameter idiom
  Type & set__device_uid(
    const uint64_t & _arg)
  {
    this->device_uid = _arg;
    return *this;
  }
  Type & set__stream_kind(
    const uint8_t & _arg)
  {
    this->stream_kind = _arg;
    return *this;
  }
  Type & set__stream_mode(
    const uint32_t & _arg)
  {
    this->stream_mode = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__source_interval_ms(
    const uint32_t & _arg)
  {
    this->source_interval_ms = _arg;
    return *this;
  }
  Type & set__source_timeout_ms(
    const uint32_t & _arg)
  {
    this->source_timeout_ms = _arg;
    return *this;
  }
  Type & set__callback_queue_capacity(
    const uint32_t & _arg)
  {
    this->callback_queue_capacity = _arg;
    return *this;
  }
  Type & set__pose_components(
    const uint32_t & _arg)
  {
    this->pose_components = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Request
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Request
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStreamConfig_Request_ & other) const
  {
    if (this->device_uid != other.device_uid) {
      return false;
    }
    if (this->stream_kind != other.stream_kind) {
      return false;
    }
    if (this->stream_mode != other.stream_mode) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->source_interval_ms != other.source_interval_ms) {
      return false;
    }
    if (this->source_timeout_ms != other.source_timeout_ms) {
      return false;
    }
    if (this->callback_queue_capacity != other.callback_queue_capacity) {
      return false;
    }
    if (this->pose_components != other.pose_components) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStreamConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStreamConfig_Request_

// alias to use template instance with default allocator
using SetStreamConfig_Request =
  omniglove_interfaces::srv::SetStreamConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Response __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetStreamConfig_Response_
{
  using Type = SetStreamConfig_Response_<ContainerAllocator>;

  explicit SetStreamConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->stream_error = 0ul;
      this->stream_mode = 0ul;
      this->enabled = false;
      this->source_interval_ms = 0ul;
      this->source_timeout_ms = 0ul;
      this->callback_queue_capacity = 0ul;
      this->pose_components = 0ul;
      this->message = "";
    }
  }

  explicit SetStreamConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->stream_error = 0ul;
      this->stream_mode = 0ul;
      this->enabled = false;
      this->source_interval_ms = 0ul;
      this->source_timeout_ms = 0ul;
      this->callback_queue_capacity = 0ul;
      this->pose_components = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _stream_error_type =
    uint32_t;
  _stream_error_type stream_error;
  using _stream_mode_type =
    uint32_t;
  _stream_mode_type stream_mode;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _source_interval_ms_type =
    uint32_t;
  _source_interval_ms_type source_interval_ms;
  using _source_timeout_ms_type =
    uint32_t;
  _source_timeout_ms_type source_timeout_ms;
  using _callback_queue_capacity_type =
    uint32_t;
  _callback_queue_capacity_type callback_queue_capacity;
  using _pose_components_type =
    uint32_t;
  _pose_components_type pose_components;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__stream_error(
    const uint32_t & _arg)
  {
    this->stream_error = _arg;
    return *this;
  }
  Type & set__stream_mode(
    const uint32_t & _arg)
  {
    this->stream_mode = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__source_interval_ms(
    const uint32_t & _arg)
  {
    this->source_interval_ms = _arg;
    return *this;
  }
  Type & set__source_timeout_ms(
    const uint32_t & _arg)
  {
    this->source_timeout_ms = _arg;
    return *this;
  }
  Type & set__callback_queue_capacity(
    const uint32_t & _arg)
  {
    this->callback_queue_capacity = _arg;
    return *this;
  }
  Type & set__pose_components(
    const uint32_t & _arg)
  {
    this->pose_components = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Response
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__SetStreamConfig_Response
    std::shared_ptr<omniglove_interfaces::srv::SetStreamConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetStreamConfig_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->stream_error != other.stream_error) {
      return false;
    }
    if (this->stream_mode != other.stream_mode) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->source_interval_ms != other.source_interval_ms) {
      return false;
    }
    if (this->source_timeout_ms != other.source_timeout_ms) {
      return false;
    }
    if (this->callback_queue_capacity != other.callback_queue_capacity) {
      return false;
    }
    if (this->pose_components != other.pose_components) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetStreamConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetStreamConfig_Response_

// alias to use template instance with default allocator
using SetStreamConfig_Response =
  omniglove_interfaces::srv::SetStreamConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces

namespace omniglove_interfaces
{

namespace srv
{

struct SetStreamConfig
{
  using Request = omniglove_interfaces::srv::SetStreamConfig_Request;
  using Response = omniglove_interfaces::srv::SetStreamConfig_Response;
};

}  // namespace srv

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__STRUCT_HPP_
