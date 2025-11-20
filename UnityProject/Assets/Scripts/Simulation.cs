using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;



[Serializable]
public class OrbitingBodyData
{
    public double radius;
}

public class Simulation : MonoBehaviour
{
    public TMP_Text TxtDateTime;  // Set in editor

    public float UnixTime
    {
        get { return unixTime; }
        set 
        {
            unixTime = value;
            centralBody.UnixTime = unixTime;

            string formattedTime = FormatUnixTime((long)unixTime);
            TxtDateTime.text = formattedTime;
        }   
    }

    public TimeScalar timeScalar = TimeScalar.REAL;

    // Dictionary mapping TimeScalar enum to integer values
    Dictionary<TimeScalar, int> timeScalarDict = new Dictionary<TimeScalar, int>
    {
        { TimeScalar.BACKWARD2, -10000 },
        { TimeScalar.BACKWARD1, -8000},
        { TimeScalar.ZERO, 0 },
        { TimeScalar.REAL, 1 },
        { TimeScalar.FORWARD1, 8000 },
        { TimeScalar.FORWARD2, 10000 }
    };

    private float unixTime;
    string[] bodyNames = { "sun", "mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune"};
    int currentBody = 0;

    GameObject orbitingBodyPrefab;
    GameObject orbitingBodyGO;
    OrbitingBody centralBody;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        unixTime = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
        
        orbitingBodyPrefab = Resources.Load<GameObject>("Prefabs/OrbitingBody");

        InstantiateOrbitingBody();
    }

    // Update is called once per frame
    void Update()
    {
        UnixTime += Time.deltaTime * timeScalarDict[timeScalar];              
    }

    void InstantiateOrbitingBody()
    {
        double modelScalar;
        TextAsset jsonFile = Resources.Load<TextAsset>("BodyData/earth"); // path without .json
        OrbitingBodyData orbitingBodyData = JsonUtility.FromJson <OrbitingBodyData>(jsonFile.text);
        if (orbitingBodyData.radius != 0)
        {
            modelScalar = 0.5 / orbitingBodyData.radius; 
            
        } else
        {
            modelScalar = 0.5 / 10;
        }   

        orbitingBodyGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity);
        centralBody = orbitingBodyGO.GetComponent<OrbitingBody>();   
        centralBody.Init(bodyNames[currentBody], modelScalar, true);
    }

    public void NextOrbitingBody()
    {
        Debug.Log("Next Orbiting Body");
        currentBody = (currentBody + 1) % bodyNames.Length;
        Destroy(orbitingBodyGO);
        InstantiateOrbitingBody();
    }

    public void PreviousOrbitingBody()
    {
        Debug.Log("Previous Orbiting Body");
        currentBody = (currentBody - 1 + bodyNames.Length) % bodyNames.Length;
        Destroy(orbitingBodyGO);
        InstantiateOrbitingBody();
    }

    private static string FormatUnixTime(long value)
    {
        // Convert Unix time to UTC DateTime
        DateTimeOffset dateTime = DateTimeOffset.FromUnixTimeSeconds(value).ToLocalTime();

        // Handle DST (Daylight Saving Time)
        if (TimeZoneInfo.Local.IsDaylightSavingTime(dateTime))
        {
            dateTime = dateTime.AddHours(1);
        }

        int day = dateTime.Day;
        string suffix = "th";
        if (day != 11 && day != 12 && day != 13)
        {
            switch (day % 10)
            {
                case 1: suffix = "st"; break;
                case 2: suffix = "nd"; break;
                case 3: suffix = "rd"; break;
            }
        }

        string[] months = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
        string monthName = months[dateTime.Month - 1];

        // Format: HH:MM:SS - Dth Month YYYY
        string formatted = string.Format("{0:00}:{1:00}:{2:00} - {3}{4} {5} {6}",
            dateTime.Hour, dateTime.Minute, dateTime.Second,
            day, suffix, monthName, dateTime.Year);

        return formatted;
    }
}
