#pragma once

#include <iostream>
using namespace std;

class employee {
public:
	void setData(string n = "", string d = "", int a = 0, double p = 0) {
		name = n;
		department = d;
		age = a;
		pay = p;
	}
	void setName(string n) { name = n; }
	string getName() const { return name; }
	void setDepartment(string dept) { department = dept; }
	string getDepartment() const { return department; }
	void setAge(int a) { age = a; }
	int getAge() const { return age; }
	void setPay(double p) { pay = p; }
	double getPay() const { return pay; }

	employee(string n = "", string d = "", int a = 0, double p = 0):
		name(n), department(d), age(a), pay(p) {}
private:
	string name;
	string department;
	int age;
	double pay;
};

class hourlyEmployee :public employee {
public:
	void setData(string n = "", string d = "", int a = 0, double p = 0, double hrsWrk = 0, double payRate = 0.0) {
		employee::setData(n, d, a, p);
		hoursWorked = hrsWrk;
		hourlyPayRate = payRate; }
	void setHoursWorked(double hrsWk) { hoursWorked = hrsWk; }
	double getHoursWorked() const { return hoursWorked; }
	void setHourlyPayRate(double payRate) { hourlyPayRate = payRate; }
	double getHourlyPayRate() const { return hourlyPayRate; }
	void setPay() {
		if (hoursWorked >= 0 && hourlyPayRate >= 0) {
			double pay = hoursWorked * hourlyPayRate;
			employee::setPay(pay);
		}
	}
	hourlyEmployee(string n = "", string d = "", int a = 0, double p = 0, double hrsWk = 0, double payRate = 0.0)
		: employee(n, d, a, p), hoursWorked(hrsWk), hourlyPayRate(payRate) {}
private:
	double hoursWorked;
	double hourlyPayRate;
};
