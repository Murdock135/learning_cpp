#pragma once

#include <iostream>
using namespace std;

class daytype {
private:
	string day;
	string days[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
public:
	daytype();
	daytype(string);
	void setday(string);
	void printday();
	string nextday();
	string addDays(int);
};

daytype::daytype(string d) {
	day = d;
	cout << "The day is set to " << day << '\n';
}

void daytype::setday(string d) {
	day = d;
}

void daytype::printday() {
	cout << day << endl;
}

string daytype::nextday() {
	string nextDay;
	for (int i = 0; i < 7; i++) {
		if (days[i] == day)
			nextDay = days[i + 1];
	}
	return nextDay;
}

string daytype::addDays(int numOfDays) {
	int dayNum;
	cout << *days << endl;
	for (int i = 0; i < 7; i++) {
		if (days[i] == day) {
			dayNum = i + 7;
			dayNum = dayNum + numOfDays;
			dayNum = dayNum % 7;
		}
	}
	return days[dayNum];
}