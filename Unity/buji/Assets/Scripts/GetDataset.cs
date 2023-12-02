using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine.Networking;
using System;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class GetDataset : MonoBehaviour
{
    private string apiUrl = "https://uclapi.com/workspaces/sensors/summary?token=uclapi-e08b5d89bb2d2b8-7e04e7801bbdf58-ecbe66ac2436573-c9fbfd26d3ddd2c";
    public int specificSurveyId = 111;
    public int specificMapId = 272;
    public gameObject DataOutput;

    void Start()
    {
        // get data every 5 minutes
        InvokeRepeating("GetData", 0f, 300f);
    }

    void GetData()
    {
        StartCoroutine(FetchData());
    }

    IEnumerator FetchData()
    {
        yield return new WaitForSeconds(5f);
        using (UnityWebRequest request = UnityWebRequest.Get(apiUrl))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string jsonResponse = request.downloadHandler.text;
                // Debug.Log($"Data: {jsonResponse}");

                // 反序列化 JSON 数据
                Root data = JsonConvert.DeserializeObject<Root>(jsonResponse);

                // 处理获取到的数据
                Map specificMap = FindMapById(specificSurveyId, specificMapId, data);

                if (specificMap != null)
                {
                    Debug.Log($"Received data for Survey ID {specificSurveyId}, Map ID {specificMapId}: {specificMap.name}");
                }
                else
                {
                    Debug.Log($"Data for Survey ID {specificSurveyId}, Map ID {specificMapId} not found.");
                }
                int sensors_total = specificMap.sensors_occupied + specificMap.sensors_absent + specificMap.sensors_other;
                Debug.Log($"{specificMap.name}:seat={specificMap.sensors_absent}/{sensors_total}");
            }
            else
            {
                Debug.LogError($"Error: {request.error}");
            }
        }

    }

    Map FindMapById(int surveyId, int mapId, Root data)
    {
        if (data != null && data.surveys != null)
        {
            Survey specificSurvey = data.surveys.Find(survey => survey.id == surveyId);

            if (specificSurvey != null)
            {
                return specificSurvey.maps.Find(maps => maps.id == mapId);
            }
        }

        return null;
    }
}


    // Root myDeserializedClass = JsonConvert.DeserializeObject<Root>(myJsonResponse);
    public class Root
    {
        public bool ok ;
        public List<Survey> surveys ;
    }
    
    public class Map
    {
        public int id ;
        public string name ;
        public int sensors_absent ;
        public int sensors_occupied ;
        public int sensors_other ;
    }

    public class Survey
    {
        public int id ;
        public string name ;
        public List<Map> maps ;
        public int staff_survey ;
        public int sensors_absent ;
        public int sensors_occupied ;
        public int sensors_other ;
    }



