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
        simulation.TimeScalar = TimeScalar.BACKWARD1;
    }

    public void TimeBackward2()
    {
        simulation.TimeScalar = TimeScalar.BACKWARD2;
    }

    public void TimeForward1()
    {
        simulation.TimeScalar = TimeScalar.FORWARD1;
    }

    public void TimeForward2()
    {
        simulation.TimeScalar = TimeScalar.FORWARD2;
    }

    public void TimeReal()
    {
        simulation.TimeScalar = TimeScalar.REAL;
    }
}
