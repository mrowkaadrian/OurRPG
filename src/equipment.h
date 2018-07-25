#ifndef EQUIPMENT_H
#define EQUIPMENT_H

class Armor;
class Weapon;
class Jewellery;

class Equipment {
private:
	Weapon *weapon;
	Armor *helmet;
	Armor *chest;
	Armor *shield;
	Armor *boots;
	Armor *legs;
	Jewellery *necklace;
	Jewellery *ring;
public:
	Equipment();
	bool wearWeapon();
	bool wearHelmet();
	bool wearChest();
	bool wearShield();
	bool wearBoots();
	bool wearLegs();
	bool wearNecklace();
	bool wearRing();

	int calculateDefence();
};

#endif