/*--------------------------
Author: Matas Kimtys
-------------------------*/
#pragma once
#include "Weapon.h"
#include <string>
class Player
{
public:
	std::string _player_name = "";
	int _player_level = 0;
	int _player_exp = 0;
	int _player_exp_max = 0;
	int _player_stamina = 0;
	int _player_health = 0;
	int _player_health_max = 0;
	int _player_mana = 0;
	int _player_mana_max = 0;
	int _player_sword_mastery = 0;
	int _player_club_mastery = 0;
	int _player_axe_mastery = 0;
	int _player_magic_mastery = 0;
	int _player_ranged_mastery = 0;
	int _player_fist_mastery = 0;
	int _player_silver_coins = 0;
	std::string _player_special_attack = "";
	Weapon _equipped_weapon;
};

