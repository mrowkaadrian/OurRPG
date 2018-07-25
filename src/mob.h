#ifndef MOB_H
#define MOB_H

#include <iostream>

#include "skill.h"

class Mob
{
private:
	std::string name;
	Stats * mob_stats;
	int base_xp;
	std::vector<Skill> skills;
	std::vector<Item> possible_loot;
public:
	Mob();
	Mob(std::string, Stats, int);
};

#endif