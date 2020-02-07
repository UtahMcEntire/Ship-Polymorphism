// Proj3 BY Utah McEntire, CSCI 3110-001, Due: 09/27/2019
// PROGRAM ID: proj3.cpp / On The High Seas
// AUTHOR: Utah McEntire
// INSTALLATION: MTSU
// REMARKS:  program simulates cruise/cargo ship loads and sailing using classes

#include "ship.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <cstddef> //For NULL
using namespace std;

//Default constructor
Ship::Ship(string sName, double fLoad){
	shipName=sName;
	fuelLoad=fLoad;
}

void Ship::fuel(){
	cout<<shipName<<" "<<fuelLoad<<endl;
}
	
void Ship::sail(){
	cout<<shipName<<" sailing\n";
}