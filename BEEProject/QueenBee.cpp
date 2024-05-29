#include "QueenBee.h"

int QueenBee::getNumOfEggsDay() {
	return NumOfEggsDay;
};
void QueenBee::setNumOfEggsDay(int NumOfEggsDay) {
	if (NumOfEggsDay > 0) {
		this->NumOfEggsDay = NumOfEggsDay;
	}
};
string QueenBee::getInfo() {
	string s = "";
	s = "Queen " + Bee::getInfo() + ", Number Of Eggs/Day - " 
		+ to_string(NumOfEggsDay) + "\n";
	return s;
};