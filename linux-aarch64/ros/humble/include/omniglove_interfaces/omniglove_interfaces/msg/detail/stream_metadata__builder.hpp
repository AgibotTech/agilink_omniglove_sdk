// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/StreamMetadata.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/stream_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_StreamMetadata_gap_count
{
public:
  explicit Init_StreamMetadata_gap_count(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::StreamMetadata gap_count(::omniglove_interfaces::msg::StreamMetadata::_gap_count_type arg)
  {
    msg_.gap_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_sample_monotonic_ns
{
public:
  explicit Init_StreamMetadata_sample_monotonic_ns(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_gap_count sample_monotonic_ns(::omniglove_interfaces::msg::StreamMetadata::_sample_monotonic_ns_type arg)
  {
    msg_.sample_monotonic_ns = std::move(arg);
    return Init_StreamMetadata_gap_count(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_source_sequence
{
public:
  explicit Init_StreamMetadata_source_sequence(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_sample_monotonic_ns source_sequence(::omniglove_interfaces::msg::StreamMetadata::_source_sequence_type arg)
  {
    msg_.source_sequence = std::move(arg);
    return Init_StreamMetadata_sample_monotonic_ns(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_connection_generation
{
public:
  explicit Init_StreamMetadata_connection_generation(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_source_sequence connection_generation(::omniglove_interfaces::msg::StreamMetadata::_connection_generation_type arg)
  {
    msg_.connection_generation = std::move(arg);
    return Init_StreamMetadata_source_sequence(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_source_device_id
{
public:
  explicit Init_StreamMetadata_source_device_id(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_connection_generation source_device_id(::omniglove_interfaces::msg::StreamMetadata::_source_device_id_type arg)
  {
    msg_.source_device_id = std::move(arg);
    return Init_StreamMetadata_connection_generation(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_device_uid
{
public:
  explicit Init_StreamMetadata_device_uid(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_source_device_id device_uid(::omniglove_interfaces::msg::StreamMetadata::_device_uid_type arg)
  {
    msg_.device_uid = std::move(arg);
    return Init_StreamMetadata_source_device_id(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_device_sequence
{
public:
  explicit Init_StreamMetadata_device_sequence(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_device_uid device_sequence(::omniglove_interfaces::msg::StreamMetadata::_device_sequence_type arg)
  {
    msg_.device_sequence = std::move(arg);
    return Init_StreamMetadata_device_uid(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_layout_version
{
public:
  explicit Init_StreamMetadata_layout_version(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_device_sequence layout_version(::omniglove_interfaces::msg::StreamMetadata::_layout_version_type arg)
  {
    msg_.layout_version = std::move(arg);
    return Init_StreamMetadata_device_sequence(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_flags
{
public:
  explicit Init_StreamMetadata_flags(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_layout_version flags(::omniglove_interfaces::msg::StreamMetadata::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_StreamMetadata_layout_version(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_hand
{
public:
  explicit Init_StreamMetadata_hand(::omniglove_interfaces::msg::StreamMetadata & msg)
  : msg_(msg)
  {}
  Init_StreamMetadata_flags hand(::omniglove_interfaces::msg::StreamMetadata::_hand_type arg)
  {
    msg_.hand = std::move(arg);
    return Init_StreamMetadata_flags(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

class Init_StreamMetadata_header
{
public:
  Init_StreamMetadata_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StreamMetadata_hand header(::omniglove_interfaces::msg::StreamMetadata::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StreamMetadata_hand(msg_);
  }

private:
  ::omniglove_interfaces::msg::StreamMetadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::StreamMetadata>()
{
  return omniglove_interfaces::msg::builder::Init_StreamMetadata_header();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__STREAM_METADATA__BUILDER_HPP_
