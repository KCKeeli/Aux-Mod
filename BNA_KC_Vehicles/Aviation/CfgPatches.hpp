class CfgPatches
{
	class BNA_KC_Vehicles_LAATs
	{
		addonRootClass= "BNA_KC_Vehicles";
		author = "SweMonkey and DartRuffian";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"BNA_KC_Gear",
				// Pilot unit
			"lsd_vehicles_heli",
				// LAAT/c
			"3AS_LAAT",
				// LAAT/i
			"3as_Starships",
				// Republic Transport
			"ls_functions",
				// Impulse script
			"A3_Air_F_Exp_VTOL_01"
				// HAG shit
		};
		units[] =
		{
			"BNA_KC_LAATi_MK1",
			"BNA_KC_LAATi_MK2",
			"BNA_KC_LAATc",
			"BNA_KC_RepubTransport",
			"BNA_KC_HAG_Base",
			"BNA_KC_HVT_Base",
			"BNA_KC_HIT_Base"
		};
		weapons[] = {};
	};
};