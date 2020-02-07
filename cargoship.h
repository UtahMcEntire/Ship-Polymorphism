// Proj3 BY Utah McEntire, CSCI 3110-001, Due: 09/27/2019
// PROGRAM ID: proj3.cpp / On The High Seas
// AUTHOR: Utah McEntire
// INSTALLATION: MTSU
// REMARKS: program simulates cruise/cargo ship loads and sailing using classes

#ifndef cargoship_H
#define cargoship_H

#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <cstddef> //For NULL
using namespace std;

class CargoShip : public Ship{
public:

	//Constructor
	CargoShip(string sName, double fLoad, int cCapacity, double fbPerc);
	
	void fuel(int fuelFlashpoint);
	
	// IN CARGOSHIP HEADER FILE
	
	void load(int cargoWeight);

	//Destructor
	~CargoShip();

private:
	double *fwdWeight=new double(0);
	double *aftWeight=new double(0);
	int cargoCapacity;
	double fwdBayPerc;
};

#endif