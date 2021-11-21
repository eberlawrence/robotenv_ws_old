// Generated by gencpp from file phoxi_camera/GetHardwareIdentificationResponse.msg
// DO NOT EDIT!


#ifndef PHOXI_CAMERA_MESSAGE_GETHARDWAREIDENTIFICATIONRESPONSE_H
#define PHOXI_CAMERA_MESSAGE_GETHARDWAREIDENTIFICATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace phoxi_camera
{
template <class ContainerAllocator>
struct GetHardwareIdentificationResponse_
{
  typedef GetHardwareIdentificationResponse_<ContainerAllocator> Type;

  GetHardwareIdentificationResponse_()
    : hardware_identification()
    , message()
    , success(false)  {
    }
  GetHardwareIdentificationResponse_(const ContainerAllocator& _alloc)
    : hardware_identification(_alloc)
    , message(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _hardware_identification_type;
  _hardware_identification_type hardware_identification;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetHardwareIdentificationResponse_

typedef ::phoxi_camera::GetHardwareIdentificationResponse_<std::allocator<void> > GetHardwareIdentificationResponse;

typedef boost::shared_ptr< ::phoxi_camera::GetHardwareIdentificationResponse > GetHardwareIdentificationResponsePtr;
typedef boost::shared_ptr< ::phoxi_camera::GetHardwareIdentificationResponse const> GetHardwareIdentificationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator1> & lhs, const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.hardware_identification == rhs.hardware_identification &&
    lhs.message == rhs.message &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator1> & lhs, const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace phoxi_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c34903a74c1048da945ec8ca8cfa315";
  }

  static const char* value(const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c34903a74c1048dULL;
  static const uint64_t static_value2 = 0xa945ec8ca8cfa315ULL;
};

template<class ContainerAllocator>
struct DataType< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "phoxi_camera/GetHardwareIdentificationResponse";
  }

  static const char* value(const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string hardware_identification\n"
"string message\n"
"bool success\n"
;
  }

  static const char* value(const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hardware_identification);
      stream.next(m.message);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetHardwareIdentificationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::phoxi_camera::GetHardwareIdentificationResponse_<ContainerAllocator>& v)
  {
    s << indent << "hardware_identification: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hardware_identification);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PHOXI_CAMERA_MESSAGE_GETHARDWAREIDENTIFICATIONRESPONSE_H
