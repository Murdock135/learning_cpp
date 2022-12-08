#pragma once
#include <iostream>
using namespace std;

class Account {
public:
	virtual void func1() const = 0;
private:
	string number;
	double balance;
};