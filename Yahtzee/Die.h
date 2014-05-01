#pragma once
#ifndef DIE
#define DIE

#include <stdlib.h> 
#include <time.h>
#include <iostream>

using namespace std;

class Die {

private:
	int result;
	bool inCup;

public:
	Die();
	int roll();
	int getResult();
	bool getLocation();
	void toCup();
	void toPlayer();
};

#endif
