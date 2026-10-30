// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/srv/detail/get_pose_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPoseInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_uid
  {
    out << "device_uid: ";
    rosidl_generator_traits::value_to_yaml(msg.device_uid, out);
    out << ", ";
  }

  // member: info_type
  {
    out << "info_type: ";
    rosidl_generator_traits::value_to_yaml(msg.info_type, out);
    out << ", ";
  }

  // member: timeout_ms
  {
    out << "timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPoseInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_uid: ";
    rosidl_generator_traits::value_to_yaml(msg.device_uid, out);
    out << "\n";
  }

  // member: info_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info_type: ";
    rosidl_generator_traits::value_to_yaml(msg.info_type, out);
    out << "\n";
  }

  // member: timeout_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPoseInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omniglove_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omniglove_interfaces::srv::GetPoseInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::srv::GetPoseInfo_Request & msg)
{
  return omniglove_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::srv::GetPoseInfo_Request>()
{
  return "omniglove_interfaces::srv::GetPoseInfo_Request";
}

template<>
inline const char * name<omniglove_interfaces::srv::GetPoseInfo_Request>()
{
  return "omniglove_interfaces/srv/GetPoseInfo_Request";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetPoseInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetPoseInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::srv::GetPoseInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPoseInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: control_status
  {
    out << "control_status: ";
    rosidl_generator_traits::value_to_yaml(msg.control_status, out);
    out << ", ";
  }

  // member: return_code
  {
    out << "return_code: ";
    rosidl_generator_traits::value_to_yaml(msg.return_code, out);
    out << ", ";
  }

  // member: device_error_code
  {
    out << "device_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.device_error_code, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << ", ";
  }

  // member: connection_generation
  {
    out << "connection_generation: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_generation, out);
    out << ", ";
  }

  // member: protocol_sequence
  {
    out << "protocol_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_sequence, out);
    out << ", ";
  }

  // member: node_count
  {
    out << "node_count: ";
    rosidl_generator_traits::value_to_yaml(msg.node_count, out);
    out << ", ";
  }

  // member: hand
  {
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
    out << ", ";
  }

  // member: nominal_source_rate_hz
  {
    out << "nominal_source_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_source_rate_hz, out);
    out << ", ";
  }

  // member: calibration_state
  {
    out << "calibration_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_state, out);
    out << ", ";
  }

  // member: max_distance_mm
  {
    out << "max_distance_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance_mm, out);
    out << ", ";
  }

  // member: capability_flags
  {
    out << "capability_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.capability_flags, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPoseInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: control_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_status: ";
    rosidl_generator_traits::value_to_yaml(msg.control_status, out);
    out << "\n";
  }

  // member: return_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_code: ";
    rosidl_generator_traits::value_to_yaml(msg.return_code, out);
    out << "\n";
  }

  // member: device_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.device_error_code, out);
    out << "\n";
  }

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << "\n";
  }

  // member: connection_generation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_generation: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_generation, out);
    out << "\n";
  }

  // member: protocol_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_sequence, out);
    out << "\n";
  }

  // member: node_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_count: ";
    rosidl_generator_traits::value_to_yaml(msg.node_count, out);
    out << "\n";
  }

  // member: hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
    out << "\n";
  }

  // member: nominal_source_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_source_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_source_rate_hz, out);
    out << "\n";
  }

  // member: calibration_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_state, out);
    out << "\n";
  }

  // member: max_distance_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_distance_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance_mm, out);
    out << "\n";
  }

  // member: capability_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capability_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.capability_flags, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPoseInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omniglove_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omniglove_interfaces::srv::GetPoseInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::srv::GetPoseInfo_Response & msg)
{
  return omniglove_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::srv::GetPoseInfo_Response>()
{
  return "omniglove_interfaces::srv::GetPoseInfo_Response";
}

template<>
inline const char * name<omniglove_interfaces::srv::GetPoseInfo_Response>()
{
  return "omniglove_interfaces/srv/GetPoseInfo_Response";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetPoseInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetPoseInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::srv::GetPoseInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<omniglove_interfaces::srv::GetPoseInfo>()
{
  return "omniglove_interfaces::srv::GetPoseInfo";
}

template<>
inline const char * name<omniglove_interfaces::srv::GetPoseInfo>()
{
  return "omniglove_interfaces/srv/GetPoseInfo";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetPoseInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<omniglove_interfaces::srv::GetPoseInfo_Request>::value &&
    has_fixed_size<omniglove_interfaces::srv::GetPoseInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetPoseInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<omniglove_interfaces::srv::GetPoseInfo_Request>::value &&
    has_bounded_size<omniglove_interfaces::srv::GetPoseInfo_Response>::value
  >
{
};

template<>
struct is_service<omniglove_interfaces::srv::GetPoseInfo>
  : std::true_type
{
};

template<>
struct is_service_request<omniglove_interfaces::srv::GetPoseInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<omniglove_interfaces::srv::GetPoseInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__TRAITS_HPP_
