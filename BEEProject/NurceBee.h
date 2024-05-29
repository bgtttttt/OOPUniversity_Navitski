#pragma once
#include "WorkingBee.h"
class NurceBee :
	public WorkingBee
{
private:
	int NumOfMilkDay;
public:
	NurceBee() : WorkingBee(), NumOfMilkDay(0) {};
	NurceBee(int size, int age, int lifeInDays, int NumOfMilkDay) :
		WorkingBee(size, age, lifeInDays), NumOfMilkDay(NumOfMilkDay) {
		this->VolOfUsedHoney = NumOfMilkDay * 5;
	};

	int getNumOfMilkDay();
	void setNumOfMilkDay(int lifeInDays);
	string getInfo() override;
};

