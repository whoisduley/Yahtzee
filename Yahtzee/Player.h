#pragma once

#ifndef PLAYER
#define PLAYER

#include "Die.h"
#include "Cup.h"
#include <vector>

using namespace std;

class Player {

private:
	vector<int> playerSpace;
	int diceInHand;
	int subScoreTop = 0, subScoreBot = 0, handScore = 0, totalScore = 0;
	bool oneBool = false, twoBool = false, threeBool = false, fourBool = false, fiveBool = false, sixBool = false;
	bool sevenBool = false, eightBool = false, nineBool = false, tenBool = false, elevenBool = false, twelveBool = false, thirteenBool = false;
	int oneTracker = 0, twoTracker = 0, threeTracker = 0, fourTracker = 0, fiveTracker = 0, sixTracker = 0;

public:
	Player();
	void playerPut(int);
	void score(int);
	void print();
	void addTrack(int);
	void scoreCard();
	void reset();
};

#endif
