#ifndef JEWELLERY_H
#define JEWELLERY_H

#include "item.h"

enum JewelleryType
{
	Necklace,
	Ring,
	Earrings
};

class Jewellery : public Item
{
private:
	JewelleryType type;
//	*additional_stats;
};

#endif