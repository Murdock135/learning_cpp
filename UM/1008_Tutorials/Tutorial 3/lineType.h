#pragma once
#include <iostream>
#include "pointType.h"
#include <string>
using namespace std;

class lineType {
private:
	pointType p1, p2;
	bool vertical, horizontal = false;
	double slope;
public:
	lineType(pointType&, pointType&);
	void vertOrhori();
	void getSlope();
	string equation();
};

lineType::lineType(pointType& p1, pointType& p2) {
	this->p1 = p1;
	this->p2 = p2;
}

void lineType::vertOrhori() {
	if (p1.getx() == p2.getx()) {
		vertical = true;
	}
	else if (slope == double(0)) {
		horizontal = true;
	}
	else
		cout << "line is slanted" << endl;
}

void lineType::getSlope() {
	double slope;
	double x1 = (double)p1.getx();
	double y1 = (double)p1.gety();
	double x2 = (double)p2.getx();
	double y2 = (double)p2.gety();

	slope = (y2 - y1) / (x2 - x1);

	this->slope = slope;
}

string lineType::equation() {
	string eq;
	double y = (double)p1.gety();
	double x = (double)p1.getx();

	double c = y - slope * x;

	if (vertical == true) {
		eq = "x = " + to_string(p1.getx());
	}
	else
		eq = to_string(y) + " = " + to_string(slope) + "*" + to_string(x);

	return eq;
}