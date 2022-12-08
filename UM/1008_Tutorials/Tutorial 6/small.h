#pragma once
#include <iostream>
using namespace std;

class small {
public:
	void print() const;
	int add() { return x + y; }
	small(){}
	small(int a, int b) { x = a; y = b; }
private:
	int x = 0, y = 0;
};
void small::print() const {
	cout << "small: -- " << endl
		<< "x: " << x << " , y = " << y << endl;
}


class notSmall: public small {
public:
	void print() const;
	int add();
	notSmall() {}
	notSmall(int a,int b, int c) : small(a, b), z(c) {}
private:
	int z;
};
void notSmall::print() const {
	small::print();
	cout << "noSmall --- z: " << z << endl;
}
int notSmall::add() {
	return z + small::add();
}