#include <iostream>
#include <string>
#include <cmath>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(void){
	Circle *c1 = new Circle(2,"c1");
	Circle *c2 = new Circle(3,"c2");
	Rectangle *r1 = new Rectangle(2,3);
	Rectangle *r2 = new Rectangle(4,5);
	Triangle *t1 = new Triangle(3,4,5,4);
	Triangle *t2 = new Triangle(9,4,5,4);
	Triangle *t3 = new Triangle(4,4,4,2*sqrt(3));
	
	cout << "Circle " << c1->get_name() << " has area: " << c1->get_area() << " and perimeter: " << c1->get_perimeter() << endl;
	cout << "Circle " << c2->get_name() << " has area: " << c2->get_area() << " and perimeter: " << c2->get_perimeter() << endl;
	cout << "Rectangle " << r1->get_name() << " has area: " << r1->get_area() << " and perimeter: " << r1->get_perimeter() << endl;
	cout << "Rectangle " << r2->get_name() << " has area: " << r2->get_area() << " and perimeter: " << r2->get_perimeter() << endl;
	cout << "Triangle " << t1->get_name() << " has area: " << t1->get_area() << " and perimeter: " << t1->get_perimeter() << endl;
	cout << "Triangle " << t2->get_name() << " has area: " << t2->get_area() << " and perimeter: " << t2->get_perimeter() << endl;
	cout << "Triangle " << t3->get_name() << " has area: " << t3->get_area() << " and perimeter: " << t3->get_perimeter() << endl;
	return 0;
}
