// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/srv/detail/get_pose_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPoseInfo_Request_timeout_ms
{
public:
  explicit Init_GetPoseInfo_Request_timeout_ms(::omniglove_interfaces::srv::GetPoseInfo_Request & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::srv::GetPoseInfo_Request timeout_ms(::omniglove_interfaces::srv::GetPoseInfo_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Request msg_;
};

class Init_GetPoseInfo_Request_info_type
{
public:
  explicit Init_GetPoseInfo_Request_info_type(::omniglove_interfaces::srv::GetPoseInfo_Request & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Request_timeout_ms info_type(::omniglove_interfaces::srv::GetPoseInfo_Request::_info_type_type arg)
  {
    msg_.info_type = std::move(arg);
    return Init_GetPoseInfo_Request_timeout_ms(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Request msg_;
};

class Init_GetPoseInfo_Request_device_uid
{
public:
  Init_GetPoseInfo_Request_device_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPoseInfo_Request_info_type device_uid(::omniglove_interfaces::srv::GetPoseInfo_Request::_device_uid_type arg)
  {
    msg_.device_uid = std::move(arg);
    return Init_GetPoseInfo_Request_info_type(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::GetPoseInfo_Request>()
{
  return omniglove_interfaces::srv::builder::Init_GetPoseInfo_Request_device_uid();
}

}  // namespace omniglove_interfaces


namespace omniglove_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPoseInfo_Response_message
{
public:
  explicit Init_GetPoseInfo_Response_message(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::srv::GetPoseInfo_Response message(::omniglove_interfaces::srv::GetPoseInfo_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_capability_flags
{
public:
  explicit Init_GetPoseInfo_Response_capability_flags(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_message capability_flags(::omniglove_interfaces::srv::GetPoseInfo_Response::_capability_flags_type arg)
  {
    msg_.capability_flags = std::move(arg);
    return Init_GetPoseInfo_Response_message(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_max_distance_mm
{
public:
  explicit Init_GetPoseInfo_Response_max_distance_mm(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_capability_flags max_distance_mm(::omniglove_interfaces::srv::GetPoseInfo_Response::_max_distance_mm_type arg)
  {
    msg_.max_distance_mm = std::move(arg);
    return Init_GetPoseInfo_Response_capability_flags(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_calibration_state
{
public:
  explicit Init_GetPoseInfo_Response_calibration_state(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_max_distance_mm calibration_state(::omniglove_interfaces::srv::GetPoseInfo_Response::_calibration_state_type arg)
  {
    msg_.calibration_state = std::move(arg);
    return Init_GetPoseInfo_Response_max_distance_mm(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_nominal_source_rate_hz
{
public:
  explicit Init_GetPoseInfo_Response_nominal_source_rate_hz(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_calibration_state nominal_source_rate_hz(::omniglove_interfaces::srv::GetPoseInfo_Response::_nominal_source_rate_hz_type arg)
  {
    msg_.nominal_source_rate_hz = std::move(arg);
    return Init_GetPoseInfo_Response_calibration_state(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_hand
{
public:
  explicit Init_GetPoseInfo_Response_hand(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_nominal_source_rate_hz hand(::omniglove_interfaces::srv::GetPoseInfo_Response::_hand_type arg)
  {
    msg_.hand = std::move(arg);
    return Init_GetPoseInfo_Response_nominal_source_rate_hz(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_node_count
{
public:
  explicit Init_GetPoseInfo_Response_node_count(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_hand node_count(::omniglove_interfaces::srv::GetPoseInfo_Response::_node_count_type arg)
  {
    msg_.node_count = std::move(arg);
    return Init_GetPoseInfo_Response_hand(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_protocol_sequence
{
public:
  explicit Init_GetPoseInfo_Response_protocol_sequence(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_node_count protocol_sequence(::omniglove_interfaces::srv::GetPoseInfo_Response::_protocol_sequence_type arg)
  {
    msg_.protocol_sequence = std::move(arg);
    return Init_GetPoseInfo_Response_node_count(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_connection_generation
{
public:
  explicit Init_GetPoseInfo_Response_connection_generation(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_protocol_sequence connection_generation(::omniglove_interfaces::srv::GetPoseInfo_Response::_connection_generation_type arg)
  {
    msg_.connection_generation = std::move(arg);
    return Init_GetPoseInfo_Response_protocol_sequence(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_request_id
{
public:
  explicit Init_GetPoseInfo_Response_request_id(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_connection_generation request_id(::omniglove_interfaces::srv::GetPoseInfo_Response::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_GetPoseInfo_Response_connection_generation(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_device_error_code
{
public:
  explicit Init_GetPoseInfo_Response_device_error_code(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_request_id device_error_code(::omniglove_interfaces::srv::GetPoseInfo_Response::_device_error_code_type arg)
  {
    msg_.device_error_code = std::move(arg);
    return Init_GetPoseInfo_Response_request_id(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_return_code
{
public:
  explicit Init_GetPoseInfo_Response_return_code(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_device_error_code return_code(::omniglove_interfaces::srv::GetPoseInfo_Response::_return_code_type arg)
  {
    msg_.return_code = std::move(arg);
    return Init_GetPoseInfo_Response_device_error_code(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_control_status
{
public:
  explicit Init_GetPoseInfo_Response_control_status(::omniglove_interfaces::srv::GetPoseInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetPoseInfo_Response_return_code control_status(::omniglove_interfaces::srv::GetPoseInfo_Response::_control_status_type arg)
  {
    msg_.control_status = std::move(arg);
    return Init_GetPoseInfo_Response_return_code(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

class Init_GetPoseInfo_Response_success
{
public:
  Init_GetPoseInfo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPoseInfo_Response_control_status success(::omniglove_interfaces::srv::GetPoseInfo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPoseInfo_Response_control_status(msg_);
  }

private:
  ::omniglove_interfaces::srv::GetPoseInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::GetPoseInfo_Response>()
{
  return omniglove_interfaces::srv::builder::Init_GetPoseInfo_Response_success();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__BUILDER_HPP_
