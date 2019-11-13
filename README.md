# TataCrucible

This is a smart city IOT project which is used to detect and control Illumination levels,noise levels,potholes and show the real time data in the app.It uses various sensors including BH170 for lux levels,gps module for geolocation,raspberry pi for data gathering and procesing. Data is received and stored in Firebase cloud. Web app will show each area with its current levels of the sensors in real time.Pothole detection is done using Ultrasonic sensor placed in the bottom of the cars of the city and also using Lidar sensors and image procesing using cameras installed at various locations.Also,the illumination levels in the street lights will be smartly controlled using IR and ultrasonic or pressure sensors by analysing the traffic flow and density.

IDEA:-
The main idea behind the solution is to gather the information or data regarding the noise level, 
lux level or illumination level, potholes detection, analyse the data collected and
hence map the data in the google maps. The mapping will not only help public to be aware 
of his environment and thus take precautionary measures to evade accident but also alert 
the respective authorities to take suitable measures to improve the road condition, reduce 
noise level of a particular area or make the brightness level of a place more or less as required.


-There are various sensors available for the measurement of noise level and illumination level 
like BH170 which will give lux values directly. These sensors along with GPS system can be installed 
in various poles present in streets. The values will be stored in internet and the noise level and 
illumination level will be indicated in different colours in the Google maps in real time.
-In addition to the values from the poles data will also be collected and analysed by different vehicles. 
The data collected by it would be consisting of illumination level and information regarding potholes. 
An android app will be used for analysis of these real time data collected . 
NodeMCU esp8266 Wi-Fi module connected to various sensors will be used to send and receive data with the android app. 
-We will use raspberry pi for all the processing of information from different sensors.
-The app will have basic user registration and login feature. 
The user have to login first, then the app will be integrated with the various sensors fitted in the vehicle 
and the database of the sensor values will be stored from various users whose average will be calculated. 
The app will have predefined limits of values of dB and lux such that if any anomaly is found in any place 
will be alerted to the user via push notifications.


- The data after analysis will be geotagged in Google maps using Google maps API which is 
the best way to make the public to access the information regarding the road
-The app will also calculate the severity of pothole and estimate the cost required for fixing it.

As the information also consists of location thus, this app will provide useful for the concerned 
authorities and help them to make policies.



Mechanism-
FOR POTHOLE DETECTION;-
We will be using 3 mechanism for pothole detection which will make the detection more efficient. 
Analysis by vibration- We will use accelerometer which calculates the acceleration of the vehicle 
and thus help us to study vibration. The moving of the vehicle on potholes changes the magnitude or 
frequency of vibration. 
This anomaly will be useful for determining the pothole.
Using LiDar sensor-Laser scanning is able to collect information using a technique 
that employs reflected laser pulses to create precise digital models. 
LiDAR is a land surveying method that measures the distance to a target by illuminating that 
target with a pulsed laser light, and measuring the reflected pulses with a sensor. 
The differences in the amount of time it takes for the laser to return, and also in the wavelengths, 
are then used to make digital 3D-representations of the target
The above two methods are accurate but potholes are detected only when vehicle’s wheel transverse the potholes.
 Using image processing-Next method is using image processing and thus detecting 
 the potholes by use of camera in the front side of the car. 
 By using methods like Image cropping, grayscale conversion and thresholding to extract dark regions from background.

FOR ILLUMINATION LEVEL:-
Light intensity sensor can be used for measuring illumination level. 
Otherwise digital camera which we will be using for detection of potholes can be used.
As each pixel value is directly proportional to the luminance in the image. 
Thus we can calculate the value from the video
For pothole detection people use black box camera. These are equipped to the front 
and sometimes rear of the vehicle , with the ability to record video continuously. 
All footage is stored via on –board SD memory cards. 
The resolution of black box camera 1920X1080pixels and 27 f/s, respectively. 
The recorded video was saved in H.264 format with 32gB memory. 
A cortex-a8 application microprocessor was used for processing video data.
Before implementing the proposed pothole detection algorithm in black box we developed simulation software 
using C++, which shows width height and variance.But this is very costly and not everyone can afford it.
And moreover illumination level cannot be measured from this technique.
