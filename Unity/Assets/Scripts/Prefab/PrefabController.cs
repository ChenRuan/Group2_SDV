using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabController : MonoBehaviour
{
    public string RoomName = "ROOM NAME HERE!";
    public string RoomDescription = "ROOM DESCRIPTION HERE";
    public int FreeSeats = 0;
    public int TotalSeats;
    public float Temperature = 20.0f;
    public string tag_mqttManager = "Script";
    public GetDataFromSensors _getSensors;
    void Start()
    {
        _getSensors = GameObject.FindGameObjectsWithTag(tag_mqttManager)[0].gameObject.GetComponent<GetDataFromSensors>();
        InvokeRepeating("PlanWork" ,2f, 2f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void PlanWork(){
        OccupiedStatusCount counts = _getSensors.CountOccupiedStatus(RoomDescription);
        FreeSeats = counts.occupiedFalse;
        TotalSeats = counts.total;
    }
    
}
