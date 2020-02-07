// Proj3 BY Utah McEntire, CSCI 3110-001, Due: 09/27/2019
// PROGRAM ID: proj3.cpp / On The High Seas
// AUTHOR: Utah McEntire
// INSTALLATION: MTSU
// REMARKS: program simulates cruise/cargo ship loads and sailing using classes

#include "ship.h"
#include "cargoship.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <cstddef> //For NULL
using namespace std;

//Default constructor
CargoShip::CargoShip(string sName, double fLoad, int cCapacity, double fbPerc):Ship(sName, fLoad){
	string shipName=sName;
	double fuelLoad=fLoad;
	cargoCapacity=cCapacity;
	fwdBayPerc=fbPerc;
}

void CargoShip::fuel(int fuelFlashpoint){
	Ship::fuel();
	cout<<shipName<<" "<<fuelFlashpoint<<endl;
	
	//IF CALLLED HERE, cargoCapacity WILL SAY ITS SET TO 800
	// AND FWDBAYPERC WILL SAY ITS SET TO 0.37
}

void CargoShip::load(int cargoWeight){
	
	//BUT IF CALLLED FROM HERE, cargoCapacity WILL SAY ITS SET TO 0
	// AND FWDBAYPERC WILL SAY ITS SET TO 0
	
	//CARGO WEIGHT IS PASSED IN CORRECTLY THOUGH
	
	if (cargoWeight>cargoCapacity){
		cargoWeight=cargoCapacity;
	}
	
	*fwdWeight=cargoWeight*fwdBayPerc;
	*aftWeight=cargoWeight*(1-fwdBayPerc);
	
	cout<<shipName<<" "<<*fwdWeight<<" "<<*aftWeight<<endl;
	
	//UNTIL YOU EXIT THIS FUNCTION THEY BOTH SAY THEY'RE SET TO 0
}

CargoShip::~CargoShip(){
	delete fwdWeight;
	delete aftWeight;
}