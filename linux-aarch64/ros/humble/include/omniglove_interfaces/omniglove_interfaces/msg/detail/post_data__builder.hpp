// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_DATA__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostData_unmapped_data
{
public:
  explicit Init_PostData_unmapped_data(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostData unmapped_data(::omniglove_interfaces::msg::PostData::_unmapped_data_type arg)
  {
    msg_.unmapped_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_wrist
{
public:
  explicit Init_PostData_wrist(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_unmapped_data wrist(::omniglove_interfaces::msg::PostData::_wrist_type arg)
  {
    msg_.wrist = std::move(arg);
    return Init_PostData_unmapped_data(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_pinky
{
public:
  explicit Init_PostData_pinky(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_wrist pinky(::omniglove_interfaces::msg::PostData::_pinky_type arg)
  {
    msg_.pinky = std::move(arg);
    return Init_PostData_wrist(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_ring
{
public:
  explicit Init_PostData_ring(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_pinky ring(::omniglove_interfaces::msg::PostData::_ring_type arg)
  {
    msg_.ring = std::move(arg);
    return Init_PostData_pinky(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_middle
{
public:
  explicit Init_PostData_middle(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_ring middle(::omniglove_interfaces::msg::PostData::_middle_type arg)
  {
    msg_.middle = std::move(arg);
    return Init_PostData_ring(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_index
{
public:
  explicit Init_PostData_index(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_middle index(::omniglove_interfaces::msg::PostData::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_PostData_middle(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_thumb
{
public:
  explicit Init_PostData_thumb(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_index thumb(::omniglove_interfaces::msg::PostData::_thumb_type arg)
  {
    msg_.thumb = std::move(arg);
    return Init_PostData_index(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_frame_id
{
public:
  explicit Init_PostData_frame_id(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_thumb frame_id(::omniglove_interfaces::msg::PostData::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_PostData_thumb(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_reserved
{
public:
  explicit Init_PostData_reserved(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_frame_id reserved(::omniglove_interfaces::msg::PostData::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_PostData_frame_id(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_flags
{
public:
  explicit Init_PostData_flags(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_reserved flags(::omniglove_interfaces::msg::PostData::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_PostData_reserved(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_device_tick_ms
{
public:
  explicit Init_PostData_device_tick_ms(::omniglove_interfaces::msg::PostData & msg)
  : msg_(msg)
  {}
  Init_PostData_flags device_tick_ms(::omniglove_interfaces::msg::PostData::_device_tick_ms_type arg)
  {
    msg_.device_tick_ms = std::move(arg);
    return Init_PostData_flags(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

class Init_PostData_mapped
{
public:
  Init_PostData_mapped()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostData_device_tick_ms mapped(::omniglove_interfaces::msg::PostData::_mapped_type arg)
  {
    msg_.mapped = std::move(arg);
    return Init_PostData_device_tick_ms(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostData>()
{
  return omniglove_interfaces::msg::builder::Init_PostData_mapped();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_DATA__BUILDER_HPP_
