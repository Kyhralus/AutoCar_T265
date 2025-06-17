// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_t265_interface:srv/SendCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__TRAITS_HPP_
#define CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_t265_interface/srv/detail/send_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_t265_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: hex_command
  {
    out << "hex_command: ";
    rosidl_generator_traits::value_to_yaml(msg.hex_command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hex_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hex_command: ";
    rosidl_generator_traits::value_to_yaml(msg.hex_command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendCommand_Request & msg, bool use_flow_style = false)
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

}  // namespace car_t265_interface

namespace rosidl_generator_traits
{

[[deprecated("use car_t265_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_t265_interface::srv::SendCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_t265_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_t265_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_t265_interface::srv::SendCommand_Request & msg)
{
  return car_t265_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_t265_interface::srv::SendCommand_Request>()
{
  return "car_t265_interface::srv::SendCommand_Request";
}

template<>
inline const char * name<car_t265_interface::srv::SendCommand_Request>()
{
  return "car_t265_interface/srv/SendCommand_Request";
}

template<>
struct has_fixed_size<car_t265_interface::srv::SendCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_t265_interface::srv::SendCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_t265_interface::srv::SendCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace car_t265_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendCommand_Response & msg, bool use_flow_style = false)
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

}  // namespace car_t265_interface

namespace rosidl_generator_traits
{

[[deprecated("use car_t265_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_t265_interface::srv::SendCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_t265_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_t265_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_t265_interface::srv::SendCommand_Response & msg)
{
  return car_t265_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_t265_interface::srv::SendCommand_Response>()
{
  return "car_t265_interface::srv::SendCommand_Response";
}

template<>
inline const char * name<car_t265_interface::srv::SendCommand_Response>()
{
  return "car_t265_interface/srv/SendCommand_Response";
}

template<>
struct has_fixed_size<car_t265_interface::srv::SendCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_t265_interface::srv::SendCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_t265_interface::srv::SendCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<car_t265_interface::srv::SendCommand>()
{
  return "car_t265_interface::srv::SendCommand";
}

template<>
inline const char * name<car_t265_interface::srv::SendCommand>()
{
  return "car_t265_interface/srv/SendCommand";
}

template<>
struct has_fixed_size<car_t265_interface::srv::SendCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<car_t265_interface::srv::SendCommand_Request>::value &&
    has_fixed_size<car_t265_interface::srv::SendCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<car_t265_interface::srv::SendCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<car_t265_interface::srv::SendCommand_Request>::value &&
    has_bounded_size<car_t265_interface::srv::SendCommand_Response>::value
  >
{
};

template<>
struct is_service<car_t265_interface::srv::SendCommand>
  : std::true_type
{
};

template<>
struct is_service_request<car_t265_interface::srv::SendCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<car_t265_interface::srv::SendCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__TRAITS_HPP_
