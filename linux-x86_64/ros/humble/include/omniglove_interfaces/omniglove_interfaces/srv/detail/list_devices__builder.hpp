// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:srv/ListDevices.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/srv/detail/list_devices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::ListDevices_Request>()
{
  return ::omniglove_interfaces::srv::ListDevices_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace omniglove_interfaces


namespace omniglove_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListDevices_Response_devices
{
public:
  Init_ListDevices_Response_devices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::omniglove_interfaces::srv::ListDevices_Response devices(::omniglove_interfaces::srv::ListDevices_Response::_devices_type arg)
  {
    msg_.devices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::srv::ListDevices_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::srv::ListDevices_Response>()
{
  return omniglove_interfaces::srv::builder::Init_ListDevices_Response_devices();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__LIST_DEVICES__BUILDER_HPP_
