#include "Triangle.h"

Triangle::Triangle(int inBaseLength, int inOtherSide1, int inOtherSide2, double inHeight){
	baseLength = inBaseLength;
	otherSide1 = inOtherSide1;
	otherSide2 = inOtherSide2;
	height = inHeight;
	if (baseLength >= otherSide1+otherSide2){
		valid = 0;
	}	else if (otherSide1 >= baseLength+otherSide2){
		valid = 0;
	}	else if (otherSide2 >= baseLength+otherSide1){
		valid = 0;
	}	else{
		valid = 1;
	}
	if (valid == 0){
		std::cerr << "Invalid Triangle!" << std::endl;
		name = "Error";
		return;
	}
	if (baseLength==otherSide1 && baseLength==otherSide2){
		name = "Equilateral";
	}	else if (baseLength==otherSide1 || baseLength==otherSide2 || otherSide1==otherSide2){
		name = "Isosceles";
	}	else{
		name = "Scalene";
	}
}

double Triangle::get_area(){
	if (valid){
		return 0.5*baseLength*height;
	}	else{
		return 0.0;
	}
}

double Triangle::get_perimeter(){
	if (valid){
		return baseLength+otherSide1+otherSide2;
	}	else{
		return 0.0;
	}
}
