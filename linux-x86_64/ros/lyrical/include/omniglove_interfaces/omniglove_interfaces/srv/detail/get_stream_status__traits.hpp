// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/srv/get_stream_status.hpp"


#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/srv/detail/get_stream_status__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStreamStatus_Request & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetStreamStatus_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStreamStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::srv::GetStreamStatus_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).device_uid,
    std::forward<T>(msg).stream_kind);
}

}  // namespace srv

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::srv::GetStreamStatus_Request>()
{
  return "omniglove_interfaces::srv::GetStreamStatus_Request";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetStreamStatus_Request>()
{
  return "omniglove_interfaces/srv/GetStreamStatus_Request";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetStreamStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetStreamStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::srv::GetStreamStatus_Request>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::srv::GetStreamStatus_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "device_uid",
    "stream_kind",
  };
};

}  // namespace rosidl_generator_traits

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStreamStatus_Response & msg,
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

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
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

  // member: actual_source_rate_millihz
  {
    out << "actual_source_rate_millihz: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_source_rate_millihz, out);
    out << ", ";
  }

  // member: source_events
  {
    out << "source_events: ";
    rosidl_generator_traits::value_to_yaml(msg.source_events, out);
    out << ", ";
  }

  // member: source_samples
  {
    out << "source_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.source_samples, out);
    out << ", ";
  }

  // member: source_no_data
  {
    out << "source_no_data: ";
    rosidl_generator_traits::value_to_yaml(msg.source_no_data, out);
    out << ", ";
  }

  // member: source_timeouts
  {
    out << "source_timeouts: ";
    rosidl_generator_traits::value_to_yaml(msg.source_timeouts, out);
    out << ", ";
  }

  // member: source_errors
  {
    out << "source_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.source_errors, out);
    out << ", ";
  }

  // member: callback_delivered
  {
    out << "callback_delivered: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_delivered, out);
    out << ", ";
  }

  // member: callback_dropped_full
  {
    out << "callback_dropped_full: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_dropped_full, out);
    out << ", ";
  }

  // member: callback_discontinuities
  {
    out << "callback_discontinuities: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_discontinuities, out);
    out << ", ";
  }

  // member: callback_queue_high_watermark
  {
    out << "callback_queue_high_watermark: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_queue_high_watermark, out);
    out << ", ";
  }

  // member: last_source_sequence
  {
    out << "last_source_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.last_source_sequence, out);
    out << ", ";
  }

  // member: last_delivered_sequence
  {
    out << "last_delivered_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.last_delivered_sequence, out);
    out << ", ";
  }

  // member: last_source_status
  {
    out << "last_source_status: ";
    rosidl_generator_traits::value_to_yaml(msg.last_source_status, out);
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
  const GetStreamStatus_Response & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
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

  // member: actual_source_rate_millihz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_source_rate_millihz: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_source_rate_millihz, out);
    out << "\n";
  }

  // member: source_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_events: ";
    rosidl_generator_traits::value_to_yaml(msg.source_events, out);
    out << "\n";
  }

  // member: source_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.source_samples, out);
    out << "\n";
  }

  // member: source_no_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_no_data: ";
    rosidl_generator_traits::value_to_yaml(msg.source_no_data, out);
    out << "\n";
  }

  // member: source_timeouts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_timeouts: ";
    rosidl_generator_traits::value_to_yaml(msg.source_timeouts, out);
    out << "\n";
  }

  // member: source_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.source_errors, out);
    out << "\n";
  }

  // member: callback_delivered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callback_delivered: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_delivered, out);
    out << "\n";
  }

  // member: callback_dropped_full
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callback_dropped_full: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_dropped_full, out);
    out << "\n";
  }

  // member: callback_discontinuities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callback_discontinuities: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_discontinuities, out);
    out << "\n";
  }

  // member: callback_queue_high_watermark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callback_queue_high_watermark: ";
    rosidl_generator_traits::value_to_yaml(msg.callback_queue_high_watermark, out);
    out << "\n";
  }

  // member: last_source_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_source_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.last_source_sequence, out);
    out << "\n";
  }

  // member: last_delivered_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_delivered_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.last_delivered_sequence, out);
    out << "\n";
  }

  // member: last_source_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_source_status: ";
    rosidl_generator_traits::value_to_yaml(msg.last_source_status, out);
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

inline std::string to_yaml(const GetStreamStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::srv::GetStreamStatus_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).success,
    std::forward<T>(msg).stream_error,
    std::forward<T>(msg).state,
    std::forward<T>(msg).stream_mode,
    std::forward<T>(msg).enabled,
    std::forward<T>(msg).source_interval_ms,
    std::forward<T>(msg).source_timeout_ms,
    std::forward<T>(msg).callback_queue_capacity,
    std::forward<T>(msg).pose_components,
    std::forward<T>(msg).actual_source_rate_millihz,
    std::forward<T>(msg).source_events,
    std::forward<T>(msg).source_samples,
    std::forward<T>(msg).source_no_data,
    std::forward<T>(msg).source_timeouts,
    std::forward<T>(msg).source_errors,
    std::forward<T>(msg).callback_delivered,
    std::forward<T>(msg).callback_dropped_full,
    std::forward<T>(msg).callback_discontinuities,
    std::forward<T>(msg).callback_queue_high_watermark,
    std::forward<T>(msg).last_source_sequence,
    std::forward<T>(msg).last_delivered_sequence,
    std::forward<T>(msg).last_source_status,
    std::forward<T>(msg).message);
}

}  // namespace srv

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::srv::GetStreamStatus_Response>()
{
  return "omniglove_interfaces::srv::GetStreamStatus_Response";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetStreamStatus_Response>()
{
  return "omniglove_interfaces/srv/GetStreamStatus_Response";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetStreamStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetStreamStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::srv::GetStreamStatus_Response>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::srv::GetStreamStatus_Response>
{
  static constexpr std::size_t member_count = 23;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "success",
    "stream_error",
    "state",
    "stream_mode",
    "enabled",
    "source_interval_ms",
    "source_timeout_ms",
    "callback_queue_capacity",
    "pose_components",
    "actual_source_rate_millihz",
    "source_events",
    "source_samples",
    "source_no_data",
    "source_timeouts",
    "source_errors",
    "callback_delivered",
    "callback_dropped_full",
    "callback_discontinuities",
    "callback_queue_high_watermark",
    "last_source_sequence",
    "last_delivered_sequence",
    "last_source_status",
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
  const GetStreamStatus_Event & msg,
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
  const GetStreamStatus_Event & msg,
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

inline std::string to_yaml(const GetStreamStatus_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::srv::GetStreamStatus_Event>, int> = 0>
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
constexpr const char * data_type<omniglove_interfaces::srv::GetStreamStatus_Event>()
{
  return "omniglove_interfaces::srv::GetStreamStatus_Event";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetStreamStatus_Event>()
{
  return "omniglove_interfaces/srv/GetStreamStatus_Event";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetStreamStatus_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetStreamStatus_Event>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::srv::GetStreamStatus_Request>::value && has_bounded_size<omniglove_interfaces::srv::GetStreamStatus_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<omniglove_interfaces::srv::GetStreamStatus_Event>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::srv::GetStreamStatus_Event>
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
constexpr const char * data_type<omniglove_interfaces::srv::GetStreamStatus>()
{
  return "omniglove_interfaces::srv::GetStreamStatus";
}

template<>
constexpr const char * name<omniglove_interfaces::srv::GetStreamStatus>()
{
  return "omniglove_interfaces/srv/GetStreamStatus";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::GetStreamStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<omniglove_interfaces::srv::GetStreamStatus_Request>::value &&
    has_fixed_size<omniglove_interfaces::srv::GetStreamStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<omniglove_interfaces::srv::GetStreamStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<omniglove_interfaces::srv::GetStreamStatus_Request>::value &&
    has_bounded_size<omniglove_interfaces::srv::GetStreamStatus_Response>::value
  >
{
};

template<>
struct is_service<omniglove_interfaces::srv::GetStreamStatus>
  : std::true_type
{
};

template<>
struct is_service_request<omniglove_interfaces::srv::GetStreamStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<omniglove_interfaces::srv::GetStreamStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__TRAITS_HPP_
