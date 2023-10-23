#include "CfgPatches.hpp"


class PointerSlot_Rail;

class CfgWeapons
{
    class BNA_KC_Stun_Muzzle;
    class Rifle_Long_Base_F;
    class SWLW_rifle_base: Rifle_Long_Base_F
    {
        class WeaponSlotsInfo;
    };
    class SWLW_DC17M: SWLW_rifle_base
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };
        class FullAuto;
        class Single;
    };
    class BNA_KC_DC17M_Base: SWLW_DC17M
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-17M (Base)";

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this", "Stun"};
        magazines[] =
        {
            "Aux12thFleet_Mag_60Rnd_DC17M",
            "Aux12thFleet_Mag_90Rnd_DC17M",
            "Aux12thFleet_Mag_5Rnd_DC17M_Sniper",
            "Aux12thFleet_Mag_1Rnd_DC17M_AT"
        };
        magazineWell[] = {};

        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};

        BNA_KC_attachmentSwap = 1; // Enables attachment swapping
        BNA_KC_attachments[] =     // Array of magazine properties to check and the attachment to use
        {
            {"BNA_KC_DC17M_isBlasterMag", "SWLW_attachment_DC17M_blaster"},
            {"BNA_KC_DC17M_isATMag", "SWLW_attachment_DC17M_at"},
            {"BNA_KC_DC17M_isSniperMag", "SWLW_attachment_DC17M_sniper"}
        };

        canShootInWater = 1;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        flashSize = 0.5;

        modelOptics = "";

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    // Short
                    "Aux501_cows_RCO",
                    "Aux501_cows_RCO_2",
                    "Aux501_cows_RCO_3",
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Long
                    "Aux501_cows_DMS",
                    "Aux501_cows_DMS_2",
                    "Aux501_cows_DMS_3",
                    "Aux501_cows_DMS_4",
                    "Aux501_cows_HoloScope",
                    "Aux501_cows_HoloScope_2",
                    "Aux501_cows_HoloScope_3",
                    // Sights
                    "Aux501_cows_reflex_optic",
                    "Aux501_cows_Holosight",
                    "Aux501_cows_Holosight_2",
                    "Aux501_cows_Holosight_3"
                };
            };
            class PointerSlot: PointerSlot_Rail
            {
                compatibleItems[]  =
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
        };

        class FullAuto: FullAuto
        {
            dispersion = 0.015;
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_DC17M_FullAuto"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC17M_FullAuto"};
            };
        };
        class Single: Single
        {
            dispersion = 0.0001;
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_DC17M_Single"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC17M_Single"};
            };
        };

        class Stun: BNA_KC_Stun_Muzzle
        {
            reloadAction = "ReloadMagazine";
            reloadMagazineSound[] = {"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss", 1, 1, 30};
        };

        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "SWLW_attachment_DC17M_blaster";
            };
        };
    };

    class BNA_KC_DC17M: BNA_KC_DC17M_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-17M";
    };
};


class CfgMagazines
{
    class SWLW_DC17M_Blaster_Mag;
    class Aux12thFleet_Mag_60Rnd_DC17M: SWLW_DC17M_Blaster_Mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[KC] DC-17M Energy Cell (60 Rnd)";
        displayNameShort = "Medium Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-17M";

        model = "\SWLW_clones_spec\DC17M_magazine_blaster.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\SWLW_clones_spec\data\DC17M_co.paa"};
        picture = "\SWLW_clones_spec\data\ui\DC17M_mag_blaster_ui_ca.paa";

        modelSpecial = "\SWLW_clones_spec\DC17M_magazine_blaster.p3d";
        modelSpecialIsProxy = 1;
        tracersEvery = 1;

        ammo = "Aux12thFleet_Ammo_DC17M_Blaster";
        count = 60; // 6 rounds per 1 mass
        mass = 10;
        initSpeed = 310;
        maxLeadSpeed = 25;

        BNA_KC_DC17M_isBlasterMag = 1;

        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;
    };
    class Aux12thFleet_Mag_90Rnd_DC17M: Aux12thFleet_Mag_60Rnd_DC17M
    {
        displayName = "[KC] DC-17M Energy Cell (90 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 90<br/>Used In: DC-17M";
        count = 90;
        mass = 15;
    };

    class Aux12thFleet_Mag_5Rnd_DC17M_Sniper: Aux12thFleet_Mag_60Rnd_DC17M
    {
        displayName = "[KC] DC-17M Sniper Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 5<br/>Used In: DC-17M";

        model = "\SWLW_clones_spec\DC17M_magazine_sniper.p3d";
        modelSpecial = "\SWLW_clones_spec\DC17M_magazine_sniper.p3d";
        picture = "\SWLW_clones_spec\data\ui\DC17M_mag_sniper_ui_ca.paa";

        ammo = "Aux12thFleet_Ammo_DC17M_Sniper";
        count = 5; // 1 rounds per 2 mass
        mass = 10;
        initSpeed = 1250;

        BNA_KC_DC17M_isBlasterMag = 0;
        BNA_KC_DC17M_isSniperMag = 1;
    };

    class Aux12thFleet_Mag_1Rnd_DC17M_AT: Aux12thFleet_Mag_60Rnd_DC17M
    {
        displayName = "[KC] DC-17M Anti-Armor Cell";
        displayNameShort = "Anti-Armor";
        descriptionShort = "Anti-Armor Energy Cell<br/>Rounds: 1<br/>Used In: DC-17M";

        model = "\SWLW_clones_spec\DC17M_magazine_at.p3d";
        modelSpecial = "\SWLW_clones_spec\DC17M_magazine_at.p3d";
        picture = "\SWLW_clones_spec\data\ui\DC17M_mag_at_ui_ca.paa";

        ammo = "Aux12thFleet_Ammo_DC17M_40mm_AT";
        count = 1; // 1 rounds per 20 mass
        mass = 20;
        initSpeed = 510;

        BNA_KC_DC17M_isBlasterMag = 0;
        BNA_KC_DC17M_isATMag = 1;
    };
};


class CfgAmmo
{
    class Aux12thFleet_Ammo_Rifle_Blue;
    class Aux12thFleet_Ammo_DC17M_Blaster: Aux12thFleet_Ammo_Rifle_Blue
    {
        caliber = 2.4;
        hit = 23;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        timetolive = 6;
        typicalspeed = 300;
    };

    class Aux12thFleet_Ammo_Sniper_Blue;
    class Aux12thFleet_Ammo_DC17M_Sniper: Aux12thFleet_Ammo_Sniper_Blue
    {
        caliber = 3;
        hit = 95;
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 10;
        timetolive = 20;
        typicalspeed = 1250;
    };

    class Aux12thFleet_Ammo_40mm_AT;
    class Aux12thFleet_Ammo_DC17M_40mm_AT: Aux12thFleet_Ammo_40mm_AT
    {
        caliber = 100;
        hit = 1000;
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_DC17M_FullAuto: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"\BNA_KC_Weapons\DC17M\Data\Audio\FullAuto\DC17M_Fire1.wss", 1, 1},
            {"\BNA_KC_Weapons\DC17M\Data\Audio\FullAuto\DC17M_Fire2.wss", 1, 1},
            {"\BNA_KC_Weapons\DC17M\Data\Audio\FullAuto\DC17M_Fire3.wss", 1, 1},
            {"\BNA_KC_Weapons\DC17M\Data\Audio\FullAuto\DC17M_Fire4.wss", 1, 1}
        };
    };
    class BNA_KC_SoundShader_DC17M_Single: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_DC17M_FullAuto: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC17M_FullAuto"};
    };
    class BNA_KC_SoundSet_DC17M_Single: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC17M_Single"};
    };
};