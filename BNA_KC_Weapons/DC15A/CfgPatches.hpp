class CfgPatches
{
    class BNA_KC_Weapons_DC15A
    {
        author = "SweMonkey and DartRuffian";
		addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Weapons_F",
                // UGL_F
            "JLTS_weapons_DC15A",
                // DC-15A
            "JLTS_weapons_DC17SA",
                // Flashlight
			"Aux501_Patch_Accessories"
				// 501st Scopes/Sights
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DC15A_Base",
            "BNA_KC_DC15A",
			"BNA_KC_DC15A_Fried",
            "BNA_KC_DC15A_UGL",
            "BNA_KC_DC15A_UGL_Fried"
        };
        magazines[] =
        {
            "12thFleet_Mag_DC15A"
        };
        ammo[] = {};
    };
};