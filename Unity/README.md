# Unity Development
Depending on the requirements, the unity twins mainly need to perform the following functions: 

1. Read the temperature data of each room via MQTT and the occupation of each seat in the room via UCLAPI, calculate the seat information of all rooms, and send them to MQTT for the physical device to use. 
2. Scan the QR code of the corresponding floor on the physical device to display the corresponding floor model, and the room inside will show different colours according to the seat occupancy rate. Besides, a chart will be displayed to visualize the seat number and occupancy rate of each room. 
3. Allow the user to select the room on the floor model and display the corresponding detailed data, including the room number, temperature and seating situation of the selected room.  

To achieve the above functions, the following measures were undertaken:

1. Make the UI in the main scene to remind users how to use the app.
2. Modify the parameter of the function MqttManager to connect to MQTT for subsequent operations.  
3. Create the function GetDataFromSensors to obtain and process data from sensors in each room. 

![image](https://github.com/ChenRuan/Group2_SDV/assets/145383140/42a95334-e95b-4158-a902-e72c87690f99)

4. Create the function RoomController which is used to receive data from MQTT and transmit the processed data to MQTT.

![image](https://github.com/ChenRuan/Group2_SDV/assets/145383140/33f9873f-8faa-4870-8c49-78f793edd504)

![image](https://github.com/ChenRuan/Group2_SDV/assets/145383140/1f2035e1-cf37-408a-815b-ebad18a12d21)

5. Make and configure four prefabs of floor models. 
6. Create the function ARImageTracker (Based on ARTrackedImageManager), which is used to track multiple QR codes and match the prefab of the corresponding floor to import floor data. The prompt displayed on the UI will be changed after scanning the identifiable QR code. 

![image](https://github.com/ChenRuan/Group2_SDV/assets/145383140/a3355869-667f-43a8-9634-e942c73dd9f9)

7. Create the function PrefabController to store data imported from the main scene to Prefab.

8. Create the function PrefabDisplay, which can initialize all the data of the floor, change the room’s colour according to the seat occupancy rate, and draw XCharts to show the room seating situation of the floor. In addition, it will create a button to switch the display of the seating situation and temperature of each room and highlight the selected room in the model.

![image](https://github.com/ChenRuan/Group2_SDV/assets/145383140/4ec95fa3-7603-4052-a4c0-890dd5a5dd8f)

![image](https://github.com/ChenRuan/Group2_SDV/assets/145383140/eff69857-d2ef-43c2-bba4-1e13957a515d)

 
