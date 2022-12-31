// dumb rps game

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void){
	srand (time(NULL)); // seed rng
	int computerMove = 0;
	int playerIntput = 0;

	string playerInput = "empty";
	
	while (playerInput != "stop"){
		cout << "Enter move (rock|paper|scissors|stop)" << endl;
		cin >> playerInput;
		computerMove = (rand() % 3) + 1;
		switch (computerMove){
			case 1:
				cout << "Computer chose Rock!" << endl;
			case 2:
				cout << "Computer chose Paper!" << endl;
			case 3:
				cout << "Computer chose Scissors!" << endl;
			default:
				cout << "Computer error!" << endl;
		}
		
		if (playerInput == "rock"){
			playerIntput = 1;
		}	else if (playerInput == "paper"){
			playerIntput = 2;
		}	else if (playerInput == "scissors"){
			playerIntput = 3;
		}
		
		switch (playerIntput){
			case 1:
				switch (computerMove){
					case 1:
						cout << "You Tie!" << endl;
					case 2:
						cout << "You Lose!" << endl;
					case 3:
						cout << "You Win!" << endl;
				}
			case 2:
				switch (computerMove){
					case 1:
						cout << "You Win!" << endl;
					case 2:
						cout << "You Tie!" << endl;
					case 3:
						cout << "You Lose!" << endl;
				}
			case 3:
				switch (computerMove){
					case 1:
						cout << "You Lose!" << endl;
					case 2:
						cout << "You Win!" << endl;
					case 3:
						cout << "You Tie!" << endl;
				}
			default:
				cout << "Invalid input!" << endl;
		}
	}
	
	return 0;
}
