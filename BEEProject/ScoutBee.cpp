#include "ScoutBee.h"

int ScoutBee::getDistance() {
	return Distance;
};
void ScoutBee::setDistance(int Distance) {
	if (Distance > 0) {
		this->Distance = Distance;
	}
};
string ScoutBee::getInfo() {
	return Bee::getInfo() + ", distance - " + to_string(Distance);
};