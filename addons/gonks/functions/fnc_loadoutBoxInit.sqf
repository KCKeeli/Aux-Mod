#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Init function for a loadout box
 *
 * Arguments:
 * 0: The object to add the actions to <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _box call BNA_KC_gonks_fnc_loadoutBoxInit;
 *
 * Public: No
 */

params [
    ["_object", objNull, [objNull]]
];
TRACE_1("fnc_loadoutBoxInit",_object);

if (isNull _object) exitWith {};

{
    private ["_detachment", "_label", "_order"];
    _detachment = _x;
    _label = getText (configFile >> QGVAR(loadouts) >> _detachment >> "label");
    _order = getNumber (configFile >> QGVAR(loadouts) >> _detachment >> "order");

    [
        _object,
        format ["<t color='#FFFFFF'>%1</t>", _x], {
            params ["_target", "_caller", "_actionId", "_detachment"];
            GVAR(loadoutPage) = LOADOUTMENU_PAGE_SQUAD;
            GVAR(loadoutTab) = _detachment;
        },
        _detachment,
        QUOTE(GVAR(loadoutPage) == MENU_PAGE_HOME),
        100 - _order
    ] call FUNC(addAction);

    {
        _squadType = _x;
        systemChat format ["Squad Type: %1", _squadType];
        private _label = getText (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> "label");
        private _order = getNumber (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> "order");

        [
            _object,
            format ["<t color='#FFFFFF'>%1</t>", _label], {
                params ["", "", "", "_squadType"];
                GVAR(loadoutPage) = LOADOUTMENU_PAGE_ROLE;
                GVAR(loadoutSquadType) = _squadType;
            },
            _squadType,
            format [QUOTE(GVAR(loadoutPage) == LOADOUTMENU_PAGE_SQUAD and {GVAR(loadoutTab) == '%1'}), _detachment],
            100 - _order
        ] call FUNC(addAction);

        {
            private _label = getText (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> _x >> "label");
            private _order = getNumber (configFile >> QGVAR(loadouts) >> _detachment >> _squadType >> _x >> "order");
            [
                _object,
                format ["<t color='#FFFFFF'>%1</t>", _label], {
                    params ["", "", "", "_arguments"];
                    _arguments call FUNC(applyLoadout);
                    GVAR(loadoutPage) = LOADOUTMENU_PAGE_WEAPONS;
                },
                [_detachment, _squadType, _x],
                format [QUOTE(GVAR(loadoutPage) == LOADOUTMENU_PAGE_ROLE and {GVAR(loadoutTab) == '%1'}), _detachment],
                100 - _order
            ] call FUNC(addAction);
        } forEach _y;
    } forEach _y;
} forEach GVAR(loadouts);

// {
//     _object addAction
//     [
//         format ["<t color='#FFFFFF'>%1</t>", _x],
//         {
//             params ["_target", "_caller", "_actionId", "_arguments"];
//             _arguments params ["_weapon"];
//             _weapon call FUNC(giveWeapon);
//             ace_player setVariable [QGVAR(LoadoutMenu_Page), nil];
//         },
//         [_x],
//         (count LOADOUTS_WEAPONS_LIST) - _forEachIndex,
//         false,
//         false,
//         "",
//         format [QUOTE(%1 call FUNC(canShowWeaponOption)), str _x],
//         3
//     ];
// } forEach LOADOUTS_WEAPONS_LIST;

[ _object, "<t font='RobotoCondensedBold' color='#FFFFFF'>Home</t>",{
    GVAR(loadoutPage) = MENU_PAGE_HOME;
    GVAR(loadoutTab) = "";
    GVAR(loadoutSquadType) = "";
}] call FUNC(addAction);

nil;