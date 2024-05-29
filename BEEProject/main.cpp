#include "BeeKeeper.h"

int main() {
	Bee* queen = new QueenBee(1, 1, 2);
	Bee* drone = new Drone(1,2,3);
	BeeHive hive{ 0, "type", 2,3,4, "mat" };
	hive.addBee(queen);
	hive.addBee(drone);
	cout << hive.getFullInfo();
	return 0;
}