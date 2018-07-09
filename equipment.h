#include "weapon.h"
#include "armor.h"
#include "jewellery.h"

class Equipment {
private:
	Weapon *weapon;
	Armor *helmet;
	Armor *chestplate;
	Armor *shield;
	Armor *boots;
	Armor *legs;
	Jewellery *necklace;
	Jewellery *ring;
public:
	Equipment();
	bool wearWeapon();
	bool wearHelmet();
	bool wearChestplate();
	bool wearShield();
	bool wearBoots();
	bool wearLegs();
	bool wearNecklace();
	bool wearRing();

	int calculateDefence();
};
