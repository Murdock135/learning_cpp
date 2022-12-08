#pragma once
#include <iostream>
using namespace std;
#include "student.h";


class student; //forward declaration

class undergrad {
	friend void setAge(undergrad* , int);
private:
	student* stuPtr;
public:
	undergrad();
	string getName();
	int getAge();
	string getGender();

	void setName(string);
	void setGender(string);
	void setAge(int);

};

undergrad::undergrad() {
	cout << "***Undergraduate Student***" << endl;
	stuPtr = new student;
}

string undergrad::getName() {
	return stuPtr->getName();
}
int undergrad::getAge() {
	return stuPtr->getAge();
}
string undergrad::getGender() {
	return stuPtr->getGender();
}
void undergrad::setName(string Name) {
	stuPtr->setName(Name);
}
void undergrad::setAge(int age) {
	stuPtr->setAge(age);
}
void undergrad::setGender(string gender) {
	stuPtr->setGender(gender);
}
