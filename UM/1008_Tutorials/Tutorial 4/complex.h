#pragma once
#include <iostream>
using namespace std;

class complex {
private:
	double real;
	double imaginary;
public:
	complex(double r = 0.0, double i = 0): real(r), imaginary(i) {}
	complex operator+(const complex& other) const;
	complex operator*(const complex& other) const;
	bool operator==(const complex& other) const;
	friend istream& operator>>(istream& in, const complex&);
	friend ostream& operator<<(ostream& iout, const complex&);
};



