#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QGVAR(weapons),
            QGVAR(sounds),
            "OPTRE_Vehicles_Air_Falcon"
        };
        units[] =
        {
            QCLASS(Vespoid_Base),
            QCLASS(Vespoid_Armed_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"