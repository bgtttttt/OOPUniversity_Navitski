#include "Student.h"
//
int Student::count = 0;

Student::Student() : Student("no name", 6, 4) {
}

Student::Student(string name) : Student(name, 6, 4) {
}

Student::Student(string name, int age, double mark) : Human(name, age), mark(mark) {
	count++;
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
	s += getInfo();
	s += ", mark = " + to_string(mark);

	return s;
}