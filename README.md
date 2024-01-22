# SERIAL CONTROL
## DESCRIPTION

This project entails of a robotic vehicle that navigates on its own avoiding obstacles using ROS2 with its main aim to use LIDAR and CAMERA module for SLAM(Simultaneous Localization and Mapping)
## OBJECTIVES
* Design a good Robot Chasiss
* Convert the chasiss to URDF for simulation on Gazebo,RVIZ ,Ignition
* Achive Serial control Node for  main_controller(Raspberry Pi) to Arduino
* Allow for LIDAR mapping of a room while manually controlling the robot using teleop_Twist keyboard
* SLAM using LIDAR
* Adding a camera Node
* Fully unsupervised SLAM
## HOW TO INSTALL THE PROJECT
* Have ROS2 Humble preinstalled [Link](https://docs.ros.org/en/humble/Installation.html)
* Configure your environment [Link](https://docs.ros.org/en/humble/Tutorials/Beginner-CLI-Tools/Configuring-ROS2-Environment.html)
* ```sudo apt update```
* ```sudo apt install ros-humble-turtlesim```
* Install pyserial ```pip install pyserial```
* On your ROS2 Workspace navigate to src directory > cd /path/to/your/ROS2workspace/src
* In the src directory ```git clone```
* remove the readme ```rm README.txt``` or use **rosignone** ```touch .rosignore``` then ```nano .rosignore ``` # Use your preferred text editor ```README*``` then save and exit
* Get to your workspace then ```colcon build```
* IF BUILD WAS SUCCESSFUL NEXT IS TO RUN THE PROJECT
## HOW TO USE THE PROJECT
## TESTS
