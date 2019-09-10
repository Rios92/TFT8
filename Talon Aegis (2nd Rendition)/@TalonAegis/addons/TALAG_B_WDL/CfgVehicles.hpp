// Copy this part to your CfgVehicles config. Switch the Arma 3 vanilla boxes for CUP ones if necessary (replace all instances).
    class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_East_Uniforms_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class TALAG_B_WDL_AmmoBox : Box_East_Ammo_F {
        author = WOC Rios [TFT8];
        displayName = Talon Aegis (WDL) Ammo Box;
        class TransportMagazines {
            mag_xx(Chemlight_blue,50);
            mag_xx(HandGrenade,50);
            mag_xx(SmokeShell,50);
            mag_xx(ACE_M14,50);
            mag_xx(SmokeShellPurple,50);
            mag_xx(MiniGrenade,50);
            mag_xx(CUP_30Rnd_556x45_G36_wdl,50);
            mag_xx(Titan_AA,50);
            mag_xx(CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M,50);
            mag_xx(RPG7_F,50);
            mag_xx(Titan_AT,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag_wdl,50);
            mag_xx(rhsusf_8Rnd_00Buck,50);
            mag_xx(hlc_30Rnd_9x19_B_MP5,50);
            mag_xx(AMP_Breaching_Charge_Mag,50);
            mag_xx(50Rnd_570x28_SMG_03,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(SatchelCharge_Remote_Mag,50);
            mag_xx(20Rnd_762x51_Mag,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(1Rnd_HE_Grenade_shell,50);
            mag_xx(1Rnd_SmokeRed_Grenade_shell,50);
            mag_xx(1Rnd_SmokeGreen_Grenade_shell,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(10Rnd_338_Mag,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
            mag_xx(CUP_10Rnd_127x99_M107,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_FMJ,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_AP,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class TALAG_B_WDL_WeaponsBox : Box_East_Wps_F {
        author = WOC Rios [TFT8];
        displayName = Talon Aegis (WDL) Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_556x45_G36_wdl,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag_wdl,50);
            mag_xx(rhsusf_8Rnd_00Buck,50);
            mag_xx(hlc_30Rnd_9x19_B_MP5,50);
            mag_xx(50Rnd_570x28_SMG_03,50);
            mag_xx(20Rnd_762x51_Mag,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(1Rnd_HE_Grenade_shell,50);
            mag_xx(10Rnd_338_Mag,50);
            mag_xx(CUP_10Rnd_127x99_M107,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
            mag_xx(CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_AP,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_G36C_VFG_wdl,10);
            weap_xx(CUP_arifle_MG36_wdl,10);
            weap_xx(rhs_weap_M590_8RD,10);
            weap_xx(hlc_smg_mp5k,10);
            weap_xx(SMG_03C_black,10);
            weap_xx(srifle_DMR_03_woodland_F,10);
            weap_xx(hgun_Rook40_F,10);
            weap_xx(rhs_weap_m40a5_wd,10);
            weap_xx(CUP_hgun_Glock17,10);
            weap_xx(CUP_arifle_G36A_AG36_RIS_wdl,10);
            weap_xx(srifle_DMR_02_camo_F,10);
            weap_xx(CUP_arifle_G36K_RIS_wdl,10);
            weap_xx(CUP_srifle_M107_Base,10);
            weap_xx(CUP_hgun_MicroUzi,10);
            weap_xx(CUP_lmg_MG3,10);
            weap_xx(rhsusf_weap_MP7A2,10);
            weap_xx(CUP_arifle_G36K_VFG_wdl,10);
            weap_xx(CUP_arifle_G36A_RIS_wdl,10);
        };
        class TransportItems {
            item_xx(CUP_muzzle_mfsup_Flashhider_556x45_OD,10);
            item_xx(acc_pointer_IR,10);
            item_xx(optic_AMS,10);
            item_xx(bipod_01_F_khk,10);
            item_xx(rhsusf_acc_LEUPOLDMK4_wd,10);
            item_xx(rhsusf_acc_harris_swivel,10);
            item_xx(CUP_muzzle_snds_M9,10);
            item_xx(CUP_acc_Glock17_Flashlight,10);
            item_xx(ACE_muzzle_mzls_338,10);
            item_xx(optic_LRPS,10);
            item_xx(bipod_01_F_blk,10);
            item_xx(optic_MRCO,10);
            item_xx(CUP_Bipod_G36_wood,10);
            item_xx(rhsusf_acc_rotex_mp7,10);
            item_xx(rhsusf_acc_RM05,10);
            item_xx(rhsusf_acc_grip2,10);
            item_xx(CUP_muzzle_snds_M16_camo,10);
            item_xx(CUP_optic_CompM2_low_OD,10);
            item_xx(muzzle_snds_L,10);
        };
    };
    class TALAG_B_WDL_LaunchersBox : Box_East_WpsLaunch_F {
        author = WOC Rios [TFT8];
        displayName = Talon Aegis (WDL) Launchers Box;
        class TransportMagazines {
            mag_xx(Titan_AA,5);
            mag_xx(RPG7_F,5);
            mag_xx(Titan_AT,5);
        };
        class TransportWeapons {
            weap_xx(launch_B_Titan_tna_F,5);
            weap_xx(launch_RPG7_F,5);
            weap_xx(launch_I_Titan_short_F,5);
            weap_xx(CUP_launch_M136,5);
        };
        class TransportItems {
        };
    };
    class TALAG_B_WDL_UniformBox : Box_East_Uniforms_F {
        author = WOC Rios [TFT8];
        displayName = Talon Aegis (WDL) Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_U_FieldUniform_M81,15);
            item_xx(U_B_FullGhillie_lsh,15);
            item_xx(U_I_pilotCoveralls,15);
        };
    };
    class TALAG_B_WDL_SupportBox : Box_East_Support_F {
        author = WOC Rios [TFT8];
        displayName = Talon Aegis (WDL) Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(CFP_ITV_Rifleman,10);
            item_xx(CFP_Basic_Helmet_M81,10);
            item_xx(CFP_Kitbag_M81,10);
            item_xx(CUP_NVG_HMNVS,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CFP_AssaultPack_M81,10);
            item_xx(CFP_ITV_Empty,10);
            item_xx(H_Tank_black_F,10);
            item_xx(SP_ProTecHelmet_Green,10);
            item_xx(CFP_ITV_Grenadier,10);
            item_xx(H_CrewHelmetHeli_B,10);
            item_xx(CUP_NVG_GPNVG_black,10);
            item_xx(H_PilotHelmetHeli_B,10);
            item_xx(CUP_NVG_PVS14,10);
            item_xx(Laserdesignator_01_khk_F,10);
            item_xx(CFP_PASGTHelmet_M811,10);
            item_xx(CFP_PatrolCap_M81,10);
            item_xx(G_Aviator,10);
            item_xx(SP_Kneepads_Green,10);
            item_xx(B_Parachute,10);
            item_xx(H_PilotHelmetFighter_O,10);
            item_xx(TFAR_bussole,10);
            item_xx(CFP_Modular1_M81,10);
            item_xx(CFP_BoonieHat_M81,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
        };
    };
    class TALAG_B_WDL_SupplyBox : O_SupplyCrate_F {
        author = WOC Rios [TFT8];
        displayName = Talon Aegis (WDL) Supply Box;
        class TransportMagazines {
            mag_xx(Chemlight_blue,50);
            mag_xx(HandGrenade,50);
            mag_xx(SmokeShell,50);
            mag_xx(ACE_M14,50);
            mag_xx(SmokeShellPurple,50);
            mag_xx(MiniGrenade,50);
            mag_xx(CUP_30Rnd_556x45_G36_wdl,50);
            mag_xx(Titan_AA,50);
            mag_xx(CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M,50);
            mag_xx(RPG7_F,50);
            mag_xx(Titan_AT,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag_wdl,50);
            mag_xx(rhsusf_8Rnd_00Buck,50);
            mag_xx(hlc_30Rnd_9x19_B_MP5,50);
            mag_xx(AMP_Breaching_Charge_Mag,50);
            mag_xx(50Rnd_570x28_SMG_03,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(SatchelCharge_Remote_Mag,50);
            mag_xx(20Rnd_762x51_Mag,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(1Rnd_HE_Grenade_shell,50);
            mag_xx(1Rnd_SmokeRed_Grenade_shell,50);
            mag_xx(1Rnd_SmokeGreen_Grenade_shell,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(10Rnd_338_Mag,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
            mag_xx(CUP_10Rnd_127x99_M107,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_FMJ,50);
            mag_xx(rhsusf_mag_40Rnd_46x30_AP,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_G36C_VFG_wdl,10);
            weap_xx(CUP_arifle_MG36_wdl,10);
            weap_xx(rhs_weap_M590_8RD,10);
            weap_xx(hlc_smg_mp5k,10);
            weap_xx(SMG_03C_black,10);
            weap_xx(srifle_DMR_03_woodland_F,10);
            weap_xx(hgun_Rook40_F,10);
            weap_xx(rhs_weap_m40a5_wd,10);
            weap_xx(CUP_hgun_Glock17,10);
            weap_xx(CUP_arifle_G36A_AG36_RIS_wdl,10);
            weap_xx(srifle_DMR_02_camo_F,10);
            weap_xx(CUP_arifle_G36K_RIS_wdl,10);
            weap_xx(CUP_srifle_M107_Base,10);
            weap_xx(CUP_hgun_MicroUzi,10);
            weap_xx(CUP_lmg_MG3,10);
            weap_xx(rhsusf_weap_MP7A2,10);
            weap_xx(CUP_arifle_G36K_VFG_wdl,10);
            weap_xx(CUP_arifle_G36A_RIS_wdl,10);
            weap_xx(launch_B_Titan_tna_F,10);
            weap_xx(launch_RPG7_F,10);
            weap_xx(launch_I_Titan_short_F,10);
            weap_xx(CUP_launch_M136,10);
        };
        class TransportItems {
            item_xx(CUP_muzzle_mfsup_Flashhider_556x45_OD,10);
            item_xx(acc_pointer_IR,10);
            item_xx(optic_AMS,10);
            item_xx(bipod_01_F_khk,10);
            item_xx(rhsusf_acc_LEUPOLDMK4_wd,10);
            item_xx(rhsusf_acc_harris_swivel,10);
            item_xx(CUP_muzzle_snds_M9,10);
            item_xx(CUP_acc_Glock17_Flashlight,10);
            item_xx(ACE_muzzle_mzls_338,10);
            item_xx(optic_LRPS,10);
            item_xx(bipod_01_F_blk,10);
            item_xx(optic_MRCO,10);
            item_xx(CUP_Bipod_G36_wood,10);
            item_xx(rhsusf_acc_rotex_mp7,10);
            item_xx(rhsusf_acc_RM05,10);
            item_xx(rhsusf_acc_grip2,10);
            item_xx(CUP_muzzle_snds_M16_camo,10);
            item_xx(CUP_optic_CompM2_low_OD,10);
            item_xx(muzzle_snds_L,10);
            item_xx(Binocular,10);
            item_xx(CFP_ITV_Rifleman,10);
            item_xx(CFP_Basic_Helmet_M81,10);
            item_xx(CFP_Kitbag_M81,10);
            item_xx(CUP_NVG_HMNVS,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CFP_AssaultPack_M81,10);
            item_xx(CFP_ITV_Empty,10);
            item_xx(H_Tank_black_F,10);
            item_xx(SP_ProTecHelmet_Green,10);
            item_xx(CFP_ITV_Grenadier,10);
            item_xx(H_CrewHelmetHeli_B,10);
            item_xx(CUP_NVG_GPNVG_black,10);
            item_xx(H_PilotHelmetHeli_B,10);
            item_xx(CUP_NVG_PVS14,10);
            item_xx(Laserdesignator_01_khk_F,10);
            item_xx(CFP_PASGTHelmet_M811,10);
            item_xx(CFP_PatrolCap_M81,10);
            item_xx(G_Aviator,10);
            item_xx(SP_Kneepads_Green,10);
            item_xx(B_Parachute,10);
            item_xx(H_PilotHelmetFighter_O,10);
            item_xx(TFAR_bussole,10);
            item_xx(CFP_Modular1_M81,10);
            item_xx(CFP_BoonieHat_M81,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CFP_U_FieldUniform_M81,10);
            item_xx(U_B_FullGhillie_lsh,10);
            item_xx(U_I_pilotCoveralls,10);
        };
    };

// Copy this part to ALiVE logistics static data
[ALIVE_factionDefaultSupplies, "TALAG_B_WDL", ["TALAG_B_WDL_AmmoBox","TALAG_B_WDL_WeaponsBox","TALAG_B_WDL_LaunchersBox","TALAG_B_WDL_UniformBox","TALAG_B_WDL_SupportBox","TALAG_B_WDL_SupplyBox"]] call ALIVE_fnc_hashSet;