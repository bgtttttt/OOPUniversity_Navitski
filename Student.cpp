#include "Student.h"
//
int Student::count = 0;

Student::Student() : Student("no name", 6, 4) {
}

Student::Student(string name) : Student(name, 6, 4) {
}

Student::Student(string name, int age, double mark) : name(name), age(age), mark(mark) {
	count++;
}

string Student::getName() {
	return name;
}
int Student::getAge() {
	return age;
}
void Student::setAge(int age) {
	if (age > MIN_AGE && age < MAX_AGE) {
		this->age = age;
	}
}
double Student::getMark() {
	return mark;
}
void Student::setMark(int mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		this->mark = mark;
	}
}

int Student::getCount() {
	return count;
}

Student::~Student() {
	count--;
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);

	return s;
}