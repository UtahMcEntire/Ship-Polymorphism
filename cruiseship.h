// Proj3 BY Utah McEntire, CSCI 3110-001, Due: 09/27/2019
// PROGRAM ID: proj3.cpp / On The High Seas
// AUTHOR: Utah McEntire
// INSTALLATION: MTSU
// REMARKS: program simulates cruise/cargo ship loads and sailing using classes

#ifndef cruiseship_H
#define cruiseship_H

#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <cstddef> //For NULL
using namespace std;

class CruiseShip : public Ship{
public:

	//Constructor
	CruiseShip(string sName, double fLoad, double lPerc, double udPerc, double ldPerc);
	
	void sail();

	void load(int numOfPassengers);

private:
	double luxuryPerc;
	double upperDeckPerc;
	double lowerDeckPerc;
	int luxuryNum;
	int upperDeckNum;
	int lowerDeckNum;
};

#endif