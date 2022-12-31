#include "Circle.h"

Circle::Circle(double inDiameter, std::string inName){
	diameter = inDiameter;
	name = inName;
}

double Circle::get_area(){
	double radius = 0.5*diameter;
	return pi*radius*radius;
}

double Circle::get_perimeter(){
	return pi*diameter;
}
