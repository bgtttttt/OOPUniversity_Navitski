#pragma once
#include "Bus.h"
#include "Car.h"
#include "Truck.h"

class GasStation
{
public:
	int calcTotalGas(Bus* buses, Truck* trucks, Car* cars, int bsize, int tsize, int csize) {
		int total = 0;
		for (int i = 0; i < bsize; i++) {
			total += buses[i].volume;
		}
	}
};

