// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/TactileData.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/tactile_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_TactileData_unmapped_data
{
public:
  explicit Init_TactileData_unmapped_data(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::TactileData unmapped_data(::omniglove_interfaces::msg::TactileData::_unmapped_data_type arg)
  {
    msg_.unmapped_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_palm_surface
{
public:
  explicit Init_TactileData_palm_surface(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  Init_TactileData_unmapped_data palm_surface(::omniglove_interfaces::msg::TactileData::_palm_surface_type arg)
  {
    msg_.palm_surface = std::move(arg);
    return Init_TactileData_unmapped_data(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_pinky
{
public:
  explicit Init_TactileData_pinky(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  Init_TactileData_palm_surface pinky(::omniglove_interfaces::msg::TactileData::_pinky_type arg)
  {
    msg_.pinky = std::move(arg);
    return Init_TactileData_palm_surface(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_ring
{
public:
  explicit Init_TactileData_ring(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  Init_TactileData_pinky ring(::omniglove_interfaces::msg::TactileData::_ring_type arg)
  {
    msg_.ring = std::move(arg);
    return Init_TactileData_pinky(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_middle
{
public:
  explicit Init_TactileData_middle(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  Init_TactileData_ring middle(::omniglove_interfaces::msg::TactileData::_middle_type arg)
  {
    msg_.middle = std::move(arg);
    return Init_TactileData_ring(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_index
{
public:
  explicit Init_TactileData_index(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  Init_TactileData_middle index(::omniglove_interfaces::msg::TactileData::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_TactileData_middle(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_thumb
{
public:
  explicit Init_TactileData_thumb(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  Init_TactileData_index thumb(::omniglove_interfaces::msg::TactileData::_thumb_type arg)
  {
    msg_.thumb = std::move(arg);
    return Init_TactileData_index(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_count
{
public:
  explicit Init_TactileData_count(::omniglove_interfaces::msg::TactileData & msg)
  : msg_(msg)
  {}
  Init_TactileData_thumb count(::omniglove_interfaces::msg::TactileData::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_TactileData_thumb(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

class Init_TactileData_mapped
{
public:
  Init_TactileData_mapped()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactileData_count mapped(::omniglove_interfaces::msg::TactileData::_mapped_type arg)
  {
    msg_.mapped = std::move(arg);
    return Init_TactileData_count(msg_);
  }

private:
  ::omniglove_interfaces::msg::TactileData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::TactileData>()
{
  return omniglove_interfaces::msg::builder::Init_TactileData_mapped();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__TACTILE_DATA__BUILDER_HPP_
