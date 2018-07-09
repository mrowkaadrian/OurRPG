#include "item.h"

enum PotionType
{
	Health,
	Mana,
	Stat
};

class Potion : public Item
{
	PotionType type;
	int regen_value;
};
