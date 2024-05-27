#include "Circle.h"
#include <math.h>

const double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091;

double Circle::perimeter() {
	return 2 * PI * r;
};
double Circle::square() {
	return PI * r * r;
};
string Circle::draw() {
	return "Circle: " +Figure::draw()
		+ ", radius = " + to_string(r);
};

double Circle::getR() {
	return r;
};
void Circle::setR(double r) {
	if (r > 0) {
		this->r = r;
	}
};