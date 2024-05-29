#pragma once
#include "WorkingBee.h"
class ScoutBee :
	public WorkingBee
{
private:
	int Distance;
public:
	ScoutBee() : WorkingBee(), Distance(0) {};
	ScoutBee(int size, int age, int lifeInDays, int Distance) :
		WorkingBee(size, age, lifeInDays), Distance(Distance) {
		this->VolOfUsedHoney = Distance * 4;
	};
	int getDistance();
	void setDistance(int Distance);
	string getInfo() override;
};

