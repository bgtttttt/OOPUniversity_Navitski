#include "Integer.h"

int main() {
	Integer num1(10);
	Integer num2(3);
	Integer num3 = num1 + num2;
	Integer num4 = num1 - num2;
	Integer num5 = num1 * num2;
	Integer num6 = num1 / num2;
	Integer num7 = num1 % num2;
	Integer num8 = num1 ^ num2;
	Integer num9 = -num1;
	
	cout << num3.getNumber() << "\n";
	cout << num4.getNumber() << "\n";
	cout << num5.getNumber() << "\n";
	cout << num6.getNumber() << "\n";
	cout << num7.getNumber() << "\n"; 
	cout << num8.getNumber() << "\n";
	cout << num9.getNumber() << "\n";
	 
	cout << num1.getNumber() << " ";
	Integer num10 = num1++;
	cout << num10.getNumber() << " " << num1.getNumber() << "\n";
	cout << num1.getNumber() << " ";
	Integer num11 = num1--;
	cout << num11.getNumber() << " " << num1.getNumber() << "\n";
	cout << num1.getNumber() << " ";
	Integer num12 = ++num1;
	cout << num12.getNumber() << " " << num1.getNumber() << "\n";
	cout << num1.getNumber() << " ";
	Integer num13 = --num1;
	cout << num13.getNumber() << " " << num1.getNumber() << "\n";
	 
	 
}
