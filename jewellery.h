#include "item.h"

enum JeweType
{
	Necklace,
	Ring,
	Earrings
};

class Jewellery : public Item
{
private:
	JeweType type;
//	*additional_stats;
};
