class CfgVehicles
{
    class Car_F;
    class Wheeled_Apc_F: Car_F
    {
        class HitPoints;
    };
    class 3AS_Jug_base_F: Wheeled_Apc_F
    {
        // class HitPoints: HitPoints
        // {
        //     class HitBody;
        //     class HitHull;
        // };
        class ACE_SelfActions;
        class UserActions
        {
            class Crow_Nest_Up;
            class Crow_Nest_Down;
            class Open_Rockets;
            class Close_Rockets;
        };
    };
    class 3AS_B_Jug_01_base_F: 3AS_Jug_base_F {};
    class 3AS_Jug: 3AS_B_Jug_01_base_F {};
    class CLASS(Juggernaut): 3AS_Jug
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Juggernaut);

        displayName = "HAVw A6 Juggernaut";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 20;

        weapons[] =
        {
            QCLASS(Horn_Juggernaut),
            QCLASS(Alarm_Juggernaut)
        };

        // Look at https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection for info on what each value does
        // class HitPoints: HitPoints
        // {
        //     class HitBody: HitBody
        //     {
        //         armor = 2;
        //         explosionShielding = 0.15;
        //     };
        //     class HitHull: HitHull
        //     {
        //         armor = 2;
        //         explosionShielding = 0.85;
        //     };
        // };

        class ACE_SelfActions: ACE_SelfActions
        {
            AI_CREW_SPAWNER;
        };

        class UserActions: UserActions
        {
            class Crow_Nest_Up: Crow_Nest_Up
            {
                condition = QUOTE(this animationSourcePhase 'crownest' == 0 and alive this and ace_player == this turretUnit [4]);
            };
            class Crow_Nest_Down: Crow_Nest_Down
            {
                condition = QUOTE(this animationSourcePhase 'crownest' == 5 and alive this and ace_player == this turretUnit [4]);
            };
            class Open_Rockets: Open_Rockets
            {
                condition = QUOTE(this animationSourcePhase 'rocket_move' == 1  and alive this and ace_player == this turretUnit [3]);
            };
            class Close_Rockets: Close_Rockets
            {
                condition = QUOTE(this animationSourcePhase 'rocket_move' == 0 and alive this and ace_player == this turretUnit [3]);
            };
        };

        INVENTORY_VEHICLE_BASE(5);
    };
};