using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class GetDataFromSummary : MonoBehaviour
{
    private string apiUrl = "https://uclapi.com/workspaces/sensors/summary?token=uclapi-e08b5d89bb2d2b8-7e04e7801bbdf58-ecbe66ac2436573-c9fbfd26d3ddd2c";
    public int specificSurveyId = 111;
    public int specificMapId = 272;
    public GameObject DataOutput;

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
        yield return new WaitForSeconds(1f);
        using (UnityWebRequest request = UnityWebRequest.Get(apiUrl))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string jsonResponse = request.downloadHandler.text;
                // Debug.Log($"Data: {jsonResponse}");

                // 反序列化 JSON 数据
                SummaryRoot data = JsonConvert.DeserializeObject<SummaryRoot>(jsonResponse);

                // 处理获取到的数据
                SummaryMap specificMap = FindMapById(specificSurveyId, specificMapId, data);

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

    SummaryMap FindMapById(int surveyId, int mapId, SummaryRoot data)
    {
        if (data != null && data.surveys != null)
        {
            SummarySurvey specificSurvey = data.surveys.Find(survey => survey.id == surveyId);

            if (specificSurvey != null)
            {
                return specificSurvey.maps.Find(maps => maps.id == mapId);
            }
        }

        return null;
    }
}


    // Root myDeserializedClass = JsonConvert.DeserializeObject<Root>(myJsonResponse);
    public class SummaryRoot
    {
        public bool ok ;
        public List<SummarySurvey> surveys ;
    }
    
    public class SummaryMap
    {
        public int id ;
        public string name ;
        public int sensors_absent ;
        public int sensors_occupied ;
        public int sensors_other ;
    }

    public class SummarySurvey
    {
        public int id ;
        public string name ;
        public List<SummaryMap> maps ;
        public int staff_survey ;
        public int sensors_absent ;
        public int sensors_occupied ;
        public int sensors_other ;
    }



