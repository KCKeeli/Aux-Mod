#include "CfgPatches.hpp"


class Mode_SemiAuto;

class CfgWeapons
{
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JLTS_DP23: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
    };
    class BNA_KC_DP23_Base: JLTS_DP23
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DP-23 (Base)";
        baseWeapon = "BNA_KC_DP23_Base";

        modes[] =
        {
            "Single"
        };
        muzzles[] =
        {
            "this"
        };
        magazines[] = {"Aux12thFleet_Mag_DP23", "Aux12thFleet_Mag_DP23_HP"};
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    "Aux501_cows_RCO",
                    "Aux501_cows_RCO_2",
                    "Aux501_cows_RCO_3",
                    "Aux501_cows_reflex_optic"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]  =
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
        };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_DP23_Single"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DP23_Single"};
            };
        };
    };

    class BNA_KC_DP23: BNA_KC_DP23_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DP-23";
        baseWeapon = "BNA_KC_DP23";
        JLTS_shieldedWeapon = "BNA_KC_DP23_RiotShield";
        JLTS_friedItem = "BNA_KC_DP23_Fried";
    };
    class BNA_KC_DP23_Fried: BNA_KC_DP23
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DP-23 (Fried)";
        baseWeapon = "BNA_KC_DP23_Fried";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";

        JLTS_shieldedWeapon = "BNA_KC_DP23_RiotShield_Fried";
        JLTS_isFried = 1;
        magazines[] = {};
    };

    class BNA_KC_DP23_RiotShield: BNA_KC_DP23
    {
        // Scopes
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_DP23_RiotShield";

        JLTS_isShielded = 1;
        JLTS_friedItem = "BNA_KC_DP23_RiotShield_Fried";
        JLTS_baseWeapon = "BNA_KC_DP23";

        inertia = 0.8;

        model = "\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DP23\data\DP23_co.paa", "\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] =
                {
                    "JLTS_riot_shield_attachment",
                    "JLTS_riot_shield_212_attachment",
                    "JLTS_riot_shield_501_attachment",
                    "JLTS_riot_shield_101_attachment",
                    "JLTS_riot_shield_CG_attachment",
                    "JLTS_riot_shield_GD_attachment",
                    "JLTS_riot_shield_droid_attachment"
                };
            };
        };
    };
    class BNA_KC_DP23_RiotShield_Fried: BNA_KC_DP23_RiotShield
    {
        displayName = "[KC] DP-23 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
        baseWeapon = "BNA_KC_DP23_RiotShield_Fried";

        JLTS_baseWeapon = "BNA_KC_DP23_Fried";
        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class JLTS_DP23_mag;
    class Aux12thFleet_Mag_DP23: JLTS_DP23_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] DP-23 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 30<br/>Used In: DP-23";
        ammo = "Aux12thFleet_Ammo_Scatter_Blue";
        count = 30;

        JLTS_hasEMPProtection = 1;
    };

    class Aux12thFleet_Mag_DP23_HP: Aux12thFleet_Mag_DP23
    {
        displayName = "[12th Fleet] DP-23 HP Energy Cell";
        displayNameShort = "Medium Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 15<br/>Used In: DP-23";
        ammo = "Aux12thFleet_Ammo_Scatter_HP_Blue";
        count = 15;
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_DP23_Single: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_DP23_Single: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DP23_Single"};
    };
};