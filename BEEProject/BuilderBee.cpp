#include "BuilderBee.h"

int BuilderBee::getAmOfWork() {
	return AmOfWork;
};
void BuilderBee::setAmOfWork(int AmOfWork) {
	if (AmOfWork > 0) {
		this->AmOfWork = AmOfWork;
	}
};
string BuilderBee::getInfo() {
	return Bee::getInfo() + ", amount of work - " + to_string(AmOfWork);
};