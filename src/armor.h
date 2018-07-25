#ifndef ARMOR_H
#define ARMOR_H

#include "item.h"

enum EqType
{
	Weapon,
	Helmet,
	Chest,
	Shield,
	Boots,
	Legs,
	Jewellery
};

class Armor : public Item
{
private:
	EqType type;
	int defence;
//	*additional_stats;
};

#endif