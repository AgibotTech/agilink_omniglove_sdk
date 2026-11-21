// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:srv/SetStreamConfig.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/srv/detail/set_stream_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStreamConfig_Request_pose_components
{
public:
  explicit Init_SetStreamConfig_Request_pose_components(::omniglove_interfaces::srv::SetStreamConfig_Request & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::srv::SetStreamConfig_Request pose_components(::omniglove_interfaces::srv::SetStreamConfig_Request::_pose_components_type arg)
  {
    msg_.pose_components = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

class Init_SetStreamConfig_Request_callback_queue_capacity
{
public:
  explicit Init_SetStreamConfig_Request_callback_queue_capacity(::omniglove_interfaces::srv::SetStreamConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Request_pose_components callback_queue_capacity(::omniglove_interfaces::srv::SetStreamConfig_Request::_callback_queue_capacity_type arg)
  {
    msg_.callback_queue_capacity = std::move(arg);
    return Init_SetStreamConfig_Request_pose_components(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

class Init_SetStreamConfig_Request_source_timeout_ms
{
public:
  explicit Init_SetStreamConfig_Request_source_timeout_ms(::omniglove_interfaces::srv::SetStreamConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Request_callback_queue_capacity source_timeout_ms(::omniglove_interfaces::srv::SetStreamConfig_Request::_source_timeout_ms_type arg)
  {
    msg_.source_timeout_ms = std::move(arg);
    return Init_SetStreamConfig_Request_callback_queue_capacity(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

class Init_SetStreamConfig_Request_source_interval_ms
{
public:
  explicit Init_SetStreamConfig_Request_source_interval_ms(::omniglove_interfaces::srv::SetStreamConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Request_source_timeout_ms source_interval_ms(::omniglove_interfaces::srv::SetStreamConfig_Request::_source_interval_ms_type arg)
  {
    msg_.source_interval_ms = std::move(arg);
    return Init_SetStreamConfig_Request_source_timeout_ms(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

class Init_SetStreamConfig_Request_enabled
{
public:
  explicit Init_SetStreamConfig_Request_enabled(::omniglove_interfaces::srv::SetStreamConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Request_source_interval_ms enabled(::omniglove_interfaces::srv::SetStreamConfig_Request::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_SetStreamConfig_Request_source_interval_ms(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

class Init_SetStreamConfig_Request_stream_mode
{
public:
  explicit Init_SetStreamConfig_Request_stream_mode(::omniglove_interfaces::srv::SetStreamConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Request_enabled stream_mode(::omniglove_interfaces::srv::SetStreamConfig_Request::_stream_mode_type arg)
  {
    msg_.stream_mode = std::move(arg);
    return Init_SetStreamConfig_Request_enabled(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

class Init_SetStreamConfig_Request_stream_kind
{
public:
  explicit Init_SetStreamConfig_Request_stream_kind(::omniglove_interfaces::srv::SetStreamConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Request_stream_mode stream_kind(::omniglove_interfaces::srv::SetStreamConfig_Request::_stream_kind_type arg)
  {
    msg_.stream_kind = std::move(arg);
    return Init_SetStreamConfig_Request_stream_mode(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

class Init_SetStreamConfig_Request_device_uid
{
public:
  Init_SetStreamConfig_Request_device_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStreamConfig_Request_stream_kind device_uid(::omniglove_interfaces::srv::SetStreamConfig_Request::_device_uid_type arg)
  {
    msg_.device_uid = std::move(arg);
    return Init_SetStreamConfig_Request_stream_kind(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::SetStreamConfig_Request>()
{
  return omniglove_interfaces::srv::builder::Init_SetStreamConfig_Request_device_uid();
}

}  // namespace omniglove_interfaces


namespace omniglove_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetStreamConfig_Response_message
{
public:
  explicit Init_SetStreamConfig_Response_message(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::srv::SetStreamConfig_Response message(::omniglove_interfaces::srv::SetStreamConfig_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_pose_components
{
public:
  explicit Init_SetStreamConfig_Response_pose_components(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Response_message pose_components(::omniglove_interfaces::srv::SetStreamConfig_Response::_pose_components_type arg)
  {
    msg_.pose_components = std::move(arg);
    return Init_SetStreamConfig_Response_message(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_callback_queue_capacity
{
public:
  explicit Init_SetStreamConfig_Response_callback_queue_capacity(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Response_pose_components callback_queue_capacity(::omniglove_interfaces::srv::SetStreamConfig_Response::_callback_queue_capacity_type arg)
  {
    msg_.callback_queue_capacity = std::move(arg);
    return Init_SetStreamConfig_Response_pose_components(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_source_timeout_ms
{
public:
  explicit Init_SetStreamConfig_Response_source_timeout_ms(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Response_callback_queue_capacity source_timeout_ms(::omniglove_interfaces::srv::SetStreamConfig_Response::_source_timeout_ms_type arg)
  {
    msg_.source_timeout_ms = std::move(arg);
    return Init_SetStreamConfig_Response_callback_queue_capacity(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_source_interval_ms
{
public:
  explicit Init_SetStreamConfig_Response_source_interval_ms(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Response_source_timeout_ms source_interval_ms(::omniglove_interfaces::srv::SetStreamConfig_Response::_source_interval_ms_type arg)
  {
    msg_.source_interval_ms = std::move(arg);
    return Init_SetStreamConfig_Response_source_timeout_ms(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_enabled
{
public:
  explicit Init_SetStreamConfig_Response_enabled(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Response_source_interval_ms enabled(::omniglove_interfaces::srv::SetStreamConfig_Response::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_SetStreamConfig_Response_source_interval_ms(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_stream_mode
{
public:
  explicit Init_SetStreamConfig_Response_stream_mode(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Response_enabled stream_mode(::omniglove_interfaces::srv::SetStreamConfig_Response::_stream_mode_type arg)
  {
    msg_.stream_mode = std::move(arg);
    return Init_SetStreamConfig_Response_enabled(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_stream_error
{
public:
  explicit Init_SetStreamConfig_Response_stream_error(::omniglove_interfaces::srv::SetStreamConfig_Response & msg)
  : msg_(msg)
  {}
  Init_SetStreamConfig_Response_stream_mode stream_error(::omniglove_interfaces::srv::SetStreamConfig_Response::_stream_error_type arg)
  {
    msg_.stream_error = std::move(arg);
    return Init_SetStreamConfig_Response_stream_mode(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

class Init_SetStreamConfig_Response_success
{
public:
  Init_SetStreamConfig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStreamConfig_Response_stream_error success(::omniglove_interfaces::srv::SetStreamConfig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetStreamConfig_Response_stream_error(msg_);
  }

private:
  ::omniglove_interfaces::srv::SetStreamConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::SetStreamConfig_Response>()
{
  return omniglove_interfaces::srv::builder::Init_SetStreamConfig_Response_success();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__BUILDER_HPP_
