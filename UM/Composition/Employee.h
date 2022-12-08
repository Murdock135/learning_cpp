#pragma once
#include <iostream>
#include "Date.h"

using namespace std;

class Employee {

public:
	Employee( string fname,  string lname,  Date birthDate,  Date hireDate);
	void print() const;
private:
	string firstname, lastname;
	const Date birthdate;
	const Date hireDate;
};

Employee::Employee( string fname, string lname, Date birthDate, Date hireDate):
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
