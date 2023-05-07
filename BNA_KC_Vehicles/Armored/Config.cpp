#include "CfgPatches.hpp"


class CfgVehicles
{
    class Tank_F;
	class MBT_01_base_F: Tank_F
	{
		class Turrets;
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
		class AnimationSources;
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon;
			class muzzle_rot_cannon;
			class muzzle_rot_cmdr;
			class recoil_source;
			class commander_gun_recoil;
		};
	};
    class BNA_KC_MBT_Slammer: B_MBT_01_TUSK_F
	{
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] Blitz Assault Tank";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Body.paa",
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Tow.paa",
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Addons.paa",
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Camonet.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = 
						{
							"BNA_KC_CommanderGun",
							"SmokeLauncher"
						};
						magazines[] = 
						{
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"SmokeLauncherMag"
						};
					};
				};
				
				// gunBeg = "Usti hlavne";
				// gunEnd = "Konec hlavne";
				// memoryPointGun[] = {"usti hlavne3"};
				weapons[] = 
				{
					"BNA_KC_120_Tankgun",
					"BNA_KC_Coax"
				};
				magazines[] = 
				{
					"BNA_KC_120_AT_Mag",
					"BNA_KC_120_HEAT_Mag",
					"BNA_KC_120_HE_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon: muzzle_hide_cannon
			{
				source = "reload";
				weapon = "BNA_KC_120_Tankgun";
			};
			class muzzle_rot_cannon: muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "BNA_KC_120_Tankgun";
			};
			class muzzle_rot_cmdr: muzzle_rot_cmdr
			{
				source = "ammorandom";
				weapon = "HMG_127_MBT";
			};
			class recoil_source: recoil_source
			{
				source = "reload";
				weapon = "BNA_KC_120_Tankgun";
			};
			class commander_gun_recoil: commander_gun_recoil
			{
				source = "reload";
				weapon = "HMG_127_MBT";
			};
		};
		//soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\armor\MBT_01\MBT_01_Engine_Ext_Stop",6.30957,1,100};
		soundEngineOffExt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineShutdown",30,1,100};
		soundEngineOffInt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineShutdown",1,1};
		soundEngineOnExt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineStartup",30,1,100};
		soundEngineOnInt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineStartup",1,1};
		class Sounds
		{
			soundSetsInt[] = 
			{
				"BNA_KC_Engine_RPM0_INT_SoundSet",
				"BNA_KC_Engine_RPM1_INT_SoundSet",
				"BNA_KC_Engine_RPM2_INT_SoundSet",
				"BNA_KC_Engine_RPM3_INT_SoundSet",
				"BNA_KC_Engine_RPM4_INT_SoundSet",
				"BNA_KC_Engine_RPM5_INT_SoundSet",
				"BNA_KC_Engine_RPM6_INT_SoundSet",
				//"MBT_01_Engine_INT_Burst_SoundSet",
				"MBT_01_Tracks_01_INT_SoundSet",
				"MBT_01_Tracks_02_INT_SoundSet",
				"MBT_01_Tracks_03_INT_SoundSet",
				"MBT_01_Tracks_04_INT_SoundSet",
				"MBT_01_Tracks_05_INT_SoundSet",
				"MBT_01_Tracks_06_INT_SoundSet",
				"MBT_01_Interior_Tone_Engine_Off_SoundSet",
				"MBT_01_Interior_Tone_Engine_On_SoundSet",
				"MBT_01_Rattling_INT_SoundSet",
				"MBT_01_Rain_INT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_01_Drive_Water_INT_SoundSet",
				"MBT_01_Drive_Dirt_INT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
			soundSetsExt[] = 
			{
				"BNA_KC_Engine_RPM0_EXT_SoundSet",
				"BNA_KC_Engine_RPM1_EXT_SoundSet",
				"BNA_KC_Engine_RPM2_EXT_SoundSet",
				"BNA_KC_Engine_RPM3_EXT_SoundSet",
				"BNA_KC_Engine_RPM4_EXT_SoundSet",
				"BNA_KC_Engine_RPM5_EXT_SoundSet",
				"BNA_KC_Engine_RPM6_EXT_SoundSet",
				//"MBT_01_Engine_EXT_Burst_SoundSet",
				"MBT_01_Tracks_01_EXT_SoundSet",
				"MBT_01_Tracks_02_EXT_SoundSet",
				"MBT_01_Tracks_03_EXT_SoundSet",
				"MBT_01_Tracks_04_EXT_SoundSet",
				"MBT_01_Tracks_05_EXT_SoundSet",
				"MBT_01_Tracks_06_EXT_SoundSet",
				"MBT_01_Rain_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_01_Drive_Water_EXT_SoundSet",
				"MBT_01_Drive_Dirt_EXT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundShader"
			};
		};

		// Vehicle Inventory
		maximumLoad = 20000; // Max carrying capacity of the vic

		class TransportWeapons
		{
			class _xx_Aux501_Weaps_DC15S
			{
				count = 2;
				weapon = "Aux501_Weaps_DC15S";
			};
		};
			
		class TransportMagazines
		{
			class _xx_Aux501_Weapons_Mags_10mw50
			{
				count = 20;
				magazine = "Aux501_Weapons_Mags_10mw50";
			};
		};
			
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				count = 10;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_packingBandage
			{
				count = 10;
				name = "ACE_packingBandage";
			};
			class _xx_ACE_quikclot
			{
				count = 10;
				name = "ACE_quikclot";
			};
			class _xx_ACE_surgicalKit
			{
				count = 1;
				name = "ACE_surgicalKit"
			};
			class _xx_ToolKit
			{
				count = 1;
				name = "ToolKit"
			};
		};

		// Set the number of spare tracks to 2
		class ACE_Cargo
		{
            class Cargo
			{
                class Track
				{
                    type = "ACE_Track";
                    amount = 2;
                };
            };
        };
	};

    class APC_Wheeled_01_base_F;
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F
	{
		class Turrets;
	};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class BNA_KC_APC_Badger: B_APC_Wheeled_01_cannon_F
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] Badger APC";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"BNA_KC40mm_CTWS",
					"BNA_KC_Coax"
				};
				magazines[] = 
				{
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag"
				};
			};
		};
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Body.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Addons.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Tows.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Camonet_Desert.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_CageSand.paa"
		};
		soundEngineOnInt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCStartup",
			0.79432821,
			1
		};
		soundEngineOffInt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCShutdown.wss",
			0.79432821,
			1
		};
		soundEngineOnExt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCStartup",
			1,
			1,
			100
		};
		soundEngineOffExt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCShutdown.wss",
			1,
			1,
			100
		};
		class Sounds
		{
			soundSetsInt[] = 
			{
				"APC_Wheeled_01_Engine_RPM0_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_INT_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet",
				"APC_Wheeled_01_Rattling_INT_SoundSet",
				"APC_Wheeled_01_Stress_INT_SoundSet",
				"APC_Wheeled_01_Rain_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"
			};
			soundSetsExt[] = 
			{
				"BNA_KC_APC_Engine_RPM0_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM1_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM2_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM3_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM4_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM5_EXT_SoundSet",
				"APC_Wheeled_01_Rattling_EXT_SoundSet",
				"APC_Wheeled_01_Stress_EXT_SoundSet",
				"APC_Wheeled_01_Rain_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"
			};
		};
	};

    class 3as_saber_m1;
    class BNA_KC_Saber_M1: 3as_saber_m1
	{
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] TX-130 Saber Tank";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Vehicles\Armored\Data\Saber\BNA_KC_Saber_Body.paa",
			"BNA_KC_Vehicles\Armored\Data\Saber\BNA_KC_Saber_Weapons.paa"
		};
	};

    class 3as_ATTE_base;
    class BNA_KC_ATTE: 3as_ATTE_base
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] AT-TE";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Vehicles\Armored\Data\ATTE\BNA_KC_ATTE_Body.paa",
			"3as\3as_atte\data\atte_chasis_co.paa",
			"BNA_KC_Vehicles\Armored\Data\ATTE\BNA_KC_ATTE_Cockpit.paa",
			"BNA_KC_Vehicles\Armored\Data\ATTE\BNA_KC_ATTE_Turrets.paa",
			"3as\3as_atte\data\atte_underpiping_co.paa",
			"3as\3as_atte\data\atte_middleleg_co.paa"
		};
	};
};


class CfgEditorSubcategories
{
	class BNA_KC_SubCat_VArmored
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicles - Armored";
	};
};