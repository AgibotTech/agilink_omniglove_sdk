// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:srv/ListDevices.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/srv/detail/list_devices__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListDevices_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListDevices_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListDevices_Request & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::srv::ListDevices_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::srv::ListDevices_Request & msg)
{
  return omniglove_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::srv::ListDevices_Request>()
{
  return "omniglove_interfaces::srv::ListDevices_Request";
}

template<>
inline const char * name<omniglove_interfaces::srv::ListDevices_Request>()
{
  return "omniglove_interfaces/srv/ListDevices_Request";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::ListDevices_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::ListDevices_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::srv::ListDevices_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'devices'
#include "omniglove_interfaces/msg/detail/device_info__traits.hpp"

namespace omniglove_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListDevices_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: devices
  {
    if (msg.devices.size() == 0) {
      out << "devices: []";
    } else {
      out << "devices: [";
      size_t pending_items = msg.devices.size();
      for (auto item : msg.devices) {
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
  const ListDevices_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: devices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.devices.size() == 0) {
      out << "devices: []\n";
    } else {
      out << "devices:\n";
      for (auto item : msg.devices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListDevices_Response & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::srv::ListDevices_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::srv::ListDevices_Response & msg)
{
  return omniglove_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::srv::ListDevices_Response>()
{
  return "omniglove_interfaces::srv::ListDevices_Response";
}

template<>
inline const char * name<omniglove_interfaces::srv::ListDevices_Response>()
{
  return "omniglove_interfaces/srv/ListDevices_Response";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::ListDevices_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::srv::ListDevices_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::srv::ListDevices_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<omniglove_interfaces::srv::ListDevices>()
{
  return "omniglove_interfaces::srv::ListDevices";
}

template<>
inline const char * name<omniglove_interfaces::srv::ListDevices>()
{
  return "omniglove_interfaces/srv/ListDevices";
}

template<>
struct has_fixed_size<omniglove_interfaces::srv::ListDevices>
  : std::integral_constant<
    bool,
    has_fixed_size<omniglove_interfaces::srv::ListDevices_Request>::value &&
    has_fixed_size<omniglove_interfaces::srv::ListDevices_Response>::value
  >
{
};

template<>
struct has_bounded_size<omniglove_interfaces::srv::ListDevices>
  : std::integral_constant<
    bool,
    has_bounded_size<omniglove_interfaces::srv::ListDevices_Request>::value &&
    has_bounded_size<omniglove_interfaces::srv::ListDevices_Response>::value
  >
{
};

template<>
struct is_service<omniglove_interfaces::srv::ListDevices>
  : std::true_type
{
};

template<>
struct is_service_request<omniglove_interfaces::srv::ListDevices_Request>
  : std::true_type
{
};

template<>
struct is_service_response<omniglove_interfaces::srv::ListDevices_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__TRAITS_HPP_
