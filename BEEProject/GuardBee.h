#pragma once
#include "WorkingBee.h"
class GuardBee :
	public WorkingBee
{
private:
	int NumOfDefAttacks;
public:
	GuardBee() : WorkingBee(), NumOfDefAttacks(0) {};
	GuardBee(int size, int age, int lifeInDays, int NumOfDefAttacks) :
		WorkingBee(size, age, lifeInDays), NumOfDefAttacks(NumOfDefAttacks) {
		this->VolOfUsedHoney = NumOfDefAttacks * 2;
	};
	int getNumOfDefAttacks();
	void setNumOfDefAttacks(int Distance);
	string getInfo() override;
};

