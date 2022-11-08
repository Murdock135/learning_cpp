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

