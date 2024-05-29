#pragma once
#include "Bee.h"
#include "QueenBee.h"
#include "Drone.h"
#include "NurceBee.h"
#include "WorkerBee.h"
#include "ScoutBee.h"
#include "GuardBee.h"
#include "BuilderBee.h"

class BeeHive
{
private:
	int numOfBees;
	Bee** bees;
	string Type;
	int a; int b; int c;
	string Material;
public:
	BeeHive() : numOfBees(0), Type(""), a(0), b(0), c(0), Material("") {};
	BeeHive(int numOfBees, string Type, int a, int b, int c, string Material) :
		numOfBees(numOfBees), Type(Type), a(a), b(b), c(c), Material(Material) {};

	void addBee(Bee* bee);
	void removeBee(int index);
	void removeBee(Bee bee);
	int getNumOfBees();
	string getFullInfo();
	string getHiveInfo();
	int getFirstIndex(Bee bee);
};

