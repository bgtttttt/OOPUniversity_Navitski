#pragma once
#include "Human.h"
using namespace std;

class Worker : public Human
{
private:
	double salary;
public:
	Worker() {
		cout << "Worker dafault\n";
	};
	Worker(string name, int age, double salary) : Human(name, age), salary(salary) {};
	~Worker() {
		cout << "Worker destructor\n";
	};

	double getSalary();
	void setSalary(double salary);

	string getInfo();
};

