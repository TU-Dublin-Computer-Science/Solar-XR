using Oculus.Interaction;
using UnityEngine;

public class Simulation : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        GameObject orbitingBodyPrefab = Resources.Load<GameObject>("Prefabs/OrbitingBody");
        GameObject orbitingBodyGO = Instantiate(orbitingBodyPrefab, transform.position, Quaternion.identity);
        OrbitingBody centralBody = orbitingBodyGO.GetComponent<OrbitingBody>();

        int sunRadius = 696340;

        double modelScalar = 0.5 / sunRadius;

        centralBody.Init("sun", modelScalar, true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
