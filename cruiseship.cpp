// Proj3 BY Utah McEntire, CSCI 3110-001, Due: 09/27/2019
// PROGRAM ID: proj3.cpp / On The High Seas
// AUTHOR: Utah McEntire
// INSTALLATION: MTSU
// REMARKS: program simulates cruise/cargo ship loads and sailing using classes

#include "ship.h"
#include "cruiseship.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <cstddef> //For NULL
using namespace std;

//Default constructor
CruiseShip::CruiseShip(string sName, double fLoad, double lPerc, double udPerc, double ldPerc): Ship(sName, fLoad){
	string shipName=sName;
	double fuelLoad=fLoad;
	luxuryPerc=lPerc;
	upperDeckPerc=udPerc;
	lowerDeckPerc=ldPerc;
}

void CruiseShip::sail(){
	cout<<shipName<<" "
		<<luxuryNum<<" "
		<<upperDeckNum<<" "
		<<lowerDeckNum<<" "
		<<endl;
}

void CruiseShip::load(int numOfPassengers){
	luxuryNum=luxuryPerc*numOfPassengers;
	//cout<<luxuryPerc<<"*"<<numOfPassengers<<"="<<luxuryNum<<endl;
	upperDeckNum=upperDeckPerc*numOfPassengers;
	//cout<<upperDeckPerc<<"*"<<numOfPassengers<<"="<<upperDeckNum<<endl;
	lowerDeckNum=lowerDeckPerc*numOfPassengers;
	//cout<<lowerDeckPerc<<"*"<<numOfPassengers<<"="<<lowerDeckNum<<endl;
}