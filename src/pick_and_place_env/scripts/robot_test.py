#! /usr/bin/env python

import sys
import rospy
import moveit_commander
import moveit_msgs.msg
from random import random

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('move_group_python_interface_tutorial', anonymous=False)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()    
move_group = moveit_commander.MoveGroupCommander("robotic_arm")
display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path', moveit_msgs.msg.DisplayTrajectory, queue_size=1)

joint_goal = move_group.get_current_joint_values()
def joint_value_func():
  while not rospy.is_shutdown():
    joint_goal = [random(), random(), random(), random(), random(), random()]
    move_group.set_joint_value_target(joint_goal)
    move_group.plan()
    move_group.go(joint_goal, wait=True)
    move_group.stop()
    # rospy.sleep(2)
  moveit_commander.roscpp_shutdown()


def pose_func():
  while not rospy.is_shutdown():
    pose_goal = move_group.get_current_pose().pose
    print("POSE GOAL ----------> ", pose_goal)
    pose_goal.position.x = float(input("position.x"))
    move_group.set_pose_target(pose_goal)
    move_group.plan()
    move_group.go(pose_goal, wait=True)
    move_group.stop()
    # rospy.sleep(2)
  moveit_commander.roscpp_shutdown()




# pose_func()


waypoints = []
scale = 1.0
while not rospy.is_shutdown():
  wpose = move_group.get_current_pose().pose
  print("Current pose ------> ", wpose)
  wpose.position.x -= float(input())  # Third move sideways (y)

  # We want the Cartesian path to be interpolated at a resolution of 1 cm
  # which is why we will specify 0.01 as the eef_step in Cartesian
  # translation.  We will disable the jump threshold by setting it to 0.0,
  # ignoring the check for infeasible jumps in joint space, which is sufficient
  # for this tutorial.
  (plan, fraction) = move_group.compute_cartesian_path(
      [wpose], 0.01, 0.0  # waypoints to follow  # eef_step
  )  # jump_threshold

  display_trajectory = moveit_msgs.msg.DisplayTrajectory()
  display_trajectory.trajectory_start = robot.get_current_state()
  display_trajectory.trajectory.append(plan)
  # Publish
  display_trajectory_publisher.publish(display_trajectory)
  move_group.execute(plan, wait=True)