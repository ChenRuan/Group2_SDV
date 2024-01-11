using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using XCharts.Runtime;
using XCharts;
using TMPro;
using JetBrains.Annotations;
using Unity.VisualScripting;
using System;

public class PrefabDisplay : MonoBehaviour
{
    public GameObject barChart;
    public List<GameObject> gameObjects = new List<GameObject>();
    public List<GameObject> meshes = new List<GameObject>();
    private BarChart chart;
    private List<float> Occupation;
    private int listLength;
    public TextMeshProUGUI tempText;
    public TextMeshProUGUI freeSeatText;
    public TextMeshProUGUI totalSeatText;
    public TextMeshProUGUI roomText;
    public GameObject UITips;
    private MeshRenderer meshRenderer;
    private Material material;
    private int currentNumber = -1;
    private Color colorBlue = new Color(0.1092559f,0.5849056f,0.1160705f);
    private Color colorOrange = new Color(0.7283019f,0.6052039f,0.03160547f);
    private Color colorRed = new Color(1.0f,0,0);
    private Color colorBlue1 = new Color(0.2185118f,1.169811f,0.232141f);
    private Color colorOrange1 = new Color(1.456604f,1.210408f,0.06321092f);
    private Color colorRed1 = new Color(2.0f,0,0);
    private Color customEmissionColor = new Color(1.0f,0,0);
    public TextMeshProUGUI buttonText;
    // Start is called before the first frame update
    void Start()
    {
        chart = barChart.GetComponent<BarChart>();
        listLength = gameObjects.Count;
        chart.AddSerie<Bar>("Bar");

        Occupation = new List<float>(listLength);
        for (int i = 0; i < listLength; i++)
        {
            Occupation.Add(0f);
        }

        InvokeRepeating("GetData", 0f, 2f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void GetData()
    {
        var xAxis = chart.EnsureChartComponent<XAxis>();
        xAxis.splitNumber = 10;
        xAxis.boundaryGap = true;
        xAxis.type =  Axis.AxisType.Category;    

        var yAxis = chart.EnsureChartComponent<YAxis>();
        yAxis.type =  Axis.AxisType.Value;
        chart.ClearData();

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
    }

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

    // Color ChangeColor(float occupation, int transparentNum){
    //     if (occupation >= 0.7){
    //         return new Color(112/255.0f, 127/255.0f, 127/255.0f, 0.4f*transparentNum);
    //     }else if (occupation >= 0.3 && occupation <= 0.7){
    //         return new Color(127/255.0f, 83/255.0f, 0/255.0f, 0.4f*transparentNum);
    //     }else{
    //         return new Color(123/255.0f, 0/255.0f, 0/255.0f, 0.4f*transparentNum);
    //     }
    // }

    public void ImportData(string[] data1, float[] data2){
        for(int i=0; i<14;i++){
            PrefabController roomController = gameObjects[i].GetComponent<PrefabController>();
            for(int j=0;j<14;j++){
                if (roomController.RoomName == data1[j]){
                    roomController.Temperature = data2[j];
                    break;
                }
            }
        }
    }
}


