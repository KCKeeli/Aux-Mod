#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is mostly healed. Not every stat is checked, just common variables such as open wounds, blood volume, etc.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 *
 * Return Value:
 * Whether the unit is mostly healed <BOOL>
 *
 * Examples:
 * player call BNA_KC_medical_fnc_isFullyHealed;
 */


params [
    ["_unit", objNull, [objNull]]
];

if (
    isNull _unit or {
        !alive _unit or
        !(typeOf _unit isKindOf "CAManbase") or
        count (_unit getVariable ["ace_medical_openWounds", []]) > 0 or
        (_unit getVariable ["ace_medical_bloodVolume", 6]) < 6 or
        _unit getVariable ["ace_medical_inCardiacArrest", false] or
        _unit getVariable ["ace_medical_pain", 0] > 0
    }
) exitWith {false};

true;