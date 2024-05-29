#pragma once
#include "WorkingBee.h"
class WorkerBee :
	public WorkingBee
{
private:
	string TypeOfCollecting;
	int Distance;

public:
	WorkerBee() : WorkingBee(), TypeOfCollecting(""), Distance(0) {};
	WorkerBee(int size, int age, int lifeInDays, string TypeOfCollecting, int Distance) :
		WorkingBee(size, age, lifeInDays), TypeOfCollecting(TypeOfCollecting), Distance(Distance) {
		this->VolOfUsedHoney = Distance * 4;
	};
	string getTypeOfCollecting();
	int getDistance();
	void setTypeOfCollecting(int TypeOfCollecting);
	void setDistance(int Distance);
	string getInfo() override;
};

