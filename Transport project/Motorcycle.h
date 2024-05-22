#pragma once
#include "Transport.h"

class Motorcycle : public Transport
{
public:
	Motorcycle() {};
	Motorcycle(int tank) : Transport(tank) {};
};

