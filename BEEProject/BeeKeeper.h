#pragma once
#include "BeeHive.h"
class BeeKeeper
{
public:
	BeeKeeper() {};
	int getPlus(int numOfWorkers, int days);
	int getMinus(BeeHive hive, int days);
};

