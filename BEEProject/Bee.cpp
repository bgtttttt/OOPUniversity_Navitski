#include "Bee.h"


int Bee::getSize() {
	return size;
};
int Bee::getAge() {
	return age;
};
double Bee::getVolOfUsedHoney() {
	return VolOfUsedHoney;
};
void Bee::setSize(int size) {
	if (size > 0 && size <= 3) {
		this->size = size;
	}
};
void Bee::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
};
void Bee::setVolOfUsedHoney(double VolOfUsedHoney) {
	if (VolOfUsedHoney > 0) {
		this->VolOfUsedHoney = VolOfUsedHoney;
	}
};

string Bee::getInfo() {
	string s = "";
	s = "Bee: size - " + to_string(size) + ", age - " + 
		to_string(age) + ", Honey used - " + to_string(VolOfUsedHoney);
	return s;
};