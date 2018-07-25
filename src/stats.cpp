#include <iostream>

#include "stats.h"

void Stats::addStat(int number)
{
	if (stat_points > 0)
	{
		--stat_points;
		switch (number)
		{
		case 1:
			++strength;
			break;
		case 2:
			++vitality;
			break;
		case 3:
			++intelligence;
			break;
		case 4:
			++agility;
			break;
		default:
			std::cout << "Something went wrong!\n";
			++stat_points;
		}
	}
}
