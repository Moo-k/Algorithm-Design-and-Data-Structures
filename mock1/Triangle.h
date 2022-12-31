#pragma once
#include "Shape.h"
#include <iostream>

class Triangle: public Shape{
private:
	int baseLength;
	int otherSide1;
	int otherSide2;
	double height;
	bool valid;
public:
	Triangle(int inBaseLength, int inOtherSide1, int inOtherSide2, double inHeight);
	double get_area();
	double get_perimeter();
};
