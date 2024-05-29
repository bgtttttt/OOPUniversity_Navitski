#include "WorkingBee.h"

int WorkingBee::getLifeInDays() {
	return lifeInDays;
};
void WorkingBee::setLifeinDays(int lifeInDays) {
	if (lifeInDays > 0) {
		this->lifeInDays = lifeInDays;
	}
};
string WorkingBee::getInfo() {
	return Bee::getInfo() + ", life in days - " + to_string(lifeInDays);
};