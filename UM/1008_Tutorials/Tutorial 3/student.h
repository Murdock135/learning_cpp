#pragma once
#include <iostream>
using namespace std;

class student {
private:
	string name, gender;
	int age;

public:
	student();
	student(string, int, string);
	string getName();
	int getAge();
	string getGender();
	
	void setName(string);
	void setGender(string);
	void setAge(int);

};
student::student() {
	name = "John Doe";
	age = 20;
	gender = 'M';
}

student::student(string name, int age, string gender) :
	name(name),
	gender(gender),
	age(age)
{}

string student::getName() {
	return name;
}
int student::getAge() {
	return age;
}
string student::getGender() {
	return gender;
}
void student::setAge(int age) {
	this->age = age;
}
void student::setName(string name) {
	this->name = name;
}
void student::setGender(string gender) {
	this->gender = gender;
}


