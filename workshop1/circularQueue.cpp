#include "circularQueue.h"

circularQueue::circularQueue(int capacity){
	front = 0;
	currentSize = 0;
	maxSize = capacity;
}

void circularQueue::add(std::string value) {
	/*int location = (currentSize + 1) % maxSize;
	if (location != front) {
		values.at(location) = value;
		currentSize++;
	}*/
	values.push_back(value);
	currentSize++;
}

std::string circularQueue::remove() {
	std::string first = "vector is empty";
	if (values.size() != 0) {
		currentSize--;
		/*int old_front = front;
		front = (front + 1) % maxSize;
		first = values.at(old_front);*/
		first = values.at(front);
		values.erase(values.begin()+front);
		if (front < currentSize-1){
			front++;
		}	else{
			front = 0;
		}
	}
	return first;
}

std::string circularQueue::get_front(){
	std::string output = values.at(front);
	if (front < currentSize-1){
		front++;
	}	else{
		front = 0;
	}
	return output;
}
