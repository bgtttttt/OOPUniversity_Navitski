#include <string>
#include <iostream>
using namespace std;

class Human
{
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

	string getInfo();
};
