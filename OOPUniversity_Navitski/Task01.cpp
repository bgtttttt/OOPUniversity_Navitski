#include "Professor.h"
#include "Student.h"

class A {
public:
	int value1 = 10;
	virtual void start() {
		cout << "Start a\n";
	}
};
class B : public A {
public:
	int value2 = 20;
	void start() override {
		cout << "Start b\n";
	}
};


int main() {
	A* a = new B();
	a->start();
	
	return 0;
}
