#pragma once
#include <iostream>
#include "Employee_friend.h"
using namespace std;

class Employer {
public:
	Employer() {};
	int getCount(Employee_friend& e);
};

int Employer::getCount(Employee_friend& e) {
	return e.count;
}