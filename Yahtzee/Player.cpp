#include "StdAfx.h"
#include "Player.h"

Player::Player() {
	
}

void Player::playerPut(int a) {
	playerSpace.push_back(a);
	addTrack(a);
}


void Player::print() {
	for (int i = 0; i < 5; i++) {
		cout << playerSpace[i] << ' ';
	}
}

void Player::addTrack(int inty) {
	if (inty == 1) {
		oneTracker++;
	}
	else if (inty == 2) {
		twoTracker++;
	}
	else if (inty == 3) {
		threeTracker++;
	}
	else if (inty = 4) {
		fourTracker++;
	}
	else if (inty = 5) {
		fiveTracker++;
	}
	else if (inty = 6) {
		sixTracker++;
	}
}

void Player::score(int x) {
	if (x > 0 && x < 7) {
		if (x == 1 && !oneBool) {
			for (int i = 0; i < 5; i++) {
				if (playerSpace[i] == x) {
					handScore += x;
				}
			}
			oneBool = true;
		}
		else if (x == 2 && !twoBool) {
			for (int i = 0; i < 5; i++) {
				if (playerSpace[i] == x) {
					handScore += x;
				}
			}
			twoBool = true;
		}
		else if (x == 3 && !threeBool) {
			for (int i = 0; i < 5; i++) {
				if (playerSpace[i] == x) {
					handScore += x;
				}
			}
			threeBool = true;
		}
		else if (x == 4 && !fourBool) {
			for (int i = 0; i < 5; i++) {
				if (playerSpace[i] == x) {
					handScore += x;
				}
			}
			fourBool = true;
		}
		else if (x == 5 && !fiveBool) {
			for (int i = 0; i < 5; i++) {
				if (playerSpace[i] == x) {
					handScore += x;
				}
			}
			fiveBool = true;
		}
		else if (x == 6 && !sixBool) {
			for (int i = 0; i < 5; i++) {
				if (playerSpace[i] == x) {
					handScore += x;
				}
			}
			sixBool = true;
		}
		subScoreTop += handScore;
	}
	// Three of a kind
	if (x > 6 && x < 14) {
		cout << x << endl;
		if (x == 7 && !sevenBool) {
			for (int i = 0; i < 5; i++) {
				handScore += playerSpace[i];
			}
			sevenBool = true;
		}
		// Four of a kind
		if (x == 8 && !eightBool) {
			for (int i = 0; i < 5; i++) {
				handScore += playerSpace[i];
			}
			eightBool = true;
		}
		// Full House
		if (x == 9 && !nineBool) {
			nineBool = true;
			handScore = 25;
		}
		// Small straight
		if (x == 10 && !tenBool) {
			tenBool = true;
			handScore = 30;
		}
		// Large Straight
		if (x == 11 && !elevenBool) {
			elevenBool = true;
			handScore = 40;
		}
		// Yahtzee (Special Rules)
		if (x == 12 && !twelveBool) {
			twelveBool = true;
			handScore = 50;
		}
		// Chance
		if (x == 13 && !thirteenBool) {
			for (int i = 0; i < 5; i++) {
				handScore += playerSpace[i];
			}
			thirteenBool = true;
		}
		subScoreBot += handScore;
	}
	totalScore = subScoreTop + subScoreBot;
	scoreCard();
}

void Player::scoreCard() {
	cout << "Hand Score : " << handScore << endl;
	cout << endl;
	cout << "1 : " << oneBool << endl;
	cout << "2 : " << twoBool << endl;
	cout << "3 : " << threeBool << endl;
	cout << "4 : " << fourBool << endl;
	cout << "5 : " << fiveBool << endl;
	cout << "6 : " << sixBool << endl;
	cout << "Upper Part : " << subScoreTop << endl;
	cout << "7 : " << sevenBool << endl;
	cout << "8 : " << eightBool << endl;
	cout << "9 : " << nineBool << endl;
	cout << "10 : " << tenBool << endl;
	cout << "11 : " << elevenBool << endl;
	cout << "12 : " << twelveBool << endl;
	cout << "13 : " << thirteenBool << endl;
	cout << "Lower Part : " << subScoreBot << endl;
	cout << "Total Score : " << totalScore << endl;
	handScore = 0;
}

void Player::reset() {
	playerSpace.clear();
}