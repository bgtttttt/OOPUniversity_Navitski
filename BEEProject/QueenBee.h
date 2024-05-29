#pragma once
#include "Bee.h"
class QueenBee :
	public Bee
{
private:
	int NumOfEggsDay;
public:
	QueenBee() : Bee(), NumOfEggsDay(0) {};
	QueenBee(int size, int age, int NumOfEggsDay) :
		Bee(size, age), NumOfEggsDay(NumOfEggsDay) {
		this->VolOfUsedHoney += NumOfEggsDay * 5;
	};

	int getNumOfEggsDay();
	void setNumOfEggsDay(int NumOfEggsDay);
	string getInfo() override;
};

