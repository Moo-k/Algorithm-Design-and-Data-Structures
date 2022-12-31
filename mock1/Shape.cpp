#include "Shape.h"

Shape::Shape(){
}

Shape::Shape(std::string inName){
	name = inName;
}

double Shape::get_area(){
	return 0.0;
}
	
	
std::string Shape::get_name(){
	return name;
};
