using Oculus.Interaction;
using System;
using UnityEngine;

public class Simulation : MonoBehaviour
{
    float unixTime;
    float simTimeScalar = 50000;
    OrbitingBody centralBody;
    
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        unixTime = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
        
        GameObject orbitingBodyPrefab = Resources.Load<GameObject>("Prefabs/OrbitingBody");
        GameObject orbitingBodyGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity);
        centralBody = orbitingBodyGO.GetComponent<OrbitingBody>();

        int sunRadius = 696340;

        float modelScalar = 0.5f / sunRadius;

        centralBody.Init("sun", modelScalar, true);
    }

    // Update is called once per frame
    void Update()
    {
        unixTime += Time.deltaTime * simTimeScalar;
        centralBody.UnixTime = unixTime;   
    }
}
