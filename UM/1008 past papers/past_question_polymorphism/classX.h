#pragma once
#include <iostream>
using namespace std;

class classX {
private:
	int priX;
protected:
	int proX;
public:
	classX(int priX, int proX) : priX(priX), proX(proX) {}
};

class classY { // abstract class
private:
	int priY;
protected:
	int proY;
public:
	classY(int priY, int proY) : priY(priY), proY(proY) {}
	virtual void calculate() const = 0;
	int getpriY(); //need to access private member
};
int classY::getpriY() {
	return priY;
}

class classZ :public classY {
protected:
	int proZ;
public:
	classZ(int priY, int proY, int proZ) : classY(priY, proY), proZ(proZ) {}
	void calculate();
};
void classZ::calculate() {
	cout << "The sum for class Z is: ";
	cout << proZ + proY + classY::getpriY();
}

class classA :private classX, protected classZ {

};
