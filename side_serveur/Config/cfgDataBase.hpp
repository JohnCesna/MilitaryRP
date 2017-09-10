/*
    File: cfgDataBase.hpp
    Author: Brutalzic
    Description: config the database
*/

class CfgDatabase
{
	database = "notreDB";// database = "name of your data"
	autosave = true;// true = active autosave, false = manual save.
	saveDelay = 10;// Time in minutes for autosave
	lock = false;

	class Player
	{
		table = "users";
		row = "user_uid";
		key = "getplayeruid _this";
		condition = "getplayeruid _this != """"";
	};
};
