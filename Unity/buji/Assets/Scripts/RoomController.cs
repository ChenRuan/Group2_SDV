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


    void Start()
    {   
        _eventSender = GameObject.FindGameObjectsWithTag(tag_mqttManager)[0].gameObject.GetComponent<mqttManager>();
        _getSensors = GameObject.FindGameObjectsWithTag(tag_mqttManager)[0].gameObject.GetComponent<GetDataFromSensors>();

        _eventSender.OnMessageArrived += OnMessageArrivedHandler;
        InvokeRepeating("PlanWork" ,10f, 60f);
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
        // 从字符串中提取数值的逻辑，这里是一个简单的示例
        // 实际情况中可能需要根据具体情况使用正则表达式或其他方法来提取数值
        int startIndex = input.IndexOf(":") + 1;
        int endIndex = input.IndexOf("}");
        string valueString = input.Substring(startIndex, endIndex - startIndex).Trim();
        
        // 将提取的字符串转换为浮点数
        float value;
        if (float.TryParse(valueString, out value))
        {
            return value;
        }
        else
        {
            Debug.LogError("无法解析数值：" + valueString);
            return 0.0f; // 或者选择适当的默认值
        }
    }

    private void PlanWork(){
        OccupiedStatusCount counts = _getSensors.CountOccupiedStatus(RoomDescription);
        this.FreeSeats = counts.occupiedFalse;
        this.TotalSeats = counts.total;
        string finalPublishTopic = PublishTopic + RoomName;
        string testMessage = $"{FreeSeats},{Temperature}";
        _eventSender.Publish(finalPublishTopic,testMessage);
        Debug.Log("Plan works");
    }
}