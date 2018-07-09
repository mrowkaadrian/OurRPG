#include "item.h"

enum EqType
{
	Weapon,
	Helmet,
	Chestplate,
	Shield,
	Boots,
	Legs,
	Necklace,
	Ring,
	Earrings
}

class Armor : public Item
{
private:
	EqType type;
	int defence;
//	*additional_stats;
};
