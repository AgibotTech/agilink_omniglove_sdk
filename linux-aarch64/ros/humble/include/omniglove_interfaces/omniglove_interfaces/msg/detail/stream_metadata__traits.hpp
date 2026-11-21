// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/StreamMetadata.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/stream_metadata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StreamMetadata & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hand
  {
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << ", ";
  }

  // member: layout_version
  {
    out << "layout_version: ";
    rosidl_generator_traits::value_to_yaml(msg.layout_version, out);
    out << ", ";
  }

  // member: device_sequence
  {
    out << "device_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.device_sequence, out);
    out << ", ";
  }

  // member: device_uid
  {
    out << "device_uid: ";
    rosidl_generator_traits::value_to_yaml(msg.device_uid, out);
    out << ", ";
  }

  // member: source_device_id
  {
    out << "source_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_device_id, out);
    out << ", ";
  }

  // member: connection_generation
  {
    out << "connection_generation: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_generation, out);
    out << ", ";
  }

  // member: source_sequence
  {
    out << "source_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.source_sequence, out);
    out << ", ";
  }

  // member: sample_monotonic_ns
  {
    out << "sample_monotonic_ns: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_monotonic_ns, out);
    out << ", ";
  }

  // member: gap_count
  {
    out << "gap_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StreamMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
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

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: layout_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layout_version: ";
    rosidl_generator_traits::value_to_yaml(msg.layout_version, out);
    out << "\n";
  }

  // member: device_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.device_sequence, out);
    out << "\n";
  }

  // member: device_uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_uid: ";
    rosidl_generator_traits::value_to_yaml(msg.device_uid, out);
    out << "\n";
  }

  // member: source_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_device_id, out);
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

  // member: source_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.source_sequence, out);
    out << "\n";
  }

  // member: sample_monotonic_ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_monotonic_ns: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_monotonic_ns, out);
    out << "\n";
  }

  // member: gap_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gap_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StreamMetadata & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::msg::StreamMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::StreamMetadata & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::StreamMetadata>()
{
  return "omniglove_interfaces::msg::StreamMetadata";
}

template<>
inline const char * name<omniglove_interfaces::msg::StreamMetadata>()
{
  return "omniglove_interfaces/msg/StreamMetadata";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::StreamMetadata>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::StreamMetadata>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<omniglove_interfaces::msg::StreamMetadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__TRAITS_HPP_
