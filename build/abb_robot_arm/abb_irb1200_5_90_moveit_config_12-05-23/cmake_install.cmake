# Install script for directory: /home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_5_90_moveit_config_12-05-23

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/abb_robot_arm/abb_irb1200_5_90_moveit_config_12-05-23/catkin_generated/installspace/abb_irb1200_5_90_moveit_config_12-05-23.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_5_90_moveit_config_12-05-23/cmake" TYPE FILE FILES
    "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/abb_robot_arm/abb_irb1200_5_90_moveit_config_12-05-23/catkin_generated/installspace/abb_irb1200_5_90_moveit_config_12-05-23Config.cmake"
    "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/abb_robot_arm/abb_irb1200_5_90_moveit_config_12-05-23/catkin_generated/installspace/abb_irb1200_5_90_moveit_config_12-05-23Config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_5_90_moveit_config_12-05-23" TYPE FILE FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_5_90_moveit_config_12-05-23/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_5_90_moveit_config_12-05-23" TYPE DIRECTORY FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_5_90_moveit_config_12-05-23/launch" REGEX "/setup\\_assistant\\.launch$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_5_90_moveit_config_12-05-23" TYPE DIRECTORY FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_5_90_moveit_config_12-05-23/config")
endif()

