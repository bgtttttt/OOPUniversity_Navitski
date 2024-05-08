#pragma once
#include <iostream>

using namespace std;

class Integer
{
private:
	int num;
public:
	Integer() {};
	Integer(int num) : num(num) {};
	Integer& operator+(Integer value);
	Integer& operator-(Integer value);
	Integer& operator*(Integer value);
	Integer& operator/(Integer value);
	Integer& operator%(Integer value);
	Integer& operator^(Integer value);
	Integer& operator-();
	int getNumber();
};

