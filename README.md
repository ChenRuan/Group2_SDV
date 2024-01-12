# SmartSeat Tracker
BIM OPS: Operational Building Data Research at UCL
By group002, Msc Connected Environments

## 1. Introduction

The BIM OPS project is dedicated to researching Operational Building Data at UCL, aiming to inform stakeholders about UCL building issues, performances, events, and sustainability initiatives. The central focus is on enhancing the efficiency of table usage within the UCL OPS building through the analysis of real-time data, optimization of space utilization, and improvement of user experience.

![022-one-pool-street-lifschutz-davidson-sandilands-960x640](https://github.com/ChenRuan/Group2_SDV/assets/146268411/2db63ae2-bdd1-4c09-bfb4-0ddbca810246)

1.2 Project Objective
After preliminary research and discussions, a clear direction has been established for the project. The primary objective is to boost the efficiency of workstation usage and enhance the overall utilization of learning and working spaces within the OPS building.

The project aims to achieve this by analyzing peak usage periods, identifying popular seating areas, and utilizing real-time data from sensor-connected workstations. This data will be instrumental in improving seating layouts and providing accurate environmental information for user comfort.

**Target Users:
The system is designed to serve both students and faculty members. Students can easily locate and access available study spaces, enhancing their learning experience. Faculty members, in turn, benefit from streamlined discovery and reservation of spaces for meetings or teaching activities, optimizing workflow and resource utilization.

**Placement:
The prototype will be deployed in the One Pool Street Building, strategically positioned in central or high-traffic areas within the UCL OPS campus. This placement ensures maximum accessibility for both students and faculty members

## 2. Data Source

### 2.1 UCLAPI Seat Data

The first dataset is derived from the detailed seat data obtained through. The API provides comprehensive information, as illustrated in the figure below. This data includes the sensor’s ID, position, room identification, the floor it belongs to, and the occupancy status of the seat.

**UCL API (n.d.) Documentation – UCL API, Available at: https://uclapi.com/docs#?route=get-/workspaces/sensors **

Through onsite research, we verified the number, location, and practicality of the majority of sensors. Additionally, we acquired the corresponding room number for each room identification, ensuring the accuracy and completeness of our dataset.

### 2.2 CE Lab's MQTT Temperature Data

The second dataset is sourced from the temperature data obtained through CE Lab's MQTT. The figure below illustrates the temperature data structure. Moreover, one of the datasets utilized by the physical device is derived from MQTT, specifically uploaded by the digital twin.

These datasets serve as crucial components in our application, providing real-time information necessary for optimizing workspace utilization and ensuring user comfort. The integration of UCLAPI seat data and CE Lab's MQTT temperature data allows for a comprehensive understanding of the OPS building environment.

## 3. Physical-Analogue Device

### 3.1 Purpose and Functions

The hardware component aims to realize the functions outlined in the introduction. It downloads real-time data from the API, processes it, and displays room vacancies to users. The device enables users to switch between different floors and rooms, accessing Unity data in a specific way. Functions include:
1. **Input:** Allows users to change the selected floor and room with key input.
2. **Link to Digital Twin:** Enables users to link to Unity by scanning and download data from Unity via MQTT.
3. **Display:** Shows room information and seat occupancy on the screen, lighting corresponding LEDs on the map to indicate positions.

### 3.2 Components & Connections

The hardware uses two buttons for input, a motor-driven rotary table, an LCD screen, and LEDs. The Arduino Uno WiFi Rev2 is chosen for processing. 
![Picture4](https://github.com/ChenRuan/Group2_SDV/assets/146268411/514acc5f-bc9b-4c05-9314-17947b2c3c21)


### 3.3 Programming

The program flowchart involves users selecting floors and rooms, connecting to the MQTT server, and displaying room data. The turntable displays QR codes as the user's floor changes, linked to digital end models.
<img width="420" alt="Picture5" src="https://github.com/ChenRuan/Group2_SDV/assets/146268411/b0d1f87d-f53a-4d36-8fc6-74e3d7c6e955">


### 3.4 Enclosure and Assembly 
（Refer to the attached folder about enclosure on the repository to see the files ready for laser cutting and 3D printing）
![5ed1622e1a3353c891e2bf2160274ee](https://github.com/ChenRuan/Group2_SDV/assets/146268411/de54819f-b765-428b-a276-5775d7ab3498)

The enclosure, designed on paper, includes a Wire Storage and Operation box (Fusion 360). Laser cutting and 3D printing were used for production.
![5ed1622e1a3353c891e2bf2160274ee](https://github.com/ChenRuan/Group2_SDV/assets/146268411/2b1c98af-2527-4286-9f76-10c2cb21b242)

Wires and diodes were managed during the prototype stage (Fig. 3-9 and Fig. 3-10), and components were assembled (Fig. 3-11 and Fig. 3-12).
![cfbea4ac4e3b24c313f2fdbedc4968b](https://github.com/ChenRuan/Group2_SDV/assets/146268411/63dfd71a-a3ca-412b-a7cb-4232b7e141d1)
![b2e8b506b7a706bcfe07f924afde83b](https://github.com/ChenRuan/Group2_SDV/assets/146268411/b30287bb-6cee-4b05-9a48-7050ad79ba2b)

## 3.5 Finished Device

The finished physical device (Fig. 3-13) successfully includes:
1. Turntable with QR codes for Unity link.
2. LCD1602 for floor, room, seat, and temperature information.
3. Buttons for floor/room selection.
4. LEDs indicating room locations.

![Finished Device] ![89cb78fe05494a70b824c7a3fe22cf5](https://github.com/ChenRuan/Group2_SDV/assets/146268411/89a88716-63a3-4d4a-9db3-26550629fe60)


The device serves as an interactive interface, allowing users to engage with real-time data effectively.

## Part 4: Augmented Digital Twin

### 4.1 Overview

The augmented digital twin enhances user access to floor information. Users scan the physical device QR code, opening the twin to view floor models with colored indicators for seat occupancy. A chart provides an overview, and users can access detailed room data through the app.

![image](https://github.com/ChenRuan/Group2_SDV/assets/146268411/72fcad43-f73d-4233-9a91-eddfce1b5bd3)

### 4.2 Digital Assets

The 3D model creation involves Photoshop for alignment, AutoCAD for line drawings, and SketchUp for 3D models. The model is exported to Unity for augmented reality operations.
![image](https://github.com/ChenRuan/Group2_SDV/assets/146268411/98e16545-707d-4941-a095-f392daffd5d6)


### 4.3 Unity Development

Unity twins perform key functions:

1. Read temperature and seat data from MQTT and UCLAPI.
2. Display floor models based on the physical device QR code, showing room colors for seat occupancy.
3. Allow room selection, displaying detailed data.

The Unity development ensures a user-friendly interface, integrating seamlessly with the physical device for an interactive experience.

## 5. Conclusion

The project successfully achieved the visualization of building data on both physical and digital interfaces, presenting room information, vacancies, and temperatures. Users can seamlessly switch between interfaces for room selection. Despite the overall success, there are areas for future improvements:

1. **Optimization of Data Processing:** Consider deploying data processing to a server to enhance collaboration between physical and digital devices.

2. **Streamlined Room Selection:** Transition from button selection to ray collision detection in the digital interface for a more user-friendly interaction.

3. **Unified Lighting Display:** Ensure all available lighting is showcased on the same floor for improved environmental awareness on the physical device.

4. **Cross-Platform Mobile Apps:** Extend compatibility to Apple devices and other platforms to broaden user accessibility.

These proposed enhancements aim to refine the user experience and contribute to the ongoing success of the project.

