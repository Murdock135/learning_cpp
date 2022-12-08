#pragma once
#include <iostream>
using namespace std;

class rectangle {
public:
	rectangle(); 
	void setDimension(double, double);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;

	rectangle& setLength(double);
	rectangle& setWidth(double); //returns reference to rectangle type

private:
	double length; 
	double width;
};

rectangle::rectangle() {
	length = 0;
	width = 0;
}
void rectangle::setDimension(double l, double w) {
	length = l;
	width = w;
}
double rectangle::getLength() const {
	return length;
}
double rectangle::getWidth() const {
	return length;
}
double rectangle::area() const {
	return length * width;
}
double rectangle::perimeter() const {
	return length + width;
}
void rectangle::print() const {
	cout << "rectangle's length= " << length << " and width= " << width;
}
rectangle& rectangle::setLength(double l) {
	length = l;
	return *this;
}
rectangle& rectangle::setWidth(double w) {
	width = w;
	return *this;
}


