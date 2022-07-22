/*--------------------------
Author: Matas Kimtys
-------------------------*/
#pragma once
#include <string>
class Monster
{
public:
    std::string _monster_name = ""; //0
    int _monster_level = 0; //1
    int _monster_atk_min = 0; //2
    int _monster_atk_max = 0; //3
    int _monster_health = 0; //4 
    int _monster_evasion = 0; //5
    int _monster_evasion_rate = 0; //6
    int _monster_defence = 0; //7 
    int _monster_damage_reduction_rate = 0; //8
    int _monster_experience_reward = 0;
    int _monster_item_drop_chance = 0;
    int _monster_accuracy = 0;
};

