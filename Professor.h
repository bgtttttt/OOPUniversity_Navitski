#pragma once
#include "Worker.h"
class Professor : public Worker
{
public:
	Professor() {
		cout << "Professor default\n";
	}
	~Professor() {
		cout << "Professor destructor\n";
	}
};

