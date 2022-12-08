#pragma once
#include <iostream>
#include "Point.h"

using namespace std;

class Location {
public:
	Location(Point, Point);
	double distance();
private:
	Point Source;
	Point Destination;
};

Location::Location(Point s, Point d) {
	Source = s;
	Destination = d;
}

double Location::distance() {
	int x = Destination.getX() - Source.getX(); int y = Destination.getY() - Source.getY();
	return sqrt(pow(x, 2) + pow(y, 2) * 1.0);
}



