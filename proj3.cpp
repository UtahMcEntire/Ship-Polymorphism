// Proj3 BY Utah McEntire, CSCI 3110-001, Due: 09/27/2019
// PROGRAM ID: proj3.cpp / On The High Seas
// AUTHOR: Utah McEntire
// INSTALLATION: MTSU
// REMARKS: program simulates cruise/cargo ship loads and sailing using classes
// Started via Skeleton++

#include "ship.h"
#include "cargoship.h"
#include "cruiseship.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
using namespace std;

void sailShip(Ship &obj);

int main(){
	string shipName;
	double fuelLoad, luxuryPerc, upperDeckPerc, lowerDeckPerc, fwdBayPerc;
	int numOfPassengers, cargoCapacity, cargoWeight, fuelFlashpoint;
	
	//opens necessary files
	ifstream myIn;
	myIn.open("ships.txt");
	assert(myIn);
	
	// Cruise Ship
	myIn>>shipName>>fuelLoad>>luxuryPerc>>upperDeckPerc>>lowerDeckPerc>>numOfPassengers;
	CruiseShip myCruiseShip(shipName, fuelLoad, luxuryPerc, upperDeckPerc, lowerDeckPerc);
	myCruiseShip.fuel();
	myCruiseShip.load(numOfPassengers);
	sailShip(myCruiseShip);
	
	// Cargo Ship
	myIn>>shipName>>fuelLoad>>cargoCapacity>>fwdBayPerc>>cargoWeight>>fuelFlashpoint;
	CargoShip myCargoShip(shipName, fuelLoad, cargoCapacity, fwdBayPerc);
	myCargoShip.fuel(fuelFlashpoint);
	
	myCargoShip.load(cargoWeight);
	
	sailShip(myCargoShip);
	
	//close the opened files
	myIn.close();
	return 0;
}

void sailShip(Ship &obj){
	obj.sail();
}