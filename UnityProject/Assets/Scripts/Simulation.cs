using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class Simulation : MonoBehaviour
{
    float unixTime;
    float simTimeScalar = 50000;
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
        unixTime += Time.deltaTime * simTimeScalar;
        centralBody.UnixTime = unixTime;   

        if (Keyboard.current.rightArrowKey.wasPressedThisFrame)
        {
            NextOrbitingBody();
        } else if (Keyboard.current.leftArrowKey.wasPressedThisFrame)
        {
            PreviousOrbitingBody();
        }
    }

    void InstantiateOrbitingBody()
    {
        orbitingBodyGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity);
        centralBody = orbitingBodyGO.GetComponent<OrbitingBody>();
        centralBody.Init(bodyNames[currentBody], 1, true);
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
