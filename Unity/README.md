# Unity Development
Depending on the requirements, the unity twins mainly need to perform the following functions: 

1. Read the temperature data of each room via MQTT and the occupation of each seat in the room via UCLAPI, calculate the seat information of all rooms, and send them to MQTT for the physical device to use. 
2. Scan the QR code of the corresponding floor on the physical device to display the corresponding floor model, and the room inside will show different colours according to the seat occupancy rate. Besides, a chart will be displayed to visualize the seat number and occupancy rate of each room. 
3. Allow the user to select the room on the floor model and display the corresponding detailed data, including the room number, temperature and seating situation of the selected room.  

To achieve the above functions, the following measures were undertaken:

1. Make the UI in the main scene to remind users how to use the app.
2. Modify the parameter of the function MqttManager to connect to MQTT for subsequent operations.  
3. Create the function GetDataFromSensors to obtain and process data from sensors in each room. 
```
    public OccupiedStatusCount CountOccupiedStatus(string description1Condition)
    {
        int total = 0;
        int occupiedFalse = 0;
        if (data != null)
        {
            foreach (var map in data.maps)
            {
                if (map.sensors != null)
                {
                    foreach (var sensor in map.sensors.Values)
                    {
                        if (!sensor.occupied && sensor.description_1 == description1Condition)
                        {
                            occupiedFalse++;
                            total++;
                        }
                        else if (sensor.description_1 == description1Condition)
                        {
                            total++;
                        }
                    }
                }
            }
        }
        OccupiedStatusCount result;
        result.total = total;
        result.occupiedFalse = occupiedFalse;
        return result;
    }
```

4. Create the function RoomController which is used to receive data from MQTT and transmit the processed data to MQTT.

```
    private float ExtractValue(string input)
    {
        int startIndex = input.IndexOf(":") + 1;
        int endIndex = input.IndexOf("}");
        string valueString = input.Substring(startIndex, endIndex - startIndex).Trim();
        
        float value;
        if (float.TryParse(valueString, out value))
        {
            return value;
        }
        else
        {
            Debug.LogError("Cannot transit to float" + valueString);
        }
    }
```

```
    private void PlanWork(){
        OccupiedStatusCount counts = _getSensors.CountOccupiedStatus(RoomDescription);
        this.FreeSeats = counts.occupiedFalse;
        this.TotalSeats = counts.total;
        string finalPublishTopic = PublishTopic + RoomName;
        string testMessage = $"{RoomName},{FreeSeats},{Temperature}";
        _eventSender.Publish(finalPublishTopic,testMessage);
        Debug.Log("Plan works");
        for(int i=0; i<14; i++){
            if (externalDataHolder[0].RoomNameArray[i] == RoomName){
                Debug.Log($"Match found for RoomName: {RoomName}");
                externalDataHolder[0].TemperatureArray[i] = Temperature;
                break;
            }
        }
    }
```

5. Make and configure four prefabs of floor models. 
6. Create the function ARImageTracker (Based on ARTrackedImageManager), which is used to track multiple QR codes and match the prefab of the corresponding floor to import floor data. The prompt displayed on the UI will be changed after scanning the identifiable QR code. 

```
            if (prefab != null)
            {
                RemovePrefab();
                background.SetActive(false);
                if (currentPrefabCount < maxPrefabCount)
                {
                    int index = System.Array.IndexOf(spawnedPrefabs, null);
                    if (index != -1)
                    {
                        spawnedPrefabs[index] = Instantiate(prefab, trackedImage.transform.position, trackedImage.transform.rotation);
                        currentPrefabCount++;
                    }
                }
                string[] data1 = externalData.RoomNameArray;
                float[] data2 = externalData.TemperatureArray;
                PrefabDisplay prefabDisplay = spawnedPrefabs[0].GetComponent<PrefabDisplay>();
                prefabDisplay.ImportData(data1,data2);
            }
```

7. Create the function PrefabController to store data imported from the main scene to Prefab.

8. Create the function PrefabDisplay, which can initialize all the data of the floor, change the room’s colour according to the seat occupancy rate, and draw XCharts to show the room seating situation of the floor. In addition, it will create a button to switch the display of the seating situation and temperature of each room and highlight the selected room in the model.

```
         for(int i=0; i< listLength;i++){
            PrefabController roomController = gameObjects[i].GetComponent<PrefabController>();

            chart.AddXAxisData(roomController.RoomName);
            chart.AddData(0,roomController.TotalSeats);
            chart.AddData(1,roomController.FreeSeats);
            Occupation[i]=1.0f*roomController.FreeSeats/roomController.TotalSeats;
            meshRenderer= meshes[i].GetComponent<MeshRenderer>();
            material = meshRenderer.material;

            if(i!=currentNumber){
                if(Occupation[i] >= 0.7){
                    customEmissionColor = colorBlue;
                }else if(Occupation[i] >= 0.3){
                    customEmissionColor = colorOrange;
                }else{
                    customEmissionColor = colorRed;
                }
            }else{
                if(Occupation[i] >= 0.7){
                    customEmissionColor = colorBlue1;
                }else if(Occupation[i] >= 0.3){
                    customEmissionColor = colorOrange1;
                }else{
                    customEmissionColor = colorRed1;
                }
            }

            material.SetColor("_EmissionColor", customEmissionColor);
        }
```

```
    public void buttonClick(){
        buttonText.text="Change Room";
        bool UITipsActive = UITips.activeSelf;
        if(!UITipsActive){
            UITips.SetActive(true);
        }
        currentNumber++;
        if(currentNumber>=listLength){
            currentNumber-=listLength;
        }
        PrefabController roomController = gameObjects[currentNumber].GetComponent<PrefabController>();

        roomText.text = roomController.RoomName;
        freeSeatText.text = roomController.FreeSeats.ToString();
        totalSeatText.text = roomController.TotalSeats.ToString();

        if(roomController.Temperature == -1.0f){
            tempText.text = "No\nData";
        }else{
            tempText.text = roomController.Temperature.ToString() + "°C";
        }
        GetData();
    }
```
