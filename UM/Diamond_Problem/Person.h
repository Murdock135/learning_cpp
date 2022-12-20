#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Person {
public:
	Person(string n) :name(n) {}
protected:
	string name;
};

class Teacher : virtual public Person {
private:
public:
	Teacher(string n) : Person(n) {
		srand(time(0));
		staffID = 1000 + rand() % 10000;
	}
protected:
	int staffID;
};

class Student : virtual public Person
{
public:
	Student(string n) : Person(n) {
		srand(time(0));
		studentID = 10000 + rand() % 100000;
	}
	void printInfo() const {
		cout << "Name: " << name << "; Student ID: " <<
			setfill('0') << setw(5) << studentID << endl;
	}
protected:
	int studentID;
};

class Tutor : public Teacher, public Student{
public:
Tutor(string n) : Person(n), Teacher(n), Student(n) { }
void printInfo() const {
	cout << "Name: " << name << "; Staff ID: " << setfill('0')
	<< setw(5) << staffID << "; Student ID: " << setfill('0')
	<< setw(5) << studentID << endl;
}
};