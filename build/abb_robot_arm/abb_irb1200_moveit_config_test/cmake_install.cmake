<<<<<<< HEAD
# Install script for directory: /home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/install")
=======
# Install script for directory: /home/user/Projects/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/Projects/robotenv_ws/install")
>>>>>>> 111af121142ca18e335d97f9c4da8065ef0ffcb4
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
<<<<<<< HEAD
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
=======
    set(CMAKE_INSTALL_CONFIG_NAME "")
>>>>>>> 111af121142ca18e335d97f9c4da8065ef0ffcb4
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
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/abb_robot_arm/abb_irb1200_moveit_config_test/catkin_generated/installspace/abb_irb1200_moveit_config_test.pc")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user/Projects/robotenv_ws/build/abb_robot_arm/abb_irb1200_moveit_config_test/catkin_generated/installspace/abb_irb1200_moveit_config_test.pc")
>>>>>>> 111af121142ca18e335d97f9c4da8065ef0ffcb4
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_moveit_config_test/cmake" TYPE FILE FILES
<<<<<<< HEAD
    "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/abb_robot_arm/abb_irb1200_moveit_config_test/catkin_generated/installspace/abb_irb1200_moveit_config_testConfig.cmake"
    "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/abb_robot_arm/abb_irb1200_moveit_config_test/catkin_generated/installspace/abb_irb1200_moveit_config_testConfig-version.cmake"
=======
    "/home/user/Projects/robotenv_ws/build/abb_robot_arm/abb_irb1200_moveit_config_test/catkin_generated/installspace/abb_irb1200_moveit_config_testConfig.cmake"
    "/home/user/Projects/robotenv_ws/build/abb_robot_arm/abb_irb1200_moveit_config_test/catkin_generated/installspace/abb_irb1200_moveit_config_testConfig-version.cmake"
>>>>>>> 111af121142ca18e335d97f9c4da8065ef0ffcb4
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
<<<<<<< HEAD
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_moveit_config_test" TYPE FILE FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_moveit_config_test" TYPE DIRECTORY FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test/launch" REGEX "/setup\\_assistant\\.launch$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_moveit_config_test" TYPE DIRECTORY FILES "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test/config")
=======
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_moveit_config_test" TYPE FILE FILES "/home/user/Projects/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_moveit_config_test" TYPE DIRECTORY FILES "/home/user/Projects/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test/launch" REGEX "/setup\\_assistant\\.launch$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb1200_moveit_config_test" TYPE DIRECTORY FILES "/home/user/Projects/robotenv_ws/src/abb_robot_arm/abb_irb1200_moveit_config_test/config")
>>>>>>> 111af121142ca18e335d97f9c4da8065ef0ffcb4
endif()

