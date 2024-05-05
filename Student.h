#pragma once
#include "Human.h"

using namespace std;

class Student : public Human {
private:
	double mark;
	static int count;
public:
	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;
	static const int MAX_AGE = 100;
	static const int MIN_AGE = 0;


	Student();
	Student(string name);
	Student(string, int, double);
	~Student();

	double getMark();
	void setMark(int m);


	static int getCount();

	string convert();
};