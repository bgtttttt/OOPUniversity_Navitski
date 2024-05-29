#pragma once
#include "WorkingBee.h"
class Drone :
	public WorkingBee
{
public:
	Drone() : WorkingBee() {};
	Drone(int size, int age, int lifeInDays) : WorkingBee(size, age, lifeInDays) {
		this->VolOfUsedHoney = 3 * size;
	};
};

