#pragma once
#include <string>
#include <iostream>
using namespace std;

class Human {
private:
	string name;
	int age;
public:
	Human() {
		cout << "Human dafault\n";
	};
	Human(string name, int age) :
		name(name), age(age) {};
	~Human() {
		cout << "Human destructor\n";
	};

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);

	int sum(double a, double b);
	int sum(int a, int b);
	int sum(int a, int b, int c);

	Human& operator+(int value) {
		Human h(name, age + value);
		return h;
	}
	Human& operator+(Human& human) {
		Human h(name + "-" + human.name, age + human.age);
		return h;
	}

	string getInfo();
};
