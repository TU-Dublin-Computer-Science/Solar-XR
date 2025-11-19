using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public Simulation simulation;  //Set in editor
    
    public void NextOrbitingBody()
    {     
        simulation.NextOrbitingBody();
       
    }

    public void PreviousOrbitingBody()
    {        
        simulation.PreviousOrbitingBody();
    }

    public void TimeBackward1()
    {
        simulation.timeScalar = TimeScalar.BACKWARD1;
    }

    public void TimeBackward2()
    {
        simulation.timeScalar = TimeScalar.BACKWARD2;
    }

    public void TimeForward1()
    {
        simulation.timeScalar = TimeScalar.FORWARD1;
    }

    public void TimeForward2()
    {
        simulation.timeScalar = TimeScalar.FORWARD2;
    }

    public void TimeReal()
    {
        simulation.timeScalar = TimeScalar.REAL;
    }
}
