#ifdef AVPPAdminTools
#ifdef DIAG_DEVELOPER
modded class MissionGameplay
{
	protected bool m_AllowPasswordInput = true;
    protected bool m_Toggles = true;
	
	override void OnMissionStart()
	{
		super.OnMissionStart();
		
		EnScript.SetClassVar(this, "m_AllowPasswordInput", 0, true);
		EnScript.SetClassVar(this, "m_Toggles", 0, true);
	}
	
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		
		if (KeyState(KeyCode.KC_F10)) {
			GetGame().RequestExit(0);
		}
	}
}
#endif
#endif