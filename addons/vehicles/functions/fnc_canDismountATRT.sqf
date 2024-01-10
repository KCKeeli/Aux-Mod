#include "..\script_component.hpp"
/*
 * Author: 3AS
 * Edited by DartRuffian
 * Determines whether a unit can dismount an AT-RT
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 * 1: The unit attempting to dismount the AT-RT <OBJECT>
 *
 * Return Value:
 * Whether the given unit can dismount the AT-RT <BOOL>
 *
 * Examples:
 * [_atrt, ace_player] call FUNC(canDisountATRT);
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
private [];
TRACE_2("fnc_canDismountATRT",_atrt,_unit);

if (_unit isEqualTo (_atrt getVariable [QGVAR(rider), objNull])) exitWith {true};

false;