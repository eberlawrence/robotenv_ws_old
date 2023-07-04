#! /usr/bin/env python
import rospy
import numpy as np
import sensor_msgs.msg
import sensor_msgs.point_cloud2 as pc2
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

def callback(data):
    print("oi3")
    # Accessing the point cloud data
    points = pc2.read_points(data, field_names=("x", "y", "z"), skip_nans=True)
    points_array = np.array(list(points))[300000:400000]
    print(points_array[50:100])
    print(points_array.shape)
    print(points_array.max())
    print(points_array.min())

    # global pointcloud
    # pointcloud = points_array
    if len(points_array) > 0:
        # Process the x, y, z coordinates as needed
        x = points_array[:, 0]
        y = points_array[:, 1]
        z = points_array[:, 2]
        fig = plt.figure()
        ax = fig.add_subplot(111, projection='3d')
        ax.scatter(x, y, z)

        # Set plot labels and title
        ax.set_xlabel('X')
        ax.set_ylabel('Y')
        ax.set_zlabel('Z')
        ax.set_title('Point Cloud Visualization')

        # Show the plot
        plt.show()
    #     print("Points:")
    #     for i in range(len(x)):
    #         print("x={}, y={}, z={}".format(x[i], y[i], z[i]))

rospy.init_node('pointcloud_topic_subscriber')  # Initialize the ROS node

# Create a subscriber object
rospy.Subscriber("/phoxi_camera/pointcloud", sensor_msgs.msg.PointCloud2, callback)

rospy.spin() 