// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: uid
  {
    out << "uid: ";
    rosidl_generator_traits::value_to_yaml(msg.uid, out);
    out << ", ";
  }

  // member: product_key
  {
    out << "product_key: ";
    rosidl_generator_traits::value_to_yaml(msg.product_key, out);
    out << ", ";
  }

  // member: opaque_token
  {
    out << "opaque_token: ";
    rosidl_generator_traits::value_to_yaml(msg.opaque_token, out);
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

  // member: topic_namespace
  {
    out << "topic_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_namespace, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uid: ";
    rosidl_generator_traits::value_to_yaml(msg.uid, out);
    out << "\n";
  }

  // member: product_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product_key: ";
    rosidl_generator_traits::value_to_yaml(msg.product_key, out);
    out << "\n";
  }

  // member: opaque_token
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opaque_token: ";
    rosidl_generator_traits::value_to_yaml(msg.opaque_token, out);
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

  // member: topic_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_namespace, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omniglove_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omniglove_interfaces::msg::DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::DeviceInfo & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::DeviceInfo>()
{
  return "omniglove_interfaces::msg::DeviceInfo";
}

template<>
inline const char * name<omniglove_interfaces::msg::DeviceInfo>()
{
  return "omniglove_interfaces/msg/DeviceInfo";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<omniglove_interfaces::msg::DeviceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
