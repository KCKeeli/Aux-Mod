class CfgWeapons
{
    class Rifle_Base_F;
    class 3AS_DC15L_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class 3AS_DC15L_F: 3AS_DC15L_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };
        class FullAuto;
    };
    class CLASS(DC15L_Base): 3AS_DC15L_F
    {
        SCOPE_PRIVATE;
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] DC-15L (Base)";
        descriptionShort = "Automatic Blaster Rifle";
        baseWeapon = QCLASS(DC15L_Base);
        picture = QPATHTOF(dc15l\data\ui\DC15L_ca.paa);

        modes[] = {"FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_240rnd_DC15L), "Aux12thFleet_Mag_DC15L"};
        magazineWell[] = {};

        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        flashSize = 0.5;

        maxZeroing = 1000;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                class CompatibleItems
                {
                    // Long
                    Aux501_cows_DMS = TRUE;
                    Aux501_cows_DMS_2 = TRUE;
                    Aux501_cows_DMS_3 = TRUE;
                    Aux501_cows_DMS_4 = TRUE;
                    // Sights
                    3as_optic_dc15l = TRUE;
                };
            };
            class PointerSlot: PointerSlot
            {
                class CompatibleItems
                {
                    acc_pointer_ir = TRUE;
                    ace_acc_pointer_green = TRUE;
                    jlts_dc17sa_flashlight = TRUE;
                };
            };
        };

        class FullAuto: FullAuto
        {
            dispersion = 0.00075;
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_prone_mx";

            maxRange = 80;
            maxRangeProbab = 0.04;
            midRange = 30;
            midRangeProbab = 0.58;
            minRange = 1;
            minRangeProbab = 0.2;

            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15LShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15LShot)};
            };
        };
    };

    class CLASS(DC15L): CLASS(DC15L_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15L";
        baseWeapon = QCLASS(DC15L);
        JLTS_friedItem = QCLASS(DC15L_Fried);
    };
    class CLASS(DC15L_Fried): CLASS(DC15L)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15L (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(DC15L_Fried);
        picture = QPATHTOF(dc15l\data\ui\DC15L_Fried_ca.paa);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};