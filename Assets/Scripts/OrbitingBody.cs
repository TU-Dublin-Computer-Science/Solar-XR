using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Unity.Android.Gradle.Manifest;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Networking;
using static TreeEditor.TextureAtlas;


public class OrbitingBody : MonoBehaviour
{
    // Fields that come from json
    public int ID;
    public string name;
    public double radius;
    public double rotation_factor;
    public string model_path;
    public string central_body;
    public double semimajor_axis;
    public double eccentricity;
    public double argument_periapsis;
    public double mean_anomaly;
    public double inclination;
    public double lon_ascending_node;
    public double orbital_period;
    public List<string> info_points;
    public List<string> satellites;

    // Other fields
    private float modelScalar;
    private bool rotationEnabled;
    private bool central = false;

    private bool initialised = false;
    private double totalRotation = 0;

    private float unixTime;
    private double julianTime;

    private Transform body;
    
    // Public Accessors
    public float UnixTime
    {
        get { return unixTime; }
        set
        {
            unixTime = value;
            julianTime = UnixToJulian(unixTime);

            if (initialised && rotationEnabled)
            {
                double newRotation = (rotation_factor * julianTime);
                double rotAngle = newRotation - totalRotation;
                transform.Rotate(Vector3.up * -(float)rotAngle);
                totalRotation = newRotation;
            }
        }
    }        
        
    public void Init(string bodyName, float modelScalar, bool central)
    {      
        LoadFromJSON(bodyName);

        InitFields(modelScalar, central);

        SetupGameObject();

        SpawnSatellites();

        initialised = true;
    }

    void LoadFromJSON(string bodyName)
    {
        TextAsset jsonFile = Resources.Load<TextAsset>("BodyData/" + bodyName);

        if (jsonFile == null)
        {
            Debug.LogError("Could not find body data file.");
            return;
        }

        string json = jsonFile.text;

        JsonUtility.FromJsonOverwrite(json, this);
    }

    void InitFields(float modelScalar, bool central)
    {        
        this.modelScalar = modelScalar;
        this.central = central;
        body = transform.GetChild(0);

        name = name.ToLower();
        rotationEnabled = rotation_factor != -1;

        if (radius != -1)
        {
            radius *= modelScalar;
        }
        else
        {
            radius = modelScalar * 10;
        }

        argument_periapsis = Mathf.Deg2Rad * argument_periapsis;
        mean_anomaly = Mathf.Deg2Rad * mean_anomaly;
        inclination = Mathf.Deg2Rad * inclination;
        lon_ascending_node = Mathf.Deg2Rad * lon_ascending_node;
    }

    void SetupGameObject()
    {
        // Scale body to radius (desired radius)/(current radius (1))
        body.localScale = Vector3.one * (float)(radius / 0.5);

        // Apply surface texture
        // Load the material from Resources
        Material mat = Resources.Load<Material>("Materials/" + name);

        if (mat == null)
        {
            Debug.LogError("Failed to load material: " + name);
            return;
        }

        // Apply material to the body's MeshRenderer
        MeshRenderer renderer = body.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            renderer.material = mat;
        }
    }

    void SpawnSatellites()
    {
        if (central)
        {
            foreach (string satelliteName in satellites)
            {
                GameObject orbitingBodyPrefab = Resources.Load<GameObject>("Prefabs/OrbitingBody");
                GameObject orbitingBodyGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity);
                OrbitingBody satellite = orbitingBodyGO.GetComponent<OrbitingBody>();

                satellite.Init(satelliteName, modelScalar, false);
            }
        }
    }

    double UnixToJulian(float unixTime)
    {
        // Convert Unix timestamp to UTC DateTime
        DateTime dateTime = DateTimeOffset.FromUnixTimeSeconds((long)unixTime).UtcDateTime;

        int year = dateTime.Year;
        int month = dateTime.Month;
        int day = dateTime.Day;
        int hour = dateTime.Hour;
        int minute = dateTime.Minute;
        int second = dateTime.Second;

        if (month <= 2)
        {
            year -= 1;
            month += 12;
        }

        int A = year / 100;
        int B = 2 - A + (A / 4);
        double JD = Math.Floor(365.25 * (year + 4716))
                    + Math.Floor(30.6001 * (month + 1))
                    + day + B - 1524.5;

        JD += (hour + (minute + second / 60.0) / 60.0) / 24.0;

        return JD;
    }

}



