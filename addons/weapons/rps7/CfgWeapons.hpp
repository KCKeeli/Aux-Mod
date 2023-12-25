class CfgWeapons
{
    class launch_RPG32_F;
    class JLTS_RPS6: launch_RPG32_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class CLASS(RPS7_Base): JLTS_RPS6
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        displayName = "[KC] RPS-7 (Base)";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_RPS7_AT), QCLASS(Mag_RPS7_HE), "Aux12thFleet_Mag_RPS7_AT", "Aux12thFleet_Mag_RPS7_HE"};
        magazineWell[] = {};

        modelOptics = "\ls_weapons\tertiary\rps6\ls_scope_rps6.p3d";

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = MASS_LAUNCHER;
        };

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_RocketShot)};
            };
        };
    };

    class CLASS(RPS7): CLASS(RPS7_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] RPS-7";
        JLTS_friedItem = QCLASS(RPS7_Fried);
    };

    class CLASS(RPS7_Fried): CLASS(RPS7)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] RPS-7 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};