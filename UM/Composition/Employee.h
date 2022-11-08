#pragma once
#include <iostream>
#include "Date.h"

using namespace std;

class Employee {

public:
	Employee(const string& fname, const string& lname, const Date& birthDate, const Date& hireDate);
	void print() const;
private:
	string firstname, lastname;
	const Date birthdate;
	const Date hireDate;
};

Employee::Employee(const string& fname, const string& lname, const Date& birthDate, const Date& hireDate):
	firstname(fname),
	lastname(lname),
	birthdate(birthDate),
	hireDate(hireDate)
{}

void Employee::print() const {
	cout << lastname << ", " << firstname << " Hired: ";
	hireDate.print();
	cout << " Birthday: ";
	birthdate.print();
	cout << endl;
}
