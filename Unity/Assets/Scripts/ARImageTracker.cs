using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using TMPro;
using System;

public class ARImageTracker : MonoBehaviour
{
    public ARTrackedImageManager trackedImageManager;
    public GameObject prefab1; 
    public string Image1;
    public GameObject prefab2; 
    public string Image2;
    public GameObject prefab3; 
    public string Image3;
    public GameObject prefab4; 
    public string Image4;
    public int maxPrefabCount = 1; // Maximum prefabs in one time 
    private int currentPrefabCount = 0; // current prefabs
    private GameObject[] spawnedPrefabs; // spawned prefabs
    public TextMeshProUGUI UItext;
    public ExternalDataHolder externalData;
    public GameObject background;

    void Start()
    {
        spawnedPrefabs = new GameObject[maxPrefabCount];
    }
    void Update(){

    }
    void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
    }

    void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (var trackedImage in eventArgs.added)
        {
            HandleImageTracking(trackedImage);
        }

        foreach (var trackedImage in eventArgs.updated)
        {
            HandleImageTracking(trackedImage);
        }

        foreach (var trackedImage in eventArgs.removed)
        {
            RemovePrefab();
        }
    }

    void HandleImageTracking(ARTrackedImage trackedImage)
    {
        if (trackedImage.trackingState == UnityEngine.XR.ARSubsystems.TrackingState.Tracking)
        {
            GameObject prefab = null;

            if (trackedImage.referenceImage.name == Image1)
            {
                UItext.text = "Ground Floor"; 
                prefab = prefab1;
            }
            else if (trackedImage.referenceImage.name == Image2)
            {
                UItext.text = "First Floor"; 
                prefab = prefab2;
            }
            else if (trackedImage.referenceImage.name == Image3)
            {
                UItext.text = "Second Floor"; 
                prefab = prefab3;
            }
            else if (trackedImage.referenceImage.name == Image4)
            {
                UItext.text = "Third Floor"; 
                prefab = prefab4;
            }

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
        }
    }

    void RemovePrefab()
    {
        for (int i = 0; i < spawnedPrefabs.Length; i++)
        {
            if (spawnedPrefabs[i] != null)
            {
                Destroy(spawnedPrefabs[i]);
                spawnedPrefabs[i] = null;
                currentPrefabCount--;
            }
        }
    }
}
