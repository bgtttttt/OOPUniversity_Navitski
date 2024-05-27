#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	double r;
public:
	Circle() : r(1), Figure() {};
	Circle(double r, int x, int y) : r(r), Figure(x,y) {};

	double getR();
	void setR(double r);

	double perimeter() override;
	double square() override;
	string draw() override;
};

