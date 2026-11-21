// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:srv/SetStreamConfig.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/srv/detail/set_stream_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStreamConfig_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_uid
  {
    out << "device_uid: ";
    rosidl_generator_traits::value_to_yaml(msg.device_uid, out);
    out << ", ";
  }

  // member: stream_kind
  {
    out << "stream_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_kind, out);
    out << ", ";
  }

  // member: stream_mode
  {
    out << "stream_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_mode, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: source_interval_ms
  {
    out << "source_interval_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_interval_ms, out);
    out << ", ";
  }

  // member: source_timeout_ms
  {
    out << "source_timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_timeout_ms, out);
    out << ", ";
  }

  // member: callback_queue_capacity
  {
    out << "callback_queue_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_queue_capacity, out);
    out << ", ";
  }

  // member: pose_components
  {
    out << "pose_components: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_components, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetStreamConfig_Request & msg,
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

  // member: stream_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_kind, out);
    out << "\n";
  }

  // member: stream_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_mode, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: source_interval_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_interval_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_interval_ms, out);
    out << "\n";
  }

  // member: source_timeout_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_timeout_ms, out);
    out << "\n";
  }

  // member: callback_queue_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callback_queue_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_queue_capacity, out);
    out << "\n";
  }

  // member: pose_components
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_components: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_components, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetStreamConfig_Request & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::srv::SetStreamConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::srv::SetStreamConfig_Request & msg)
{
  return omniglove_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::srv::SetStreamConfig_Request>()
{
  return "omniglove_interfaces::srv::SetStreamConfig_Request";
}

template<>
inline const char * name<omniglove_interfaces::srv::SetStreamConfig_Request>()
{
  return "omniglove_interfaces/srv/SetStreamConfig_Request";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::SetStreamConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::SetStreamConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::srv::SetStreamConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetStreamConfig_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: stream_error
  {
    out << "stream_error: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_error, out);
    out << ", ";
  }

  // member: stream_mode
  {
    out << "stream_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_mode, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: source_interval_ms
  {
    out << "source_interval_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_interval_ms, out);
    out << ", ";
  }

  // member: source_timeout_ms
  {
    out << "source_timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_timeout_ms, out);
    out << ", ";
  }

  // member: callback_queue_capacity
  {
    out << "callback_queue_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_queue_capacity, out);
    out << ", ";
  }

  // member: pose_components
  {
    out << "pose_components: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_components, out);
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
  const SetStreamConfig_Response & msg,
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

  // member: stream_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream_error: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_error, out);
    out << "\n";
  }

  // member: stream_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_mode, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: source_interval_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_interval_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_interval_ms, out);
    out << "\n";
  }

  // member: source_timeout_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.source_timeout_ms, out);
    out << "\n";
  }

  // member: callback_queue_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callback_queue_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_queue_capacity, out);
    out << "\n";
  }

  // member: pose_components
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_components: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_components, out);
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

inline std::string to_yaml(const SetStreamConfig_Response & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::srv::SetStreamConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::srv::SetStreamConfig_Response & msg)
{
  return omniglove_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::srv::SetStreamConfig_Response>()
{
  return "omniglove_interfaces::srv::SetStreamConfig_Response";
}

template<>
inline const char * name<omniglove_interfaces::srv::SetStreamConfig_Response>()
{
  return "omniglove_interfaces/srv/SetStreamConfig_Response";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::SetStreamConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::SetStreamConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::srv::SetStreamConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<omniglove_interfaces::srv::SetStreamConfig>()
{
  return "omniglove_interfaces::srv::SetStreamConfig";
}

template<>
inline const char * name<omniglove_interfaces::srv::SetStreamConfig>()
{
  return "omniglove_interfaces/srv/SetStreamConfig";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::SetStreamConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<omniglove_interfaces::srv::SetStreamConfig_Request>::value &&
    has_fixed_size<omniglove_interfaces::srv::SetStreamConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<omniglove_interfaces::srv::SetStreamConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<omniglove_interfaces::srv::SetStreamConfig_Request>::value &&
    has_bounded_size<omniglove_interfaces::srv::SetStreamConfig_Response>::value
  >
{
};

template<>
struct is_service<omniglove_interfaces::srv::SetStreamConfig>
  : std::true_type
{
};

template<>
struct is_service_request<omniglove_interfaces::srv::SetStreamConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<omniglove_interfaces::srv::SetStreamConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__SET_STREAM_CONFIG__TRAITS_HPP_
