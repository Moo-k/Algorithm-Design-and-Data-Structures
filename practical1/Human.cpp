#include "Human.h"
#include <iostream>

HumanPlayer::HumanPlayer(){};

HumanPlayer::makeMove(){
	char move;
	cout << "Enter move: ";
	cin >> move;
	return move;
}
