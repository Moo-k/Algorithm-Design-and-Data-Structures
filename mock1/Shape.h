#pragma once
#include <string>

class Shape{
public:
	Shape();
	Shape(std::string inName);
	virtual double get_area();
	virtual double get_perimeter()=0;
	std::string get_name();
protected:
	std::string name;
};
