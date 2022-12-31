#include "Rectangle.h"

Rectangle::Rectangle(double inLength, double inHeight){
	length = inLength;
	height = inHeight;
	name = "Rectangle";
}

double Rectangle::get_area(){
	return length*height;
}

double Rectangle::get_perimeter(){
	return length*2+height*2;
}
