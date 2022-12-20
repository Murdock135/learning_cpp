#pragma once
#include <iostream>

using namespace std;

class Counter
{
private:
	int count;
public:
	Counter(int count = 0); // Constructor
	Counter& operator++(); // ++prefix
	const Counter operator++(int dummy); // postfix++
	friend ostream& operator<<(ostream& out, const Counter&);
};

Counter::Counter(int c) : count(c) { }

Counter& Counter::operator++() {
	++count;
	return *this;
}

const Counter Counter::operator++(int dummy) {
	Counter a(*this);
	++count;
	return a;
}

ostream& operator<<(ostream& out, const Counter& c) {
	out << c.count;
	return out;
}