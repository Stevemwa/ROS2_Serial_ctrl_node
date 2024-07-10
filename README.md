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
* Have ROS2 Humble preinstalled [ROS2 HUMBLE INSTALLATION](https://docs.ros.org/en/humble/Installation.html)
* Configure your environment [ROS2 ENVIRONMENT SETUP](https://docs.ros.org/en/humble/Tutorials/Beginner-CLI-Tools/Configuring-ROS2-Environment.html)
* ```
   sudo apt update
  ```

* ```
  sudo apt install ros-humble-turtlesim
  ```
* Install pyserial
  ```
   pip install pyserial
  ```
## IF YOU ARE USING WSL YOU WILL NEED TO HAVE DONE:
* Follow the tutorial: https://learn.microsoft.com/en-us/windows/wsl/connect-usb
* Downloaded USBIPD-WIN project 
* Ensure WSL Command line is running
* List all of the USB devices connected to Windows by opening PowerShell in administrator mode and entering the following command. 
```
usbipd list
```
* Before attaching the USB device, the command usbipd bind must be used to share the device, allowing it to be attached to WSL. This requires administrator privileges. Select the bus ID of the device you would like to use in WSL and run the following command. After running the command, verify that the device is shared using the command usbipd list again.
  ```
  usbipd bind --busid 4-4
  ```
* To attach the USB device, run the following command.
  ```
  usbipd attach --wsl --busid <busid>
  ```
* Open Ubuntu (or your preferred WSL command line) and list the attached USB devices using the command:
  ```
  lsusb
  ```
* Once you are done using the device in WSL, you can either physically disconnect the USB device or run this command from PowerShell:
    ```
    usbipd detach --busid <busid>
    ```

  
## Continuing if you dont use WSL

* On your ROS2 Workspace navigate to src directory ``` cd /path/to/your/ROS2workspace/src```
* In the src directory
   ```
    git clone https://github.com/Stevemwa/Serial_ctrl.git
   ```
* remove the readme
  ```
   rm README.txt
  ```
  or use **rosignone**
  ```
   touch .rosignore
  ```
  then
  ```
   nano .rosignore
  ```
  > Use your preferred text editor
  ```
   README*
  ```
  then save and exit
* Get to your workspace then
   ```
   colcon build
   ```
* IF BUILD WAS SUCCESSFUL NEXT IS TO RUN THE PROJECT
## HOW TO USE THE PROJECT
* Ensure that you have updated the usb device name on your code
* source the 
```
source install/.bashrc
```
## TESTS


https://github.com/Stevemwa/Serial_ctrl/assets/62056954/79978d24-81e5-4146-a293-9c593bd809e3

