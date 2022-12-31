#pragma one

#include <vector>
#include <string>

class circularQueue{
	public:
		circularQueue(int capacity);
		void add(std::string value); // adds a value to the queue
		std::string remove(); // remove current value from queue
		std::string get_front();
	private:
		int front;
		int currentSize;
		int maxSize;
		std::vector<std::string> values;
};
