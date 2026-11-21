// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PoseImu.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/pose_imu.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_imu__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseImu & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll_pitch_yaw_cdeg
  {
    if (msg.roll_pitch_yaw_cdeg.size() == 0) {
      out << "roll_pitch_yaw_cdeg: []";
    } else {
      out << "roll_pitch_yaw_cdeg: [";
      size_t pending_items = msg.roll_pitch_yaw_cdeg.size();
      for (auto item : msg.roll_pitch_yaw_cdeg) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseImu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll_pitch_yaw_cdeg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roll_pitch_yaw_cdeg.size() == 0) {
      out << "roll_pitch_yaw_cdeg: []\n";
    } else {
      out << "roll_pitch_yaw_cdeg:\n";
      for (auto item : msg.roll_pitch_yaw_cdeg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseImu & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::PoseImu>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).roll_pitch_yaw_cdeg,
    std::forward<T>(msg).flags);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::PoseImu>()
{
  return "omniglove_interfaces::msg::PoseImu";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::PoseImu>()
{
  return "omniglove_interfaces/msg/PoseImu";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PoseImu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PoseImu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::msg::PoseImu>
  : std::true_type {};

template<>
struct MessageTraits<omniglove_interfaces::msg::PoseImu>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "roll_pitch_yaw_cdeg",
    "flags",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_IMU__TRAITS_HPP_
