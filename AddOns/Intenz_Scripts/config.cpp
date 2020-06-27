class CfgPatches
{
	class IntenZ_scripts
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class IntenZPack
	{
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZ_Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ_Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZ_Scripts/5_mission"};
			};
		};
	};
};