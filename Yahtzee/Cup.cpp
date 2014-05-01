#include "StdAfx.h"
#include "Cup.h"
#include <iostream>

using namespace std;

Cup::Cup() {
	for(int i = 0; i < 5; i++) {
		Die *newDie = new Die();
		cupSpace.push_back(newDie);
		cupSpace[i]->toCup();
	}
	diceInCup = 5;
}

int Cup::cupTake(int a) {
	cupSpace[a]->toPlayer();
	return cupSpace[a]->getResult();
}

void Cup::cupPut(int a) {
	cupSpace[a]->toCup();
}

// Does Die::roll on all dice in the cupSpace

void Cup::cupRoll() {
	for(int i = 0; i < 5; i++) {
		if(cupSpace[i]->getLocation()) { 
			cupSpace[i]->roll();
		}
	}
}

int Cup::getNoD() {
	return diceInCup;
}

void Cup::print() {
	for (int i = 0; i < diceInCup; i++) {
		cout << cupSpace[i]->getResult() << ' ';
	}
	cout << endl;
	for (int i = 0; i < diceInCup; i++) {
		if (! cupSpace[i]->getLocation()) {
			cout << "^ ";
		}
		else {
			cout << "  ";
		}
	}
	cout << endl;
}

void Cup::reset() {
	for (int i = 0; i < 5; i++) {
		cupSpace[i]->toCup();
	}
}