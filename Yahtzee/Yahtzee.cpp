#include "stdafx.h"
#include "die.h"
#include "Cup.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Cup cupODice;
	Player playmaker;
	string input = "G";
	int iterator;
	while (input[0] != 'Q') {
		while(getline(cin, input)) {
			if (input[0] == 'G') {
				cupODice.reset();
				iterator = 0;
				cout << "Game Start" << endl; 
			}
			else if(input[0] == 'R') {
				if (iterator < 3) {
					cupODice.cupRoll();
					cupODice.print();
					iterator++;
				}
				else {
					cout << "You have to score now" << endl;
				}
			}
			else if(input[0] == 'K') {
				for(int i = 1; i < input.length(); i++) {
					if (input[i] != ' ') {
						int ia = input[i] - '0';
						ia--;
						cupODice.cupTake(ia);
					}
				}
				cupODice.print();
			}
			else if (input[0] == 'X') {
				for (int i = 1; i < input.length(); i++) {
					if (input[i] != ' ') {
						int ia = input[i] - '0';
						ia--;
						cupODice.cupPut(ia);
					}
				}
			}
			else if (input[0] == 'P') {
				cupODice.print();
			}
			else if (input[0] == 'Q') {
				return 0;
			}
			else if (input[0] == 'S') {

				for (int i = 0; i < 5; i++) {
					playmaker.playerPut(cupODice.cupTake(i));
				}
				string ib = "";
				int ia = 0;
				for (int i = 1; i < input.length(); i++) {
					if (input[i] != ' ') {
						ib += input[i];
					}
				}
				ia = stoi(ib);
				playmaker.score(ia);
				iterator = 0;
				cupODice.reset();
				playmaker.reset();
			}
		}
	}
	return 0;
}

