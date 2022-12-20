#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x = 0, int y = 0); // Constructor
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	void print() const;
	Point operator+(const Point& rhs);
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);
};

Point::Point(int x, int y) : x(x), y(y) { }
int Point::getX() const { return x; }
int Point::getY() const { return y; }
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
void Point::print() const {
	cout << "(" << x << "," << y << ")" << endl;
}

Point Point::operator+(const Point& rhs) {

	//first way
	//Point result;
	//result.setX(x + rhs.x);
	//result.setY(y + rhs.y);
	//return result;
	// 
	//second way
	return Point(x + rhs.x, y + rhs.y);
}

ostream& operator<<(ostream& out, const Point& p) {
	out << "(" << p.x << "," << p.y << ")";
	return out;
}

istream& operator>>(istream& in, Point& p) {
	cout << "Enter x and y coord: ";
	in >> p.x >> p.y;
	return in;
}


