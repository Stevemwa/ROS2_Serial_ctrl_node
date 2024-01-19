# ROS2_NAVBOT
#Navigating and control of a robot using ROS2

#WSL TO ARDUINO USB SERIAL CONNECTION
On windows install latest release of usbipd-win https://github.com/dorssel/usbipd-win/releases

'''usbipd list'''
my BUSID IS 1-2 USE your listed BUSID
'''usbipd bind -b 1-2 '''
'''usbipd attach --wsl -b 1-2 '''

ON YOUR UBUNTU TERMINAL
'''lsusb'''

#SENDING CONTROL COMMANDS ON ROS2 TO THE ARDUINO VIA SERIAL

