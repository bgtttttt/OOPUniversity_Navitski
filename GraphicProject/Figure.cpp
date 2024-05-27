#include "Figure.h"

int Figure::getX() {
	return x;
};
int Figure::getY() {
	return y;
};
void Figure::setX(int x) {
	this->x = x;
};
void Figure::setY(int y) {
	this->y = y;
};
string Figure::draw() {
	return "start point - x = " + to_string(x) + ", y = " + to_string(y);
};