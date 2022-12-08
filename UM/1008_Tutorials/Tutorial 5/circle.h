#pragma once

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

class circle {
public:
	void print() const;
	void setRadius(double);
	void setCenter(double, double);
	void getCenter(double&, double&); //need to pass by reference cuz we need to pass result back to int main
	double getRadius();
	double area();
	circle();
	circle(double, double, double);
private:
	double x, y, radius;
};

circle::circle() : x(0), y(0), radius(5) {}
circle::circle(double x, double y, double r) : x(x), y(y), radius(r) {}

void circle::print() const {
	cout << " The circle has a radius of " << this->radius
		<< " with its center at: " << "(" << this->x << "," << this->y << ")" << endl;
}
void circle::setRadius(double r) {
	this->radius = r;
}
void circle::setCenter(double x, double y) {
	this->x = x;
	this->y = y;
}
double circle::getRadius() {
	return radius;
}
void circle::getCenter(double& x, double& y) {
	x = this->x;
	y = this->y;
	cout << "(" << x << "," << y << ")";
}
double circle::area() {
	return M_PI * radius * radius;
}
