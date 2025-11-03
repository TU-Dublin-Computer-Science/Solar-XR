using System.Collections;
using System.Collections.Generic;
using System.IO;
using Unity.Android.Gradle.Manifest;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Networking;
using static TreeEditor.TextureAtlas;


[System.Serializable]
public class OrbitingBodyData
{
    // Serialized (Come from json)
    public int ID;
    public string name;
    public double radius;
    public double rotationFactor;
    public string modelPath;
    public string centralBody;
    public double semimajorAxis;
    public double eccentricity;
    public double argumentPeriapsis;
    public double meanAnomaly;
    public double inclination;
    public double lonAscendingNode;
    public double orbitalPeriod;
    public List<string> infoPoints;
    public List<string> satellites;

    //Non-serialized (Don't come from json)
    public bool rotationEnabled;
    public bool central;

    public void PostProcess(double modelScalar)
    {
        name = name.ToLower();

        rotationEnabled = rotationFactor != -1;

        if (radius != -1)
        {
            radius *= modelScalar;
        } else
        {
            radius = modelScalar * 10;
        }


        argumentPeriapsis = Mathf.Deg2Rad * argumentPeriapsis;
        meanAnomaly = Mathf.Deg2Rad * meanAnomaly;
        inclination = Mathf.Deg2Rad * inclination;
        lonAscendingNode = Mathf.Deg2Rad * lonAscendingNode;
}  

}

public class OrbitingBody : MonoBehaviour
{
    Transform body;
    public OrbitingBodyData bodyData;
    

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
        return;
    }

    // Update is called once per frame
    void Update()
    {

    }


    public void Init(string bodyName, double modelScalar, bool central)
    {
        body = transform.GetChild(0);

        TextAsset jsonFile = Resources.Load<TextAsset>("BodyData/" + bodyName);

        if (jsonFile == null)
        {
            Debug.LogError("Could not find body data file.");
            return;
        }

        string json = jsonFile.text;      
        bodyData = JsonUtility.FromJson<OrbitingBodyData>(json);
        bodyData.PostProcess(modelScalar);

        // Scale body to radius (desired radius)/(current radius (1))
        body.localScale = Vector3.one * (float)(bodyData.radius/0.5);

        // Apply surface texture
        // Load the material from Resources
        Material mat = Resources.Load<Material>("Materials/" + bodyName);

        if (mat == null)
        {
            Debug.LogError("Failed to load material: " + bodyName);
            return;
        }

        // Apply material to the body's MeshRenderer
        MeshRenderer renderer = body.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            renderer.material = mat;
        }

        if (central)
        {
            foreach (string satelliteName in bodyData.satellites)
            {
                GameObject orbitingBodyPrefab = Resources.Load<GameObject>("Prefabs/OrbitingBody");
                GameObject orbitingBodyGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity);
                OrbitingBody satellite = orbitingBodyGO.GetComponent<OrbitingBody>();

                satellite.Init(satelliteName, modelScalar, false);
            }
        }

    }

}
