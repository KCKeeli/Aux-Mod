/*
 * Author: DartRuffian
 * Returns True/False whether a given unit has a Keeli Company Jetpack.
 *
 * Arguments:
 * 0: The unit to check <Object>
 *
 * Return Value:
 * None
 *
 * Example:
 * player call BNAKC_fnc_HasJetpack; // Returns true if BNA_KC_Jet_IsJetpack is set to 1 in the unit's backpack
 */

#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
params ["_unit"];

private _backpack = backpack _unit;	
private _isJetpack = GET_NUMBER(configFile >> "CfgVehicles" >> _backpack >> "BNA_KC_Jet_IsJetpack", 0);

[false, true] select _isJetpack;