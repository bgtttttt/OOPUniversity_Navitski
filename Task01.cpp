#include "Manager.h"
#include <iostream>
using namespace std;

int main() {
	Group groupA;
	Student st1{ "Alex", 14, 20 };
	Student st2{ "Peter", 16, 9 };
	Student st3{ "Alice" };
	
	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);

	cout << "Before:\n";
	cout << groupA.convertToString() << endl;

	groupA.remove(st3);

	cout << "After:\n";
	cout << groupA.convertToString() << endl;

	return 0;
}
