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
    public MenuManager menuManager; // Set in editor
    public TMP_Text TxtDateTime;  // Set in editor
    public TMP_Text TxtScalar;    // Set in editor  
    public TMP_Text TxtPlayPause;  // Set in editor

    public double UnixTime
    {
        get { return unixTime; }
        set 
        {
            unixTime = value;
            centralBody.UnixTime = unixTime;
            
            var systemTime = DateTimeOffset.UtcNow.ToUnixTimeSeconds();

            // When simulation time is out of sync, it's not live
            if (timeLive && Math.Abs((int)unixTime - (int)systemTime) > 5)
            {
                TimeLive = false;                
            }

            TxtDateTime.text = FormatUnixTime((long)unixTime);
        }   
    }

    public TimeScalar TimeScalar
    {
        get { return timeScalar; }
        set
        { 
            timeScalar = value;             
            int timeScalarValue = timeScalarDict[timeScalar];

            if (Math.Abs(timeScalarValue) > 3600)
            {
                int hoursPerSec = timeScalarValue / 3600;
                TxtScalar.text = $"{hoursPerSec} hrs/s";
            }
            else if (timeScalarValue == 1)
            {
                TxtScalar.text = "1 sec/s";
            }
            else if (timeScalarValue == 0)
            {
                TxtScalar.text = "Paused";
                TxtPlayPause.text = "Play";
            }
            else
            {
                int minsPerSec = timeScalarValue / 60;
                TxtScalar.text = $"{minsPerSec} mins/s";
                TxtPlayPause.text = "Pause";
            }
        }
    }

    public bool TimeLive
    {
        get { return timeLive; }
        set
        {
            timeLive = value;
            menuManager.SetTimeLiveBtn(value);
        }
    }

    // Dictionary mapping TimeScalar enum to integer values
    Dictionary<TimeScalar, int> timeScalarDict = new Dictionary<TimeScalar, int>
    {
        { TimeScalar.BACKWARD2, -10000 },
        { TimeScalar.BACKWARD1, -1800},
        { TimeScalar.ZERO, 0 },
        { TimeScalar.REAL, 1 },
        { TimeScalar.FORWARD1, 1800 },
        { TimeScalar.FORWARD2, 10000 }
    };

    private double unixTime;
    private TimeScalar timeScalar;
    private bool timeLive;
    string[] bodyNames = { "sun", "mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune"};
    int currentBody = 0;

    GameObject orbitingBodyPrefab;
    GameObject orbitingBodyGO;
    OrbitingBody centralBody;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        orbitingBodyPrefab = Resources.Load<GameObject>("Prefabs/OrbitingBody");

        InstantiateOrbitingBody();

        SetTimeLive();
    }

    // Update is called once per frame
    void Update()
    {
        UnixTime += Time.deltaTime * timeScalarDict[timeScalar];              
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
    public void SetTimeLive()
    {
        TimeScalar = TimeScalar.REAL;
        UnixTime = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
        TimeLive = true;
    }

    private void InstantiateOrbitingBody()
    {
        double modelScalar;
        TextAsset jsonFile = Resources.Load<TextAsset>("BodyData/earth"); // path without .json
        OrbitingBodyData orbitingBodyData = JsonUtility.FromJson<OrbitingBodyData>(jsonFile.text);
        if (orbitingBodyData.radius != 0)
        {
            modelScalar = 0.5 / orbitingBodyData.radius;

        }
        else
        {
            modelScalar = 0.5 / 10;
        }

        orbitingBodyGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity);
        centralBody = orbitingBodyGO.GetComponent<OrbitingBody>();
        centralBody.Init(bodyNames[currentBody], modelScalar, true);
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
