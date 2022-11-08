#pragma once
#include <iostream>
using namespace std;

class discover {
public:
	set(string, int, double);
	void print() const;
	discover() const;
	discover(string, int, double);
	set(string, int, double);

private:
	string type;
	int l;
	double w;
}

