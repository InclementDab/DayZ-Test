modded class DayZGame
{
	void DayZGame()
	{
#ifdef AVPPAdminTools
		EnScript.SetClassVar(this, "m_DisablePasswordProtection", 0, true);
#endif
	}
}