#include <iostream>
#include <string>
#include <vector>

class Player {
private:
	std::string name;
	Gender gender;
	Race player_race;
	Profession player_prof;
	int cur_action_points;
	int max_action_points;
	int level;
	long int experience;
	std::vector<Item> backpack;
	Stats * player_stats;
	Equipment * inventory;
	std::vector<Mob> army;
	std::vector<Skill> skills;

	int posX;
	int posY;

public:

	Player();
	Player(std::string, Gender, Race, Profession);

	void move(Direction);

	void showBackpack();
	void showEquipment();
	void showSkills();
	void showArmy();
};

