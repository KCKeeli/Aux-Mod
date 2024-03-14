#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a unit can enable their vehicle's shield.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 *
 * Return Value:
 * True if shield can be activated, otherwise false <BOOL>
 *
 * Example:
 * ace_player call BNA_KC_shields_fnc_canActivate;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
private ["_vehicle", "_hasShield"];
TRACE_1("fnc_canActivate",_unit);

_vehicle = objectParent _unit;
_hasShield = getNumber (configOf _vehicle >> QGVAR(hasShield));

if (isNull _vehicle or
    {!alive _vehicle} or
    {_unit isNotEqualTo (currentPilot _vehicle)} or
    {_hasShield isEqualTo FALSE} or
    {_vehicle getVariable [QGVAR(isActive), false]} or
    {_vehicle getVariable [QGVAR(isRecharging), false]}
) exitWith {false};

true;