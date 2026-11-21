// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/ImuRawSample.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/imu_raw_sample.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/imu_raw_sample__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuRawSample & msg,
  std::ostream & out)
{
  out << "{";
  // member: axes
  {
    if (msg.axes.size() == 0) {
      out << "axes: []";
    } else {
      out << "axes: [";
      size_t pending_items = msg.axes.size();
      for (auto item : msg.axes) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ImuRawSample & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: axes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.axes.size() == 0) {
      out << "axes: []\n";
    } else {
      out << "axes:\n";
      for (auto item : msg.axes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuRawSample & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::ImuRawSample>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).axes);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::ImuRawSample>()
{
  return "omniglove_interfaces::msg::ImuRawSample";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::ImuRawSample>()
{
  return "omniglove_interfaces/msg/ImuRawSample";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::ImuRawSample>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::ImuRawSample>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::msg::ImuRawSample>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::ImuRawSample>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "axes",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__IMU_RAW_SAMPLE__TRAITS_HPP_
