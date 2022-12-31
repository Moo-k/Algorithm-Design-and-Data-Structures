#include "circularQueue.h"
#include <iostream>
#include <vector>
#include <string>

int main(void){
	circularQueue moves(3);
	moves.add("Rock");
	moves.add("Paper");
	moves.add("Scissors");
	
	for (int i = 0; i < 4; i++){
		std::cout << moves.get_front() << std::endl;
	}
	
	// test adding new value to the back
	/*moves.add("Paper");
	
	for (int i = 0; i < 8; i++){
		std::cout << moves.get_front() << std::endl;
	}*/
	
	moves.remove();
	for (int i = 0; i < 4; i++){
		std::cout << moves.get_front() << std::endl;
	}
	
	
	return 0;
}
