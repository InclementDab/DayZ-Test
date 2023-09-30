#ifdef AVPPAdminTools
#ifdef DIAG_DEVELOPER
modded class PermissionManager
{
	override bool IsSuperAdmin(string steam64Id)
	{
		return true;
	}
}
#endif
#endif