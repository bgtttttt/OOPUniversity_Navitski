#pragma once
#include "Bee.h"
class WorkingBee :
	public Bee
{
private:
	int lifeInDays;
public:
	WorkingBee() : Bee(), lifeInDays(0) {};
	WorkingBee(int size, int age, int lifeInDays) :
		Bee(size, age), lifeInDays(lifeInDays) {
};

	int getLifeInDays();
	void setLifeinDays(int lifeInDays);
	string getInfo() override;
};

