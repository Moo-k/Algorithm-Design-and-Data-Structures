#pragma once
#include "Shape.h"

class Rectangle: public Shape{
private:
	double length;
	double height;
public:
	Rectangle(double inLength, double inHeight);
	double get_area();
	double get_perimeter();
};
