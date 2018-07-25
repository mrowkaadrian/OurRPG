#ifndef STATS_H
#define STATS_H

class Stats
{
private:
	int stat_points;
	int strength, vitality, intelligence, agility;
// -----------------------------------
protected:
	int health, mana, base_dmg, base_def, dodge;
public:
	void addStat(int);
};

#endif