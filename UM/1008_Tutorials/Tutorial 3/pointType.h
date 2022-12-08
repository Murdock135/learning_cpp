#pragma once
#include <iostream>
using namespace std;
/*
this needs two constructor.One needs default constructorand another
or you could initialize values in constructor
*/

class pointType {
private:
	int x, y;
public:
	pointType();
	pointType(int, int);
	int getx() const;
	int gety() const;
	void setx(int);
	void sety(int);
	double distance(pointType);
};

pointType::pointType() {
	x = 0;
	y = 0;
}

pointType::pointType(int x, int y) {
	this->x = x;
	this->y = y;
}

int pointType::getx() const {
	return x;
}

int pointType::gety() const {
	return y;
}

void pointType::setx(int x) {
	this->x = x;
}

void pointType::sety(int y) {
	this->y = y;
}

double pointType::distance(pointType p2) {
	double x1 = (double)x;
	double y1 = (double)y;

	double x2 = (double)p2.getx();
	double y2 = (double)p2.gety();

	double dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return dist;
}

