#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

enum WeaponType
{
	Bow,
	Wand,
	Sword,
	Dagger
};

class Weapon : public Item
{
private:
	WeaponType type;
	int damage, durability;
};

#endif