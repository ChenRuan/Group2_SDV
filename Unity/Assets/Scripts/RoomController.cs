using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Newtonsoft.Json;

public class RoomController : MonoBehaviour
{
    public string RoomName = "ROOM NAME HERE!";
    public string RoomDescription = "ROOM DESCRIPTION HERE";
    public int FreeSeats = 0;
    public int TotalSeats;
    public float Temperature = 1.0f;
    public string tag_mqttManager = "Script";
    public mqttManager _eventSender;
    public GetDataFromSensors _getSensors;
    public string KnownKey1 = "knownKey1";
    public string KnownKey2 = "knownKey2";
    public string KnownKey3 = "knownKey2";
    public string KnownKey4 = "Value";
    private string conditionToMatch;
    public string PublishTopic = "student/CASA0019/G2/DATA";
    public ExternalDataHolder[] externalDataHolder;


    void Start()
    {   
        _eventSender = GameObject.FindGameObjectsWithTag(tag_mqttManager)[0].gameObject.GetComponent<mqttManager>();
        _getSensors = GameObject.FindGameObjectsWithTag(tag_mqttManager)[0].gameObject.GetComponent<GetDataFromSensors>();

        _eventSender.OnMessageArrived += OnMessageArrivedHandler;
        InvokeRepeating("PlanWork" ,5f, 20f);
    }

    private void OnMessageArrivedHandler(mqttObj mqttObject) //the mqttObj is defined in the mqttManager.cs
    {
        string json = mqttObject.msg;

        //Debug.Log($"Received data: {json}");

        conditionToMatch = KnownKey1 + "/" + KnownKey2 + "/" + KnownKey3 + "/" + KnownKey4 ;

        if (json.Contains(conditionToMatch))
        {
            float value = ExtractValue(json);
            this.Temperature = value;
        }
    }

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
}