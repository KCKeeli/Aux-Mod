class ACEX_Fortify_Presets {
    class GVAR(Disabled) {
        displayName = "Disabled";
    };

    class GVAR(All) {
        displayName = "[KC] All Presets";
        presets[] = {
            QGVAR(Common),
            QGVAR(FOB)
        };
    };

    class GVAR(Common) {
        displayName = "[KC] Common";
        objects[] = {
            // Hesco Objects
            {"Land_lsb_fob_hBarrier_1", 5},                   // Block
            {"Land_lsb_fob_hBarrier_3", 10},                  // Barrier (3 Block)
            {"Land_lsb_fob_hBarrierBig_4", 15},               // Large Hesco Wall
            {"Land_lsb_fob_hBarrierWall_exvertedCorner", 15}, // Large Hesco Wall Corner
            {"Land_lsb_fob_hBarrier_ramp", 5},                // Hesco Ramp, ~2m

            // Sandbags
            {"Land_BagFence_Long_F", 5},  // Straight
            {"Land_BagFence_Round_F", 5}, // Round

            // Other
            {"Land_PierLadder_F", 10}, // Ladder
            {"Land_Plank_01_8m_F", 10} // Plank, 8m
        };
    };

    class GVAR(FOB) {
        displayName = "[KC] FOB Building";
        objects[] = {
            {"Land_lsb_fob_hBarrier_tower", 15},
            {"3AS_Short_Wall_Bunker", 15},
            {"Land_OPTRE_watchtower_urban", 15},
            {"3AS_Barricade_2_C_Prop", 10},
            {"3AS_Barricade_Prop", 10},
            {"3AS_FOB_Hangar_Prop", 25},
            {"Land_OPTRE_hard_tent_urban", 20},
            {"Land_OPTRE_medical_tent_gry", 25},
            {"3AS_Pad_GAR_Prop", 15},
            {"fob_light_gar_tall", 5},
            {"light_s_cis", 5},
            {"442_data_pad_pinup_prinz2", 5}
        };
    };
};