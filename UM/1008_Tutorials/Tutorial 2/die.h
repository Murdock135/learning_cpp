#pragma once

#include <iostream>
#include <ctime>
using namespace std;

class die {
private:
	int num;
public:
	die();
	void roll();
	int getNum() const;
};

die::die() {
	srand(time(0));
	num = 1;
}

void die::roll() {
	num = 1 + rand() % 6;// num from 1-6
}

int die::getNum() const {
	return num;
}