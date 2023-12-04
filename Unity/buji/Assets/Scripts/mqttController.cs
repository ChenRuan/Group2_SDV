using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Newtonsoft.Json;

public class mqttController : MonoBehaviour
{
    public string RoomName = "Controller 1";
    public string tag_mqttManager = "Script";
    public mqttManager _eventSender;
    public string KnownKey1 = "knownKey1";
    public string KnownKey2 = "knownKey2";
    public string KnownKey3 = "knownKey2";
    public string KnownKey4 = "Value";

    void Start()
    {
        if (GameObject.FindGameObjectsWithTag(tag_mqttManager).Length > 0)
        {
            _eventSender = GameObject.FindGameObjectsWithTag(tag_mqttManager)[0].gameObject.GetComponent<mqttManager>();
            
        }
        else
        {
            Debug.LogError("At least one GameObject with mqttManager component and Tag == tag_mqttManager needs to be provided");
        }
        _eventSender.OnMessageArrived += OnMessageArrivedHandler;
    }

    private void OnMessageArrivedHandler(mqttObj mqttObject) //the mqttObj is defined in the mqttManager.cs
    {
        string json = mqttObject.msg;

        Debug.Log($"Received data: {json}");

        // 解析 JSON 数据为 Dictionary<string, object>
        var data = JsonConvert.DeserializeObject<Dictionary<string, object>>(json);

        //Debug.Log($"Received data: {data}");

        // 提取对应路径的值
        string value = GetValueFromPath(data, $"{KnownKey1}/{KnownKey2}/{KnownKey3}/{KnownKey4}");

        //Debug.Log($"Received value: {value}");
    }

    private string GetValueFromPath(Dictionary<string, object> data, string path)
    {
        string[] pathParts = path.Split('/');

        // 按路径访问字典中的值
        foreach (var part in pathParts)
        {
            if (data.ContainsKey(part) && data[part] is Dictionary<string, object>)
            {
                data = (Dictionary<string, object>)data[part];
            }
            else
            {
                // 如果路径无效或者值不存在，返回空
                return null;
            }
        }

        // 最终路径中的值
        if (data.ContainsKey("value"))
        {
            return data["value"].ToString();
        }

        // 如果路径中没有值，返回空
        return null;
    }
}