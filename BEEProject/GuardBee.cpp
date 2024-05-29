#include "GuardBee.h"

int GuardBee::getNumOfDefAttacks() {
	return NumOfDefAttacks;
};
void GuardBee::setNumOfDefAttacks(int NumOfDefAttacks) {
	if (NumOfDefAttacks > 0) {
		this->NumOfDefAttacks = NumOfDefAttacks;
	}
};
string GuardBee::getInfo() {
	return Bee::getInfo() + ", num of suc def - " + to_string(NumOfDefAttacks);
};