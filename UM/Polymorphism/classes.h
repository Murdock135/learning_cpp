#pragma once
#include <iostream>
using namespace std;

class baseClass
{
public:
	baseClass(int val) :x(val) { }
	virtual void info()
	{
		cout << "Info member function of base class" << endl;
	}
	virtual ~baseClass() { cout << "Destructing base \n"; }
protected:
	int x;
};

class derivedClass1 : public baseClass
{
public:
	derivedClass1(int val) :baseClass(val) { }
	void info() {
		cout << "Info member function of derived class 1" << endl;
	}
};

class derivedClass2 : public baseClass
{
public:
	derivedClass2(int val) :baseClass(val) { }
	void info() {
		cout << "Info member function of derived class 2" << endl;
	}
};