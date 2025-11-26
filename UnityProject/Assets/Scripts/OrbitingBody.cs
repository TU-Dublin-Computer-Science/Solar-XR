using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

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
    const double EPOCH_JULIAN_DATE = 2451545.0; // 2000-01-01.5
    const double TAU = Math.PI * 2;
    const int ORBIT_POINTS = 1024;  //The greater the number to more accurate the orbit line
    const int MAX_SATELLITE_DIST = 1000000; // Max distance for non-planet satellites
    readonly string[] PlanetNames = new string[]
    {
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptune"
    };

    public LineRenderer orbitVisual; // Assign in inspector

    private double modelScalar;
    private bool rotationEnabled;
    private bool central = false;
    private bool orbiting = false;

    private bool initialised = false;
    private double totalRotation = 0;

    private double unixTime;
    private double julianTime;

    private Transform bodyParent;
    private Transform body;
    private Transform labelParent;
    private TextMeshPro label;    
    private List<OrbitingBody> satelliteObjects;

    public double UnixTime
    {
        get { return unixTime; }
        set
        {
            unixTime = value;
            julianTime = UnixToJulian(unixTime);

            if (!initialised) { return; }
            
            UpdateBody();

            if (!central) { return; }
                        
            foreach (OrbitingBody satellite in satelliteObjects)
            {                
                satellite.UnixTime = unixTime;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (label != null && Camera.main != null)
        {
            // Make the label face the camera
            labelParent.transform.rotation = Quaternion.LookRotation(label.transform.position - Camera.main.transform.position);

            float newScale = Vector3.Distance(Camera.main.transform.position, label.transform.position) * 0.3f;
            labelParent.transform.localScale = new Vector3(newScale, newScale, newScale);
        }
    }

    public void Init(string bodyName, double modelScalar, bool central)
    {
        LoadFromJSON(bodyName);

        InitFields(modelScalar, central);

        SetupGameObject();

        SpawnSatellites();

        if (orbiting) 
        {
            orbitVisual.enabled = true;
            DrawOrbitVisual();            
        } else
        {
            orbitVisual.enabled = false;
        }

        initialised = true;
    }

    // This function can be used externally to just load the data of a body without generating the model
    public void LoadFromJSON(string bodyName)
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

    private void InitFields(double modelScalar, bool central)
    {
        this.central = central;
        this.modelScalar = modelScalar;

        if (central)
        {  // If central body it's diameter is 1
            radius = 0.5;
            modelScalar = 0.5f / (float)radius;            
        } else
        {                                      
            if (radius != -1)  //If anything else it's diameter is scaled
            {
                radius *= modelScalar;
            }
            else  //if the radius isn't defined set a minimum radius
            {
                radius = modelScalar * 10;
            }            
        }

        bodyParent = transform.Find("OrbitalPlane/BodyParent");
        body = bodyParent.Find("Body");
        labelParent = bodyParent.Find("LabelParent");
        label = labelParent.Find("Label").GetComponent<TextMeshPro>();
        
        name = name.ToLower();
        rotationEnabled = rotation_factor != -1;

        argument_periapsis = Mathf.Deg2Rad * argument_periapsis;
        mean_anomaly = Mathf.Deg2Rad * mean_anomaly;
        inclination = Mathf.Deg2Rad * inclination;
        lon_ascending_node = Mathf.Deg2Rad * lon_ascending_node;
        semimajor_axis = semimajor_axis * modelScalar;

        orbiting = (semimajor_axis != -1 &&
                    eccentricity != -1 &&
                    argument_periapsis != -1 &&
                    mean_anomaly != -1 &&
                    inclination != -1 &&
                    lon_ascending_node != -1 &&
                    orbital_period != -1 &&
                    !central);
    }

    private void SetupGameObject()
    {         
        body.localScale = Vector3.one * (float)(radius / 0.5);
              
        // Apply surface texture
        // Load the material from Resources
        Material mat = Resources.Load<Material>("Materials/" + name);

        if (mat == null)
        {
            mat = Resources.Load<Material>("Materials/moon");
        }
        
        // Apply material to the body's MeshRenderer
        MeshRenderer renderer = body.GetComponent<MeshRenderer>();
        if (renderer != null)
        {
            renderer.material = mat;
        }

        // Set the label's local Y position to half the model's Y scale
        labelParent.localPosition = new Vector3(
            labelParent.localPosition.x,
            body.localScale.y / 2f,
            labelParent.localPosition.z);

        label.text = char.ToUpper(name[0]) + name.Substring(1);
    }

    private void DrawOrbitVisual()
    {
        orbitVisual.positionCount = ORBIT_POINTS + 1; // +1 to close the loop

        for (int i = 0; i < ORBIT_POINTS; i++)
        {
            float angle = (i / (float)ORBIT_POINTS) * (float)TAU;
            orbitVisual.SetPosition(i, GetOrbitPoint(angle));
        }
       
        // Add first point again to close the loop
        orbitVisual.SetPosition(ORBIT_POINTS, GetOrbitPoint(0));
    }


    private void SpawnSatellites()
    {
        if (!central) return;

        satelliteObjects = new List<OrbitingBody>();

        for (int i = 0; i < satellites.Count; i++)
        {
            string satelliteName = satellites[i];

            GameObject orbitingBodyPrefab = Resources.Load<GameObject>("Prefabs/OrbitingBody");
            GameObject satelliteGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity, bodyParent);
            OrbitingBody satellite = satelliteGO.GetComponent<OrbitingBody>();

            satellite.LoadFromJSON(satelliteName);
                        
            // Skip satellites that are too far away (non-planetary)
            if (!PlanetNames.Contains(satellite.name) && satellite.semimajor_axis > MAX_SATELLITE_DIST)
            {
                Destroy(satelliteGO);
                continue;
            }
           
            satellite.Init(satelliteName, modelScalar, false);

            satelliteObjects.Add(satellite);
        }
    }

    private void UpdateBody()
    {
        if (orbiting)
        {
            double trueAnomaly = GetTrueAnomaly();         
            bodyParent.localPosition = GetOrbitPoint(trueAnomaly);
        }

        if (rotationEnabled)
        {
            double newRotation = (rotation_factor * julianTime);
            double rotAngle = newRotation - totalRotation;
            body.Rotate(Vector3.up * -(float)rotAngle);
            totalRotation = newRotation;
        }
    }

    private Vector3 GetOrbitPoint(double angle) 
    {       
        // Calculate the semi-minor axis based on eccentricity
        double semiminorAxis = semimajor_axis * Math.Sqrt(1 - eccentricity * eccentricity);
        
        double focalOffset = semimajor_axis * eccentricity;

        double x = Math.Cos(angle) * semiminorAxis - focalOffset;
        double z = -Math.Sin(angle) * semiminorAxis;
        
        return new Vector3((float)x, 0, (float)z);
    }


    private double GetTrueAnomaly()
    {
        double meanMotion = TAU / (orbital_period * 86400.0);

        // 1. Get Current Mean anomaly 
        // This is angle of body from periapsis (closest point to body) at the current time
        double t = julianTime - EPOCH_JULIAN_DATE;
        
        t *= 86400.0; // #Convert days to seconds, as mean motion is rad/s
        double currentMeanAnomaly = mean_anomaly + (meanMotion * t);
        currentMeanAnomaly = NormalizeAngle(currentMeanAnomaly);  // Wrap to [0, TAU]

        // 2. Solve Kepler's equation for the eccentric anomaly
        // This relates the current mean anomaly to orbit eccentricity
        var eccentricAnomaly = SolveKeplarsEquation(currentMeanAnomaly, eccentricity);

        // 3: Calculate the true anomaly (this is the actual value, not the mean)
        double e = eccentricity;
        double trueAnomaly = 2.0 * Math.Atan(Math.Sqrt((1.0 + e) / (1.0 - e)) * Math.Tan(eccentricAnomaly / 2.0));

        return NormalizeAngle(trueAnomaly);
    }

    // Solve Kepler's equation iteratively
    private double SolveKeplarsEquation(double meanAnomaly, double eccentricity)
    {
        double eccentricAnomaly = meanAnomaly; // initial guess E ≈ M
        const double epsilon = 1e-6;  // Convergence tolerance	
        const int maxIter = 50;

        for (int i = 0; i < maxIter; i++)
        {
            double delta = eccentricAnomaly - eccentricity * Math.Sin(eccentricAnomaly) - meanAnomaly;
            if (Math.Abs(delta) < epsilon) break;

            double denom = 1.0 - eccentricity * Math.Cos(eccentricAnomaly);
            if (Math.Abs(denom) < 1e-12) break; // avoid divide-by-zero
            eccentricAnomaly -= delta / denom;
        }

        return eccentricAnomaly;
    }

    private double NormalizeAngle(double angle)
    {
        // returns angle in [0, TAU)
        angle = angle % TAU;
        if (angle < 0) angle += TAU;
        return angle;
    }


    double UnixToJulian(double unixTime)
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



