// Generated by gencpp from file phoxi_camera/SaveLastFrameRequest.msg
// DO NOT EDIT!


#ifndef PHOXI_CAMERA_MESSAGE_SAVELASTFRAMEREQUEST_H
#define PHOXI_CAMERA_MESSAGE_SAVELASTFRAMEREQUEST_H


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
struct SaveLastFrameRequest_
{
  typedef SaveLastFrameRequest_<ContainerAllocator> Type;

  SaveLastFrameRequest_()
    : file_path()  {
    }
  SaveLastFrameRequest_(const ContainerAllocator& _alloc)
    : file_path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _file_path_type;
  _file_path_type file_path;





  typedef boost::shared_ptr< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SaveLastFrameRequest_

typedef ::phoxi_camera::SaveLastFrameRequest_<std::allocator<void> > SaveLastFrameRequest;

typedef boost::shared_ptr< ::phoxi_camera::SaveLastFrameRequest > SaveLastFrameRequestPtr;
typedef boost::shared_ptr< ::phoxi_camera::SaveLastFrameRequest const> SaveLastFrameRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator1> & lhs, const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator2> & rhs)
{
  return lhs.file_path == rhs.file_path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator1> & lhs, const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace phoxi_camera

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1f82596372c52a517e1fe32d1e998e8";
  }

  static const char* value(const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1f82596372c52a5ULL;
  static const uint64_t static_value2 = 0x17e1fe32d1e998e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "phoxi_camera/SaveLastFrameRequest";
  }

  static const char* value(const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string file_path     # full file path with file extension, available extensions: *.praw; *.ply; *.ptx; *.tif; *.prawf\n"
;
  }

  static const char* value(const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.file_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveLastFrameRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::phoxi_camera::SaveLastFrameRequest_<ContainerAllocator>& v)
  {
    s << indent << "file_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.file_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PHOXI_CAMERA_MESSAGE_SAVELASTFRAMEREQUEST_H
