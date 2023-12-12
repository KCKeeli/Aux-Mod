class CfgVehicles
{
    class lsd_gar_trooper_phase1;
    class BNA_KC_Unit_Base: lsd_gar_trooper_phase1
    {
        SCOPE_PRIVATE;
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        faction = "BNA_KC_Faction_KC";

        displayName = "INF Trooper (Base)";
        uniformClass = "BNA_KC_Uniform_Base";

        // Inventory
        weapons[] =
        {
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "SWLB_clone_binocular",
            "Throw",               // Allows the unit to throw grenades
            "Put"                  // Allows the unit to place explosives
        };
        respawnWeapons[] =
        {
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            // ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            // ITEM_2("Aux12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            // ITEM_2("ls_mag_classC_thermalDet"),
            // ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            // ITEM_3("3AS_SmokeWhite"),
            // ITEM_3("3AS_SmokeBlue"),
            // ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] =
        {
            // Ammo
            // ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            // ITEM_2("Aux12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            // ITEM_2("ls_mag_classC_thermalDet"),
            // ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            // ITEM_3("3AS_SmokeWhite"),
            // ITEM_3("3AS_SmokeBlue"),
            // ITEM_3("3AS_SmokeGreen")
        };
        items[] =
        {
            // Medical
            // ITEM_10("ACE_elasticBandage"),
            // ITEM_4("ACE_tourniquet"),
            // Other
            // ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };
        respawnItems[] =
        {
            // Medical
            // ITEM_10("ACE_elasticBandage"),
            // ITEM_4("ACE_tourniquet"),
            // Other
            // ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        backpack = "";
    };

    #include "configs/Units_P1.hpp"
    #include "configs/Units_P1_Pilot.hpp"
    #include "configs/Units_P1_Tanker.hpp"
    #include "configs/Units_P2.hpp"
    #include "configs/Units_P2_Pilot.hpp"
    #include "configs/Units_P2_Tanker.hpp"
    #include "configs/Units_ARC.hpp"
    #include "configs/Units_ARF.hpp"
    #include "configs/Units_Commando.hpp"
    #include "configs/Units_Jedi.hpp"

    class SWLB_clone_backpack;
    class BNA_KC_Backpack_Base: SWLB_clone_backpack
    {
        SCOPE_PUBLIC;
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] INF Backpack (Base)";
        hiddenSelections[] = {"camo1", "cover", "heavy", "medic", "RTO"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };

        maximumLoad = 400;
    };

    class BNA_KC_Backpack: BNA_KC_Backpack_Base
    {
        displayName = "[KC] INF Backpack";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\standard\camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_ca.paa);
    };

    class BNA_KC_Backpack_Heavy_Base: BNA_KC_Backpack_Base
    {
        displayName = "[KC] INF Heavy Backpack (Base)";

        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_heavy_ca.paa";
    };

    class BNA_KC_Backpack_Heavy: BNA_KC_Backpack_Heavy_Base
    {
        displayName = "[KC] INF Heavy Backpack";

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\standard\camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Heavy_ca.paa);
    };

    class BNA_KC_Backpack_Radio_Base: BNA_KC_Backpack_Base
    {
        displayName = "[KC] INF Radio Backpack (Base)";

        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "",
            "",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_RTO_ca.paa";

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class BNA_KC_Backpack_Radio: BNA_KC_Backpack_Radio_Base
    {
        displayName = "[KC] INF Radio Backpack";

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\standard\camo1_co.paa),
            "",
            "",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Radio_ca.paa);
    };

    class BNA_KC_Backpack_Medic_Base: BNA_KC_Backpack_Base
    {
        displayName = "[KC] INF Medic Backpack (Base)";

        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_medic_ca.paa";
    };

    class BNA_KC_Backpack_Medic: BNA_KC_Backpack_Medic_Base
    {
        displayName = "[KC] INF Medic Backpack";

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_ca.paa);
    };

    class BNA_KC_Backpack_Medic_Heavy_Base: BNA_KC_Backpack_Base
    {
        displayName = "[KC] INF Medic Heavy Backpack (Base)";

        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_heavy_ca.paa";
    };

    class BNA_KC_Backpack_Medic_Heavy: BNA_KC_Backpack_Medic_Heavy_Base
    {
        displayName = "[KC] INF Medic Heavy Backpack";

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_Heavy_ca.paa);
    };

    class BNA_KC_Backpack_Medic_Radio_Base: BNA_KC_Backpack_Radio_Base
    {
        displayName = "[KC] INF Medic Radio Backpack (Base)";

        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
            "",
            "",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_medic_ca.paa";
    };

    class BNA_KC_Backpack_Medic_Radio: BNA_KC_Backpack_Medic_Radio_Base
    {
        displayName = "[KC] INF Medic Radio Backpack";

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "",
            "",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_Radio_ca.paa);
    };
};