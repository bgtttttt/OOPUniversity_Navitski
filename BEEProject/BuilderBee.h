#pragma once
#include "WorkingBee.h"
class BuilderBee :
	public WorkingBee
{
private:
	int AmOfWork;
public:
	BuilderBee() : WorkingBee() {};
	BuilderBee(int size, int age, int lifeInDays, int NumOfDefAttacks, int AmOfWork) :
		WorkingBee(size, age, lifeInDays), AmOfWork(AmOfWork) {
		this->VolOfUsedHoney = AmOfWork * 1;
	};
	int getAmOfWork();
	void setAmOfWork(int Distance);
	string getInfo() override;
};

