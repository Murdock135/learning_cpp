#pragma once
#include <iostream>
using namespace std;

class Date {
public:
	Date(int = 1, int = 1, int = 2000);
	void print() const;
private:
	int month;
	int day;
	int year;
};

Date::Date(int m, int d, int y) :
	month(m), day(d), year(y) {}

void Date::print() const {
	cout << month << '/' << day << '/' << year;
}