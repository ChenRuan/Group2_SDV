# SmartSeat Tracker
BIM OPS: Operational Building Data Research at UCL
By group002, Msc Connected Environments

## 1. Introduction

The BIM OPS project is dedicated to researching Operational Building Data at UCL, aiming to inform stakeholders about UCL building issues, performances, events, and sustainability initiatives. The central focus is on enhancing the efficiency of table usage within the UCL OPS building through the analysis of real-time data, optimization of space utilization, and improvement of user experience.

The theme of BIM OPS has been chosen to address the challenges faced by UCL buildings, improve their overall performance, and contribute to sustainability initiatives.

1.2 Project Objective
After preliminary research and discussions, a clear direction has been established for the project. The primary objective is to boost the efficiency of workstation usage and enhance the overall utilization of learning and working spaces within the OPS building.

The project aims to achieve this by analyzing peak usage periods, identifying popular seating areas, and utilizing real-time data from sensor-connected workstations. This data will be instrumental in improving seating layouts and providing accurate environmental information for user comfort.

**Target Users:
The system is designed to serve both students and faculty members. Students can easily locate and access available study spaces, enhancing their learning experience. Faculty members, in turn, benefit from streamlined discovery and reservation of spaces for meetings or teaching activities, optimizing workflow and resource utilization.

**Placement:
The prototype will be deployed in the One Pool Street Building, strategically positioned in central or high-traffic areas within the UCL OPS campus. This placement ensures maximum accessibility for both students and faculty members

### 2. Data Source

## 2.1 UCLAPI Seat Data

The first dataset is derived from the detailed seat data obtained through. The API provides comprehensive information, as illustrated in the figure below. This data includes the sensor’s ID, position, room identification, the floor it belongs to, and the occupancy status of the seat.

**UCL API (n.d.) Documentation – UCL API, Available at: https://uclapi.com/docs#?route=get-/workspaces/sensors **

Through onsite research, we verified the number, location, and practicality of the majority of sensors. Additionally, we acquired the corresponding room number for each room identification, ensuring the accuracy and completeness of our dataset.

## 2.2 CE Lab's MQTT Temperature Data

The second dataset is sourced from the temperature data obtained through CE Lab's MQTT. The figure below illustrates the temperature data structure. Moreover, one of the datasets utilized by the physical device is derived from MQTT, specifically uploaded by the digital twin.

These datasets serve as crucial components in our application, providing real-time information necessary for optimizing workspace utilization and ensuring user comfort. The integration of UCLAPI seat data and CE Lab's MQTT temperature data allows for a comprehensive understanding of the OPS building environment.

### 3. Physical-Analogue Device

#### 3.1 Aim and Functions

Hardware side processes real-time API data, displays room information, and enhances user interaction.

#### 3.2 Components & Wire Connections

Utilized Arduino Uno Wi-Fi Rev2, buttons, motor, LCD screen, and LEDs for room location.

![Wire Connection](images/wire_connection.png)

#### 3.3 Physical Device Programming

Program flowchart includes user input, linking to the digital twin, and displaying room information.

![Program Flowchart](images/physical_device_flowchart.png)

#### 3.4 Enclosure Development and Hardware Assembly Process

Designed enclosure layout, laser-cut and 3D printed components, and assembled the device.

![Enclosure Sketch](images/enclosure_sketch.png) ![Wire Storage Box](images/wire_storage_box.png)

#### 3.5 Finished Physical Device

![Finished Physical Device](images/finished_physical_device.png)

### 4. Augmented Digital Twin

#### 4.1 Program Overview

Designed to provide detailed information on each floor through augmented reality.

#### 4.2 Digital Assets

Created 3D models using floor plans, Photoshop, AutoCAD, SketchUp, Unity, and Fusion360.

#### 4.3 Unity Development

Developed Unity twins for temperature data, seat occupancy, and user interaction with the app.

![Digital Twin Demonstration](images/digital_twin_demo.png)

### 5. Conclusion

The project successfully achieved data visualization for building environments. Future improvements include server-based data processing, enhanced room selection in the digital device, showcasing available lighting, and configuring mobile apps for multiple platforms.

Feel free to reach out for any questions or collaborations!


The project successfully achieved data visualization for building environments. Future improvements include server-based data processing, enhanced room selection in the digital device, showcasing available lighting, and configuring mobile apps for multiple platforms.

Feel free to reach out for any questions or collaborations!

