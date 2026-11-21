// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/srv/detail/get_stream_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetStreamStatus_Request_stream_kind
{
public:
  explicit Init_GetStreamStatus_Request_stream_kind(::omniglove_interfaces::srv::GetStreamStatus_Request & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::srv::GetStreamStatus_Request stream_kind(::omniglove_interfaces::srv::GetStreamStatus_Request::_stream_kind_type arg)
  {
    msg_.stream_kind = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Request msg_;
};

class Init_GetStreamStatus_Request_device_uid
{
public:
  Init_GetStreamStatus_Request_device_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStreamStatus_Request_stream_kind device_uid(::omniglove_interfaces::srv::GetStreamStatus_Request::_device_uid_type arg)
  {
    msg_.device_uid = std::move(arg);
    return Init_GetStreamStatus_Request_stream_kind(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::GetStreamStatus_Request>()
{
  return omniglove_interfaces::srv::builder::Init_GetStreamStatus_Request_device_uid();
}

}  // namespace omniglove_interfaces


namespace omniglove_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetStreamStatus_Response_message
{
public:
  explicit Init_GetStreamStatus_Response_message(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::srv::GetStreamStatus_Response message(::omniglove_interfaces::srv::GetStreamStatus_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_last_source_status
{
public:
  explicit Init_GetStreamStatus_Response_last_source_status(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_message last_source_status(::omniglove_interfaces::srv::GetStreamStatus_Response::_last_source_status_type arg)
  {
    msg_.last_source_status = std::move(arg);
    return Init_GetStreamStatus_Response_message(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_last_delivered_sequence
{
public:
  explicit Init_GetStreamStatus_Response_last_delivered_sequence(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_last_source_status last_delivered_sequence(::omniglove_interfaces::srv::GetStreamStatus_Response::_last_delivered_sequence_type arg)
  {
    msg_.last_delivered_sequence = std::move(arg);
    return Init_GetStreamStatus_Response_last_source_status(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_last_source_sequence
{
public:
  explicit Init_GetStreamStatus_Response_last_source_sequence(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_last_delivered_sequence last_source_sequence(::omniglove_interfaces::srv::GetStreamStatus_Response::_last_source_sequence_type arg)
  {
    msg_.last_source_sequence = std::move(arg);
    return Init_GetStreamStatus_Response_last_delivered_sequence(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_callback_queue_high_watermark
{
public:
  explicit Init_GetStreamStatus_Response_callback_queue_high_watermark(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_last_source_sequence callback_queue_high_watermark(::omniglove_interfaces::srv::GetStreamStatus_Response::_callback_queue_high_watermark_type arg)
  {
    msg_.callback_queue_high_watermark = std::move(arg);
    return Init_GetStreamStatus_Response_last_source_sequence(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_callback_discontinuities
{
public:
  explicit Init_GetStreamStatus_Response_callback_discontinuities(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_callback_queue_high_watermark callback_discontinuities(::omniglove_interfaces::srv::GetStreamStatus_Response::_callback_discontinuities_type arg)
  {
    msg_.callback_discontinuities = std::move(arg);
    return Init_GetStreamStatus_Response_callback_queue_high_watermark(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_callback_dropped_full
{
public:
  explicit Init_GetStreamStatus_Response_callback_dropped_full(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_callback_discontinuities callback_dropped_full(::omniglove_interfaces::srv::GetStreamStatus_Response::_callback_dropped_full_type arg)
  {
    msg_.callback_dropped_full = std::move(arg);
    return Init_GetStreamStatus_Response_callback_discontinuities(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_callback_delivered
{
public:
  explicit Init_GetStreamStatus_Response_callback_delivered(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_callback_dropped_full callback_delivered(::omniglove_interfaces::srv::GetStreamStatus_Response::_callback_delivered_type arg)
  {
    msg_.callback_delivered = std::move(arg);
    return Init_GetStreamStatus_Response_callback_dropped_full(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_source_errors
{
public:
  explicit Init_GetStreamStatus_Response_source_errors(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_callback_delivered source_errors(::omniglove_interfaces::srv::GetStreamStatus_Response::_source_errors_type arg)
  {
    msg_.source_errors = std::move(arg);
    return Init_GetStreamStatus_Response_callback_delivered(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_source_timeouts
{
public:
  explicit Init_GetStreamStatus_Response_source_timeouts(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_source_errors source_timeouts(::omniglove_interfaces::srv::GetStreamStatus_Response::_source_timeouts_type arg)
  {
    msg_.source_timeouts = std::move(arg);
    return Init_GetStreamStatus_Response_source_errors(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_source_no_data
{
public:
  explicit Init_GetStreamStatus_Response_source_no_data(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_source_timeouts source_no_data(::omniglove_interfaces::srv::GetStreamStatus_Response::_source_no_data_type arg)
  {
    msg_.source_no_data = std::move(arg);
    return Init_GetStreamStatus_Response_source_timeouts(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_source_samples
{
public:
  explicit Init_GetStreamStatus_Response_source_samples(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_source_no_data source_samples(::omniglove_interfaces::srv::GetStreamStatus_Response::_source_samples_type arg)
  {
    msg_.source_samples = std::move(arg);
    return Init_GetStreamStatus_Response_source_no_data(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_source_events
{
public:
  explicit Init_GetStreamStatus_Response_source_events(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_source_samples source_events(::omniglove_interfaces::srv::GetStreamStatus_Response::_source_events_type arg)
  {
    msg_.source_events = std::move(arg);
    return Init_GetStreamStatus_Response_source_samples(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_actual_source_rate_millihz
{
public:
  explicit Init_GetStreamStatus_Response_actual_source_rate_millihz(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_source_events actual_source_rate_millihz(::omniglove_interfaces::srv::GetStreamStatus_Response::_actual_source_rate_millihz_type arg)
  {
    msg_.actual_source_rate_millihz = std::move(arg);
    return Init_GetStreamStatus_Response_source_events(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_pose_components
{
public:
  explicit Init_GetStreamStatus_Response_pose_components(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_actual_source_rate_millihz pose_components(::omniglove_interfaces::srv::GetStreamStatus_Response::_pose_components_type arg)
  {
    msg_.pose_components = std::move(arg);
    return Init_GetStreamStatus_Response_actual_source_rate_millihz(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_callback_queue_capacity
{
public:
  explicit Init_GetStreamStatus_Response_callback_queue_capacity(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_pose_components callback_queue_capacity(::omniglove_interfaces::srv::GetStreamStatus_Response::_callback_queue_capacity_type arg)
  {
    msg_.callback_queue_capacity = std::move(arg);
    return Init_GetStreamStatus_Response_pose_components(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_source_timeout_ms
{
public:
  explicit Init_GetStreamStatus_Response_source_timeout_ms(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_callback_queue_capacity source_timeout_ms(::omniglove_interfaces::srv::GetStreamStatus_Response::_source_timeout_ms_type arg)
  {
    msg_.source_timeout_ms = std::move(arg);
    return Init_GetStreamStatus_Response_callback_queue_capacity(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_source_interval_ms
{
public:
  explicit Init_GetStreamStatus_Response_source_interval_ms(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_source_timeout_ms source_interval_ms(::omniglove_interfaces::srv::GetStreamStatus_Response::_source_interval_ms_type arg)
  {
    msg_.source_interval_ms = std::move(arg);
    return Init_GetStreamStatus_Response_source_timeout_ms(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_enabled
{
public:
  explicit Init_GetStreamStatus_Response_enabled(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_source_interval_ms enabled(::omniglove_interfaces::srv::GetStreamStatus_Response::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_GetStreamStatus_Response_source_interval_ms(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_stream_mode
{
public:
  explicit Init_GetStreamStatus_Response_stream_mode(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_enabled stream_mode(::omniglove_interfaces::srv::GetStreamStatus_Response::_stream_mode_type arg)
  {
    msg_.stream_mode = std::move(arg);
    return Init_GetStreamStatus_Response_enabled(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_state
{
public:
  explicit Init_GetStreamStatus_Response_state(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_stream_mode state(::omniglove_interfaces::srv::GetStreamStatus_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GetStreamStatus_Response_stream_mode(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_stream_error
{
public:
  explicit Init_GetStreamStatus_Response_stream_error(::omniglove_interfaces::srv::GetStreamStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetStreamStatus_Response_state stream_error(::omniglove_interfaces::srv::GetStreamStatus_Response::_stream_error_type arg)
  {
    msg_.stream_error = std::move(arg);
    return Init_GetStreamStatus_Response_state(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

class Init_GetStreamStatus_Response_success
{
public:
  Init_GetStreamStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetStreamStatus_Response_stream_error success(::omniglove_interfaces::srv::GetStreamStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetStreamStatus_Response_stream_error(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetStreamStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::GetStreamStatus_Response>()
{
  return omniglove_interfaces::srv::builder::Init_GetStreamStatus_Response_success();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__BUILDER_HPP_
