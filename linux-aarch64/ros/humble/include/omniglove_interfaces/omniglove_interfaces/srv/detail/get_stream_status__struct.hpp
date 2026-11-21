// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__STRUCT_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Request __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStreamStatus_Request_
{
  using Type = GetStreamStatus_Request_<ContainerAllocator>;

  explicit GetStreamStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_uid = 0ull;
      this->stream_kind = 0;
    }
  }

  explicit GetStreamStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_uid = 0ull;
      this->stream_kind = 0;
    }
  }

  // field types and members
  using _device_uid_type =
    uint64_t;
  _device_uid_type device_uid;
  using _stream_kind_type =
    uint8_t;
  _stream_kind_type stream_kind;

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

  // constant declarations

  // pointer types
  using RawPtr =
    omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Request
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Request
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStreamStatus_Request_ & other) const
  {
    if (this->device_uid != other.device_uid) {
      return false;
    }
    if (this->stream_kind != other.stream_kind) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStreamStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStreamStatus_Request_

// alias to use template instance with default allocator
using GetStreamStatus_Request =
  omniglove_interfaces::srv::GetStreamStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces


#ifndef _WIN32
# define DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Response __declspec(deprecated)
#endif

namespace omniglove_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStreamStatus_Response_
{
  using Type = GetStreamStatus_Response_<ContainerAllocator>;

  explicit GetStreamStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->stream_error = 0ul;
      this->state = 0ul;
      this->stream_mode = 0ul;
      this->enabled = false;
      this->source_interval_ms = 0ul;
      this->source_timeout_ms = 0ul;
      this->callback_queue_capacity = 0ul;
      this->pose_components = 0ul;
      this->actual_source_rate_millihz = 0ull;
      this->source_events = 0ull;
      this->source_samples = 0ull;
      this->source_no_data = 0ull;
      this->source_timeouts = 0ull;
      this->source_errors = 0ull;
      this->callback_delivered = 0ull;
      this->callback_dropped_full = 0ull;
      this->callback_discontinuities = 0ull;
      this->callback_queue_high_watermark = 0ull;
      this->last_source_sequence = 0ull;
      this->last_delivered_sequence = 0ull;
      this->last_source_status = 0ul;
      this->message = "";
    }
  }

  explicit GetStreamStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->stream_error = 0ul;
      this->state = 0ul;
      this->stream_mode = 0ul;
      this->enabled = false;
      this->source_interval_ms = 0ul;
      this->source_timeout_ms = 0ul;
      this->callback_queue_capacity = 0ul;
      this->pose_components = 0ul;
      this->actual_source_rate_millihz = 0ull;
      this->source_events = 0ull;
      this->source_samples = 0ull;
      this->source_no_data = 0ull;
      this->source_timeouts = 0ull;
      this->source_errors = 0ull;
      this->callback_delivered = 0ull;
      this->callback_dropped_full = 0ull;
      this->callback_discontinuities = 0ull;
      this->callback_queue_high_watermark = 0ull;
      this->last_source_sequence = 0ull;
      this->last_delivered_sequence = 0ull;
      this->last_source_status = 0ul;
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
  using _state_type =
    uint32_t;
  _state_type state;
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
  using _actual_source_rate_millihz_type =
    uint64_t;
  _actual_source_rate_millihz_type actual_source_rate_millihz;
  using _source_events_type =
    uint64_t;
  _source_events_type source_events;
  using _source_samples_type =
    uint64_t;
  _source_samples_type source_samples;
  using _source_no_data_type =
    uint64_t;
  _source_no_data_type source_no_data;
  using _source_timeouts_type =
    uint64_t;
  _source_timeouts_type source_timeouts;
  using _source_errors_type =
    uint64_t;
  _source_errors_type source_errors;
  using _callback_delivered_type =
    uint64_t;
  _callback_delivered_type callback_delivered;
  using _callback_dropped_full_type =
    uint64_t;
  _callback_dropped_full_type callback_dropped_full;
  using _callback_discontinuities_type =
    uint64_t;
  _callback_discontinuities_type callback_discontinuities;
  using _callback_queue_high_watermark_type =
    uint64_t;
  _callback_queue_high_watermark_type callback_queue_high_watermark;
  using _last_source_sequence_type =
    uint64_t;
  _last_source_sequence_type last_source_sequence;
  using _last_delivered_sequence_type =
    uint64_t;
  _last_delivered_sequence_type last_delivered_sequence;
  using _last_source_status_type =
    uint32_t;
  _last_source_status_type last_source_status;
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
  Type & set__state(
    const uint32_t & _arg)
  {
    this->state = _arg;
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
  Type & set__actual_source_rate_millihz(
    const uint64_t & _arg)
  {
    this->actual_source_rate_millihz = _arg;
    return *this;
  }
  Type & set__source_events(
    const uint64_t & _arg)
  {
    this->source_events = _arg;
    return *this;
  }
  Type & set__source_samples(
    const uint64_t & _arg)
  {
    this->source_samples = _arg;
    return *this;
  }
  Type & set__source_no_data(
    const uint64_t & _arg)
  {
    this->source_no_data = _arg;
    return *this;
  }
  Type & set__source_timeouts(
    const uint64_t & _arg)
  {
    this->source_timeouts = _arg;
    return *this;
  }
  Type & set__source_errors(
    const uint64_t & _arg)
  {
    this->source_errors = _arg;
    return *this;
  }
  Type & set__callback_delivered(
    const uint64_t & _arg)
  {
    this->callback_delivered = _arg;
    return *this;
  }
  Type & set__callback_dropped_full(
    const uint64_t & _arg)
  {
    this->callback_dropped_full = _arg;
    return *this;
  }
  Type & set__callback_discontinuities(
    const uint64_t & _arg)
  {
    this->callback_discontinuities = _arg;
    return *this;
  }
  Type & set__callback_queue_high_watermark(
    const uint64_t & _arg)
  {
    this->callback_queue_high_watermark = _arg;
    return *this;
  }
  Type & set__last_source_sequence(
    const uint64_t & _arg)
  {
    this->last_source_sequence = _arg;
    return *this;
  }
  Type & set__last_delivered_sequence(
    const uint64_t & _arg)
  {
    this->last_delivered_sequence = _arg;
    return *this;
  }
  Type & set__last_source_status(
    const uint32_t & _arg)
  {
    this->last_source_status = _arg;
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
    omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Response
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omniglove_interfaces__srv__GetStreamStatus_Response
    std::shared_ptr<omniglove_interfaces::srv::GetStreamStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStreamStatus_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->stream_error != other.stream_error) {
      return false;
    }
    if (this->state != other.state) {
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
    if (this->actual_source_rate_millihz != other.actual_source_rate_millihz) {
      return false;
    }
    if (this->source_events != other.source_events) {
      return false;
    }
    if (this->source_samples != other.source_samples) {
      return false;
    }
    if (this->source_no_data != other.source_no_data) {
      return false;
    }
    if (this->source_timeouts != other.source_timeouts) {
      return false;
    }
    if (this->source_errors != other.source_errors) {
      return false;
    }
    if (this->callback_delivered != other.callback_delivered) {
      return false;
    }
    if (this->callback_dropped_full != other.callback_dropped_full) {
      return false;
    }
    if (this->callback_discontinuities != other.callback_discontinuities) {
      return false;
    }
    if (this->callback_queue_high_watermark != other.callback_queue_high_watermark) {
      return false;
    }
    if (this->last_source_sequence != other.last_source_sequence) {
      return false;
    }
    if (this->last_delivered_sequence != other.last_delivered_sequence) {
      return false;
    }
    if (this->last_source_status != other.last_source_status) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStreamStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStreamStatus_Response_

// alias to use template instance with default allocator
using GetStreamStatus_Response =
  omniglove_interfaces::srv::GetStreamStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omniglove_interfaces

namespace omniglove_interfaces
{

namespace srv
{

struct GetStreamStatus
{
  using Request = omniglove_interfaces::srv::GetStreamStatus_Request;
  using Response = omniglove_interfaces::srv::GetStreamStatus_Response;
};

}  // namespace srv

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__STRUCT_HPP_
