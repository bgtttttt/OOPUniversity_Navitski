#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int age;
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

	string getName();

	int getAge();
	void setAge(int a);

	double getMark();
	void setMark(int m);


	static int getCount();

	string convert();
};