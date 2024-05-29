#pragma once

#include <string>
#include <iostream>

using namespace std;

class Bee
{
protected:
	int size;
	int age;
	double VolOfUsedHoney;
public:
	Bee() : size(1), age(0), VolOfUsedHoney(0) {};
	Bee(int size, int age) :
		size(size), age(age) {
		this->VolOfUsedHoney = 3 * size + 2 * age;
	};

	int getSize();
	int getAge();
	double getVolOfUsedHoney();
	void setSize(int size);
	void setAge(int age);
	void setVolOfUsedHoney(double VolOfUsedHoney);
	virtual string getInfo();
};

