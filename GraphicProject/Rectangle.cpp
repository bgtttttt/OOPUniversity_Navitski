#include "Rectangle.h"

double Rectangle::perimeter() {
	return 2*(a+b);
};
double Rectangle::square() {
	return a*b;
};
string Rectangle::draw() {
	return "Rectange";
};