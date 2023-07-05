#! /usr/bin/env python
import rospy
import numpy as np
import sensor_msgs.msg
import sensor_msgs.point_cloud2 as pc2
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from sklearn.cluster import DBSCAN

def callback(data):
    # Accessing the point cloud data
    points = pc2.read_points(data, field_names=("x", "y", "z"), skip_nans=True)
    points_array = np.array(list(points))
    if len(points_array) > 0:

        angle = np.radians(-15.45)
        rotation_matrix = np.array([[np.cos(angle), 0, np.sin(angle)],
                                    [0, 1, 0],
                                    [-np.sin(angle), 0, np.cos(angle)]])
        points_array = np.dot(points_array, rotation_matrix.T)
        x_threshold_min = -0.25
        x_threshold_max = 0.05

        z_threshold_min = 0
        z_threshold_max = 0.51

        x_values = points_array[:,0]
        z_values = points_array[:,2]

        x_mask = np.logical_and(x_values > x_threshold_min, x_values < x_threshold_max)
        z_mask = np.logical_and(z_values > z_threshold_min, z_values < z_threshold_max)

        mask = np.logical_and(z_mask, x_mask)
        new_points = points_array[mask]
        print(new_points.shape)

        # random_indices = np.random.choice(new_points.shape[0], size=30000, replace=False)
        # new_points = new_points[random_indices]



        # Assuming you have a NumPy array called "point_cloud" with shape (500000, 3)
        # where each row represents a point in 3D space with (x, y, z) coordinates

        # Define the parameters for DBSCAN clustering
        eps = 0.01  # Distance threshold for neighboring points
        min_samples = 10  # Minimum number of points in a cluster

        # Perform DBSCAN clustering
        dbscan = DBSCAN(eps=eps, min_samples=min_samples)
        labels = dbscan.fit_predict(new_points)

        # Get unique labels assigned to each point
        unique_labels = np.unique(labels)

        # Segment the point cloud based on the unique labels
        segmented_point_cloud = []
        for label in unique_labels:
            segment = new_points[labels == label]
            segmented_point_cloud.append(segment)

        # Convert the segmented point clouds to NumPy arrays
        segmented_point_cloud = np.array([np.asarray(segment) for segment in segmented_point_cloud])
        # print(segmented_point_cloud)
        print(segmented_point_cloud[0].shape)



        x = new_points[:, 0]
        y = new_points[:, 1]
        z = new_points[:, 2]
        fig = plt.figure()
        ax = fig.add_subplot(111, projection='3d')
        ax.scatter(x, y, z, s=0.1)
        ax.scatter(0,0,0,s=5,c="green")
        ax.scatter(0,0,z.mean(),s=5,c="red")
        ax.scatter(segmented_point_cloud[0][:, 0],segmented_point_cloud[0][:, 1],segmented_point_cloud[0][:, 2],s=5,c="red")
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