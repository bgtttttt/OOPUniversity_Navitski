#pragma once
#include "Figure.h"
class Rectangle : public Figure {	
private:
	double a;
	double b;
public:
	Rectangle() : a(1), b(1), Figure() {};
	Rectangle(double a, double b, int x, int y) : a(a), b(b), Figure(x,y) {};

	double getA();
	double getB();
	void setA(double a);
	void setB(double b);

	double perimeter() override;
	double square() override;
	string draw() override;
};

