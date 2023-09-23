class CfgPatches
{
    class BNA_KC_OPFOR_TechnoUnion
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_OPFOR",
                // Base OPFOR unit, uniform, etc.
            "sc_equipment",
                // Uniform textures
                // SL backpack
            "sc_props",
                // Vest
            "BNA_KC_Weapons_E5",
                // E-5
            "sc_weapons",
                // IG-3 Grenade
            "3AS_Equipment",
                // Squad shield
            "A3_Weapons_F"
                // Smoke grenade
        };
        units[] =
        {

        };
        weapons[] =
        {

        };

        skipWhenMissingDependencies = 1;
    };
};