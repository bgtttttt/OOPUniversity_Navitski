#include "BeeHive.h"
#include <string>

void BeeHive::addBee(Bee* bee) {
	if (numOfBees == 0) {
		bees = new Bee*[1];
		bees[0] = bee;
	}
	else {
		Bee** temp = new Bee*[numOfBees + 1];
		for (int i = 0; i < numOfBees; i++) {
			temp[i] = bees[i];
		}
		temp[numOfBees] = bee;
		delete[] bees;
		bees = temp;
	}
	numOfBees++;
};
void BeeHive::removeBee(int index) {
	if (numOfBees > 0 && index >= 0 && index < numOfBees) {
		Bee* temp = new Bee[numOfBees - 1];
		for (int i = 0, j = 0; i < numOfBees; i++) {
			if (i != index) {
				temp[j++] = *bees[i];
			}
		}
		delete[] bees;
		*bees = temp;
	}
};
void BeeHive::removeBee(Bee bee) {
	int index = getFirstIndex(bee);

	if (index != -1) {
		Bee* temp = new Bee[numOfBees - 1];
		for (int i = 0, j = 0; i < numOfBees; i++) {
			if (i != index) {
				temp[j++] = *bees[i];
			}
		}
		numOfBees--;
		delete[] bees;
		*bees = temp;
	}
};
int BeeHive::getNumOfBees() {
	return numOfBees;
};
string BeeHive::getFullInfo() {
	string s = "";
	for (int i = 0; i < numOfBees; i++) {
		s += bees[i]->getInfo() + "\n";
	}
	return s;
};
string BeeHive::getHiveInfo() {
	return "Hive: Type - " + Type + ", size - " + to_string(a) + ", " +
		to_string(b) + ", " + to_string(c) + ", Material - " + Material;
};
int BeeHive::getFirstIndex(Bee bee) {
	for (int i = 0; i < numOfBees; i++) {
		if (bee.getAge() == bees[i]->getAge()
			&& bee.getSize() == bees[i]->getSize()
			&& bee.getVolOfUsedHoney() == bees[i]->getVolOfUsedHoney()) {
			return i;
		}
	}
	return -1;
}