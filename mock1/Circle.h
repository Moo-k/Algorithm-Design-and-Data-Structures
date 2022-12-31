#pragma once
#include "Shape.h"

class Circle: public Shape{
private:
	double diameter;
	double pi = 3.1415926;
public:
	Circle(double inDiameter, std::string inName);
	double get_area();
	double get_perimeter();
};
