// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/device_info.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
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

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::DeviceInfo>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).uid,
    std::forward<T>(msg).product_key,
    std::forward<T>(msg).opaque_token,
    std::forward<T>(msg).hand,
    std::forward<T>(msg).nominal_source_rate_hz,
    std::forward<T>(msg).topic_namespace);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::DeviceInfo>()
{
  return "omniglove_interfaces::msg::DeviceInfo";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::DeviceInfo>()
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

template<>
struct MessageTraits<omniglove_interfaces::msg::DeviceInfo>
{
  static constexpr std::size_t member_count = 6;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "uid",
    "product_key",
    "opaque_token",
    "hand",
    "nominal_source_rate_hz",
    "topic_namespace",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
