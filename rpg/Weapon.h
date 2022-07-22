/*--------------------------
Author: Matas Kimtys
-------------------------*/
#pragma once
#include <string>
class Weapon
{
public:
	std::string _weapon_name = "";
	std::string _weapon_description = "";
	int _weapon_physical_atk_min = 0;
	int _weapon_physical_atk_max = 0;
	int _weapon_magic_atk_min = 0;
	int _weapon_magic_atk_max = 0;
	int _weapon_durability = 100;
	int _weapon_accuracy = 70;
	int _weapon_enchancement_level = 0;
	std::string _weapon_material = "";

};

