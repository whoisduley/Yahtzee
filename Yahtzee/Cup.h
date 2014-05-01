#pragma once

#include <vector>
#include "Die.h"
#include "Player.h"

using namespace std;

#ifndef CUP
#define CUP

class Cup {

private:
	vector<Die*> cupSpace;
	vector<int> results;
	int diceInCup;


public:
	Cup();
	int cupTake(int);
	void cupPut(int);
	void cupRoll();
	int getNoD();
	void print();
	void reset();


};

#endif