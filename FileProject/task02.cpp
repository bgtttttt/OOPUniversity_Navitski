#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream fin("E:\\test\\blabla.txt");
	char buf[20];
	int a, b;

	if (!fin.fail()) {
		fin.getline(buf, 20);
		a = atoi(buf);
		fin.getline(buf, 20);
		b = atoi(buf);

		cout << a + b;
		fin.close();

	}


	return 0;
}