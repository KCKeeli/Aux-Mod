/*
 * Author: DartRuffian
 * Returns True/False if a unit is able to use a jetpack
 *
 * Arguments:
 * 0: The unit to check <Object>
 *
 * Return Value:
 * Boolean - True if unit can use a jetpack
 *
 * Example:
 * ace_player call BNAKC_Jetpacks_fnc_canUseJetpack; // Returns true if unit can jetpack
 */


params ["_unit"];

private _jetpack = backpackContainer _unit;
private _maxFuel = [_jetpack] call BNAKC_Jetpacks_fnc_getJetpackFuel;

private _canJetpack =
(
    _unit call BNAKC_Jetpacks_fnc_hasJetpack and       // True if unit is wearing a KC jetpack
    _jetpack getVariable ["BNA_KC_Jet_currentFuel", _maxFuel] > 0 and // True if unit has any amount of fuel in a jetpack
    isNull (objectParent _unit) and           // True if unit is not in a vehicle, faster than vehicle _unit
    lifeState _unit != "INCAPACITATED" and    // True if unit is uncon
    !(surfaceIsWater getPos _unit and {((getPosASLW _unit) select 2) < 0.2}) and // True if unit is not in water
    alive _unit and                           // True if unit is alive
    [_unit] call ace_common_fnc_isAwake       // True if unit is not dead and not unconcious
);

_canJetpack;