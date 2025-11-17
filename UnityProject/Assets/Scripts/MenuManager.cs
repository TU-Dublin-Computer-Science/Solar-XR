using UnityEngine;

public class MenuManager : MonoBehaviour
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
