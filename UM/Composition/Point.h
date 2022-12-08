#pragma once
#include <iostream>
using namespace std;

class Point {
public:
	Point(int = 0, int = 0); //default parameters cuz later location is going to use this class
	int getX() const;
	int getY() const;
	void print() const;
private:
	int x, y;
};


Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

int Point::getX() const {
	return x;
}

int Point::getY() const {
	return y;
}

