#pragma once
#include <iostream>
using namespace std;

class course {
	friend void displayCourse(course&);
private:
	string name, code;
public:
	course(string, string);
	void setName(string);
	void setCode(string);
	string getName();
	string getCode();
};
course::course(string n, string c) {
	name = n;
	code = c;
}
void course::setName(string n) {
	name = n;
}
void course::setCode(string c) {
	code = c;
}
string course::getName() {
	return name;
}
string course::getCode() {
	return code;
}
void displayCourse(course& c) {
	cout << " Course: " << c.name << " ( " << c.code << " ) ";
}