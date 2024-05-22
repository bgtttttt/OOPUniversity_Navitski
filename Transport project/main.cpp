#include "GasStation.h"
#include <iostream>

using namespace std;

bool flags[3];

int main() {
	for (int i = 0; i < 100000; i++) {
		cout << flags[i] << " ";
	}
	Bus bus{ 100 };
	Car car{ 47 };
	Truck truck{ 140 };
	Motorcycle motorcycle{ 10 };

	Transport transports[]{ car,bus,truck, motorcycle };
	GasStation station{};
	cout << "Total fuel is " << station.calcTotalGas(transports, 4);
	return 0;
}