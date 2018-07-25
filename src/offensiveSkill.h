#ifndef OFFENSIVESKILL_H
#define OFFENSIVESKILL_H

#include "skill.h"

class OffensiveSkill : public Skill
{
private:
	Element skill_element;
	int damage;
//	*additional_effect;
};

#endif