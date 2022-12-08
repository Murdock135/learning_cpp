#pragma once
#include <iostream>
#include "Employer.h"
using namespace std;

class Employee_friend {
	friend class Employer;
private:
	int count;
public:
	Employee_friend(int c);
	int getCount();

};

Employee_friend::Employee_friend(int c) {
	count = c;
}