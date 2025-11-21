using Meta.XR.ImmersiveDebugger.UserInterface;
using MixedReality.Toolkit.UX;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public Simulation simulation;  //Set in editor
    public PressableButton timeLiveBtn; // Set in editor

    private bool isPaused = false;
    private bool timeLive = false;

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

    public void TimePlayPause()
    {
        if (isPaused)
        {
            simulation.TimeScalar = TimeScalar.REAL;
            isPaused = false;
        }
        else
        {
            simulation.TimeScalar = TimeScalar.ZERO;
            isPaused = true;
        }
    }

    public void SetTimeLiveBtn(bool value)
    {
        timeLiveBtn.ForceSetToggled(value);
    }

    public void LiveButtonPressed()
    {
        simulation.SetTimeLive();
    }

}
