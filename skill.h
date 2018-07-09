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
	virtual Skill();
};
