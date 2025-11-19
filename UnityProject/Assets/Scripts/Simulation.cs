using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

[Serializable]
public class OrbitingBodyData
{
    public double radius;
}

public class Simulation : MonoBehaviour
{
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

    float unixTime;    
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
        unixTime += Time.deltaTime * timeScalarDict[timeScalar];
   
        Debug.Log("Time Scalar: " + timeScalarDict[timeScalar]);

        centralBody.UnixTime = unixTime;   
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
}
