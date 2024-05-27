#include "Editor.h"
#include <iostream>

int main() {
	Rectangle* rect = new Rectangle(4,5,1,1);
	Circle* circ = new Circle(3,5,4);
	Editor editor;
	cout << editor.justDoIt(rect);
	cout << editor.justDoIt(circ);
	return 0;
}