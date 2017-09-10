/*
	File: init.sqf
	Author: John Doe, Kira, Brutalzic
	Description: initialisation du server
*/


// Connection base de donnes
[] call BDC_fnc_connectExtdb;


//initialisation eventhandler
addMissionEventHandler ["PlayerConnected",{_this call PLS_fnc_playerConnected; false;}];
addMissionEventHandler ["HandleDisconnect",{_this call PLS_fnc_playerDisconnected; false;}];