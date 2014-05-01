#include "StdAfx.h"
#include "Die.h"

Die::Die() {
	srand(time(NULL));
	inCup = true;
}

int Die::roll() {
	result = rand() % 6 + 1;
	return result;
}

int Die::getResult() {
	return result;
}

bool Die::getLocation() {
	return inCup;
}

void Die::toCup() {
	inCup = true;
}

void Die::toPlayer() {
	inCup = false;
}