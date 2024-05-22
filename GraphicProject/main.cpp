#include "Editor.h"
#include <iostream>

int main() {
	Rectangle* rect = new Rectangle(4,5);
	Editor editor;
	cout << editor.justDoIt(rect);
	return 0;
}