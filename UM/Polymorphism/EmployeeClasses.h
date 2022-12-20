#pragma once
#include <iostream>
using namespace std;

class Employee {
private:
	string firstname, lastname, socialSecurity;
public:
	Employee(const string& f, const string& l , const string& ssn) : firstname(f), lastname(l), socialSecurity(ssn) {}
	virtual ~Employee() {};

	void setFirstName(const string& f) { firstname = f; }
	string getFirstName() const { return firstname; }

	void setLasttName(const string& l) { lastname = l; }
	string getLastName() const { return lastname; }

	void setsocialSecurity(const string& s) { socialSecurity = s; }
	string getsocialSecurity() const { return socialSecurity; }

	virtual double earnings() const = 0; // pure virtual
	virtual void print() const {
		cout << getLastName() << ", " << getFirstName() << endl;
		cout << "Social Security: " << getsocialSecurity() << endl;

	}
};

class SalariedEmployee : public Employee {
private:
	double weeklySalary;
public:
	SalariedEmployee(const string& f, const string& l, const string& s, const double& sal = 0) : Employee(f,l,s), weeklySalary(sal) {}
	virtual ~SalariedEmployee() {};

	void setWeeklySalary(double w) { weeklySalary = w; }
	double earnings() const { return weeklySalary; }
	void print() const {
		cout << "Salaried Employee: ";
		Employee::print();
		cout << "Weekly Salary = " << earnings() << endl;

	}
};