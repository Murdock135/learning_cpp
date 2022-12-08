#pragma once
#include <iostream>
#include "circle.h"
using namespace std;

class cylinder :public circle {
public:
	void print() const;
	void setHeight(double);
	double getHeight();
	double volume();
	double area();
	cylinder();
	cylinder(double, double, double, double);
private:
	double Height;
};

cylinder::cylinder(double x, double y, double radius, double Height): circle(x,y,radius),Height(Height) {}
cylinder::cylinder(): circle(0,0,5), Height(5) {}

//show this one to Dr Wong
//void cylinder::print() const {
//	cout << "The cylinder has a Height of " << Height << " cm " << endl;
//	cout << "The base of the cylinder is at";
//	getCenter();
//}

void cylinder::print() const {
	cout << "The cylinder has a Height of " << Height << " cm " << endl;
	cout << "The base of the cylinder has a circle where ";
	circle::print();
}
void cylinder::setHeight(double h) {
	Height = h;
}
double cylinder::getHeight() {
	return Height;
}
double cylinder::volume() {
	return circle::area() * Height;
}
double cylinder::area() {
	return 2 * 3.14 * circle::getRadius() * Height + 2 * circle::area();
}

