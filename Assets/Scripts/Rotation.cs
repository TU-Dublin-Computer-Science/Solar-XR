using UnityEngine;

public class Rotation : MonoBehaviour
{
    public Vector3 rotationSpeed = new Vector3(0f, 50f, 0f);

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(rotationSpeed * Time.deltaTime);
    }
}
