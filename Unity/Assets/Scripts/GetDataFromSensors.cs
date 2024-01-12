using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class GetDataFromSensors : MonoBehaviour
{
    // Start is called before the first frame update
    private string apiUrl = "https://uclapi.com/workspaces/sensors?survey_id=111&token=uclapi-e08b5d89bb2d2b8-7e04e7801bbdf58-ecbe66ac2436573-c9fbfd26d3ddd2c";
    private SensorsRoot data;
    public float timeInterval= 60f;


    void Start()
    {
        InvokeRepeating("GetData", 0f, timeInterval);
    }
    void Update()
    {

    }

    void GetData()
    {
        StartCoroutine(FetchData());
    }

    IEnumerator FetchData()
    {
        yield return new WaitForSeconds(1f);
        using (UnityWebRequest request = UnityWebRequest.Get(apiUrl))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string jsonResponse = request.downloadHandler.text;

                // deserialize JSON data
                this.data = JsonConvert.DeserializeObject<SensorsRoot>(jsonResponse);

                // QuerySensorData(this.data, "820001");
            }
            else
            {
                Debug.LogError($"Error: {request.error}");
            }
        }
    }

    static void QuerySensorData(SensorsRoot data, string sensorId)
    {
        if (data != null && data.maps != null)
        {
            foreach (var map in data.maps)
            {
                if (map.sensors != null && map.sensors.TryGetValue(sensorId, out SensorData sensorData))
                {
                    //Debug.Log(sensorData);
                    return;
                }
            }
        }
        Debug.Log($"Sensor {sensorId} not found.");
    }

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
}

public class SensorData
{
    public string hardware_id ;
    public string x_pos ;
    public string y_pos ;
    public string survey_id ;
    public string survey_device_id ;
    public string host_address ;
    public string pir_address ;
    public string device_type ;
    public string location ;
    public string description_1 ;
    public string description_2 ;
    public string description_3 ;
    public string room_id ;
    public string room_name ;
    public string share_id ;
    public string floor ;
    public string room_type ;
    public string building_name ;
    public string room_description ;
    public string last_trigger_timestamp ;
    public string last_trigger_type ;
    public bool occupied ;
    public override string ToString()
    {
        return $"Sensor {hardware_id}: X={x_pos}, Y={y_pos}, Occupied={occupied}";
    }
}

public class SensorsMap
{
    public string id ;
    public string name ;
    public string image_id ;
    public Dictionary<string, SensorData> sensors ;
}

public struct OccupiedStatusCount
{
    public int total;
    public int occupiedFalse;
}

public class SensorsRoot
{
    public bool ok ;
    public List<SensorsMap> maps ;
    public string survey_id ;
    public string survey_name ;
    public string most_recent_timestamp ;
}