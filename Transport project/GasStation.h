#pragma once
#include "Bus.h"
#include "Car.h"
#include "Truck.h"

class GasStation
{
public:
	int calcTotalGas(Transport* transports, int size) {
		int total = 0;
		for (int i = 0; i < size; i++) {
			total += transports[i].tank;
		}
		return total;

	}
};
