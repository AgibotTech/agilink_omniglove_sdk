// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:srv/GetPoseInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/srv/get_pose_info.hpp"


#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_POSE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/srv/detail/get_pose_info__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
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

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::srv::GetPoseInfo_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).device_uid,
    std::forward<T>(msg).info_type,
    std::forward<T>(msg).timeout_ms);
}

}  // namespace srv

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::srv::GetPoseInfo_Request>()
{
  return "omniglove_interfaces::srv::GetPoseInfo_Request";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetPoseInfo_Request>()
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

template<>
struct MessageTraits<omniglove_interfaces::srv::GetPoseInfo_Request>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "device_uid",
    "info_type",
    "timeout_ms",
  };
};

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

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::srv::GetPoseInfo_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).success,
    std::forward<T>(msg).control_status,
    std::forward<T>(msg).return_code,
    std::forward<T>(msg).device_error_code,
    std::forward<T>(msg).request_id,
    std::forward<T>(msg).connection_generation,
    std::forward<T>(msg).protocol_sequence,
    std::forward<T>(msg).node_count,
    std::forward<T>(msg).hand,
    std::forward<T>(msg).nominal_source_rate_hz,
    std::forward<T>(msg).calibration_state,
    std::forward<T>(msg).max_distance_mm,
    std::forward<T>(msg).capability_flags,
    std::forward<T>(msg).message);
}

}  // namespace srv

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::srv::GetPoseInfo_Response>()
{
  return "omniglove_interfaces::srv::GetPoseInfo_Response";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetPoseInfo_Response>()
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

template<>
struct MessageTraits<omniglove_interfaces::srv::GetPoseInfo_Response>
{
  static constexpr std::size_t member_count = 14;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "success",
    "control_status",
    "return_code",
    "device_error_code",
    "request_id",
    "connection_generation",
    "protocol_sequence",
    "node_count",
    "hand",
    "nominal_source_rate_hz",
    "calibration_state",
    "max_distance_mm",
    "capability_flags",
    "message",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPoseInfo_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPoseInfo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPoseInfo_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::srv::GetPoseInfo_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::srv::GetPoseInfo_Event>()
{
  return "omniglove_interfaces::srv::GetPoseInfo_Event";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetPoseInfo_Event>()
{
  return "omniglove_interfaces/srv/GetPoseInfo_Event";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetPoseInfo_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetPoseInfo_Event>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::srv::GetPoseInfo_Request>::value && has_bounded_size<omniglove_interfaces::srv::GetPoseInfo_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<omniglove_interfaces::srv::GetPoseInfo_Event>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::srv::GetPoseInfo_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::srv::GetPoseInfo>()
{
  return "omniglove_interfaces::srv::GetPoseInfo";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetPoseInfo>()
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
