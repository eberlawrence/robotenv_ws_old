// Generated by gencpp from file phoxi_camera/GetFrameRequest.msg
// DO NOT EDIT!


#ifndef PHOXI_CAMERA_MESSAGE_GETFRAMEREQUEST_H
#define PHOXI_CAMERA_MESSAGE_GETFRAMEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace phoxi_camera
{
template <class ContainerAllocator>
struct GetFrameRequest_
{
  typedef GetFrameRequest_<ContainerAllocator> Type;

  GetFrameRequest_()
    : in(0)  {
    }
  GetFrameRequest_(const ContainerAllocator& _alloc)
    : in(0)  {
  (void)_alloc;
    }



   typedef int64_t _in_type;
  _in_type in;





  typedef boost::shared_ptr< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetFrameRequest_

typedef ::phoxi_camera::GetFrameRequest_<std::allocator<void> > GetFrameRequest;

typedef boost::shared_ptr< ::phoxi_camera::GetFrameRequest > GetFrameRequestPtr;
typedef boost::shared_ptr< ::phoxi_camera::GetFrameRequest const> GetFrameRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::phoxi_camera::GetFrameRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::phoxi_camera::GetFrameRequest_<ContainerAllocator1> & lhs, const ::phoxi_camera::GetFrameRequest_<ContainerAllocator2> & rhs)
{
  return lhs.in == rhs.in;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::phoxi_camera::GetFrameRequest_<ContainerAllocator1> & lhs, const ::phoxi_camera::GetFrameRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace phoxi_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4533fa4b560434bb6b34ff197fccd4e3";
  }

  static const char* value(const ::phoxi_camera::GetFrameRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4533fa4b560434bbULL;
  static const uint64_t static_value2 = 0x6b34ff197fccd4e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "phoxi_camera/GetFrameRequest";
  }

  static const char* value(const ::phoxi_camera::GetFrameRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 in        # id of scan returned by trigger_image service. If id is negative new frame is taken (no need to call trigger_image service).\n"
;
  }

  static const char* value(const ::phoxi_camera::GetFrameRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.in);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetFrameRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phoxi_camera::GetFrameRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::phoxi_camera::GetFrameRequest_<ContainerAllocator>& v)
  {
    s << indent << "in: ";
    Printer<int64_t>::stream(s, indent + "  ", v.in);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PHOXI_CAMERA_MESSAGE_GETFRAMEREQUEST_H
