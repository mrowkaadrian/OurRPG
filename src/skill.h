#ifndef SKILL_H
#define SKILL_H

#include <string>

enum Element
{
	Fire,
	Water,
	Wind,
	Thunder,
	Earth
};

class Skill
{
private:
	std::string name;
	int level, mana_cost;
public:
	Skill();
};

#endif