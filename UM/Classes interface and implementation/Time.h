#pragma once
#include <iostream>
using namespace std;

class Time {
public:
	Time();
	Time(int, int, int);
	
	// set functions
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	// get functions
	int getHour();
	int getMinute();
	int getSecond();

	void printStandard();
private:
	int hour, minute, second;
};

