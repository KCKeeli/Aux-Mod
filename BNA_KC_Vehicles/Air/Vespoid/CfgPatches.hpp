class CfgPatches
{
    class BNA_KC_Vehicles_Vespoid
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "BNA_KC_Vehicles",
                // Core Vehicle Addon
            "OPTRE_Vehicles_Air_Falcon",
                // Falcon
            "BNA_KC_Vehicles_Weapons",
                // Weapons
            "BNA_KC_Vehicles_Sounds"
                // Sounds
        };
        units[] =
        {
            "BNA_KC_Vespoid_Base",
            "BNA_KC_Vespoid_Armed_Base"
        };
        weapons[] = {};
    };
};