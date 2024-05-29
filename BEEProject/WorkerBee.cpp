#include "WorkerBee.h"

string WorkerBee::getTypeOfCollecting() {
	return TypeOfCollecting;
};
int WorkerBee::getDistance() {
	return Distance;
};
void WorkerBee::setTypeOfCollecting(int TypeOfCollecting) {
	this->TypeOfCollecting = TypeOfCollecting;
};
void WorkerBee::setDistance(int Distance) {
	if (Distance > 0) {
		this->Distance = Distance;
	}
};
string WorkerBee::getInfo() {
	return Bee::getInfo() + ", type of collecting - " + TypeOfCollecting
		+ ", distance - " + to_string(Distance);
};