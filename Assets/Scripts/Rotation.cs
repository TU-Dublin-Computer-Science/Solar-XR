using UnityEngine;

public class Rotation : MonoBehaviour
{
    public int rotationDirection = 1;
    public Vector3 rotationSpeed = new Vector3(0f, 50f, 0f);

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(rotationSpeed * rotationDirection * Time.deltaTime);
    }

    public void RotateForward()
    {
        rotationDirection = -1;
    }

    public void RotateBackward()
    {
        rotationDirection = 1;
    }
}
