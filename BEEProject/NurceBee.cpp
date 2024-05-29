#include "NurceBee.h"

int NurceBee::getNumOfMilkDay() {
	return NumOfMilkDay;
};
void NurceBee::setNumOfMilkDay(int NumOfMilkDay) {
	if (NumOfMilkDay > 0) {
		this->NumOfMilkDay = NumOfMilkDay;
	}
};
string NurceBee::getInfo() {
	return Bee::getInfo() + ", num of milk/day - " + to_string(NumOfMilkDay);
};