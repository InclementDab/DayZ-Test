
class CfgPatches
{
	class DayZTest_Scripts
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class DZ_DayZTest
	{
		name = "Mod Template";
		dir = "DayZTest";
		credits = "";
		author = "";
		creditsJson = "DayZTest/Scripts/Data/Credits.json";
		inputs = "DayZTest/Scripts/Data/Inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class engineScriptModule
			{
				value = "";
				files[] =
				{
					"DayZTest/scripts/common",
					"DayZTest/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"DayZTest/scripts/common",
					"DayZTest/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"DayZTest/scripts/common",
					"DayZTest/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"DayZTest/scripts/common",
					"DayZTest/scripts/5_Mission"
				};
			};
		};
	};
};
