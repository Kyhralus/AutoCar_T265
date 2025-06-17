// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interface:srv/LaserOpenService.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__TRAITS_HPP_
#define CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_interface/srv/detail/laser_open_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LaserOpenService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaserOpenService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaserOpenService_Request & msg, bool use_flow_style = false)
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

}  // namespace car_interface

namespace rosidl_generator_traits
{

[[deprecated("use car_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_interface::srv::LaserOpenService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_interface::srv::LaserOpenService_Request & msg)
{
  return car_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_interface::srv::LaserOpenService_Request>()
{
  return "car_interface::srv::LaserOpenService_Request";
}

template<>
inline const char * name<car_interface::srv::LaserOpenService_Request>()
{
  return "car_interface/srv/LaserOpenService_Request";
}

template<>
struct has_fixed_size<car_interface::srv::LaserOpenService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interface::srv::LaserOpenService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interface::srv::LaserOpenService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace car_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LaserOpenService_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaserOpenService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaserOpenService_Response & msg, bool use_flow_style = false)
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

}  // namespace car_interface

namespace rosidl_generator_traits
{

[[deprecated("use car_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_interface::srv::LaserOpenService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const car_interface::srv::LaserOpenService_Response & msg)
{
  return car_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<car_interface::srv::LaserOpenService_Response>()
{
  return "car_interface::srv::LaserOpenService_Response";
}

template<>
inline const char * name<car_interface::srv::LaserOpenService_Response>()
{
  return "car_interface/srv/LaserOpenService_Response";
}

template<>
struct has_fixed_size<car_interface::srv::LaserOpenService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interface::srv::LaserOpenService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interface::srv::LaserOpenService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<car_interface::srv::LaserOpenService>()
{
  return "car_interface::srv::LaserOpenService";
}

template<>
inline const char * name<car_interface::srv::LaserOpenService>()
{
  return "car_interface/srv/LaserOpenService";
}

template<>
struct has_fixed_size<car_interface::srv::LaserOpenService>
  : std::integral_constant<
    bool,
    has_fixed_size<car_interface::srv::LaserOpenService_Request>::value &&
    has_fixed_size<car_interface::srv::LaserOpenService_Response>::value
  >
{
};

template<>
struct has_bounded_size<car_interface::srv::LaserOpenService>
  : std::integral_constant<
    bool,
    has_bounded_size<car_interface::srv::LaserOpenService_Request>::value &&
    has_bounded_size<car_interface::srv::LaserOpenService_Response>::value
  >
{
};

template<>
struct is_service<car_interface::srv::LaserOpenService>
  : std::true_type
{
};

template<>
struct is_service_request<car_interface::srv::LaserOpenService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<car_interface::srv::LaserOpenService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__TRAITS_HPP_
