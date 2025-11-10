using UnityEngine;

public class ButtonHandler : MonoBehaviour
{
    public Simulation simulation;  //Set in editor
    
    public void NextOrbitingBody()
    {
        Debug.Log("Press");
        simulation.NextOrbitingBody();
       
    }

    public void PreviousOrbitingBody()
    {
        Debug.Log("Press");
        simulation.PreviousOrbitingBody();
    }
}
