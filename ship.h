// Proj3 BY Utah McEntire, CSCI 3110-001, Due: 09/27/2019
// PROGRAM ID: proj3.cpp / On The High Seas
// AUTHOR: Utah McEntire
// INSTALLATION: MTSU
// REMARKS: program simulates cruise/cargo ship loads and sailing using classes

#ifndef ship_H
#define ship_H

#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <cstddef> //For NULL
using namespace std;

class Ship{
public:

	//Constructor
	Ship(string sName, double fLoad);

	void fuel();

	virtual void sail();
	
	// IN PARENT CLASS HEADER FILE

	virtual void load(int loading)=0;

protected:
	string shipName;
	double fuelLoad;
};

#endif