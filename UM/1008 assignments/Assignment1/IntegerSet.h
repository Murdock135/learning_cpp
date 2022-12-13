#pragma once
#include <iostream>
using namespace std;


class IntegerSet {
private:
	bool *dynamicSet;
	int size;
public:
	IntegerSet(int size);
	IntegerSet(bool set[], int size);
	IntegerSet &unions(IntegerSet);
	IntegerSet &intersection(IntegerSet);
	IntegerSet &insert(int);
	void setVal(int, bool);
	void remove(int);
	void printSet();
	void isEqualTo(IntegerSet);

	IntegerSet &operator = (const IntegerSet& otherSet);
	bool &operator [] (int index);
};

IntegerSet::IntegerSet(int size) {
	this->size = size;
	dynamicSet = new bool[size];
	for (int i = 0; i < size; i++) {
		dynamicSet[i] = false;
	}
}

IntegerSet::IntegerSet(bool set[], int size) {
	this->size = size;

	dynamicSet = new bool[size];

	for (int i = 0; i < size; i++) {
		dynamicSet[i] = false;
	}

	for (int i=0; i < size;i++) {
		dynamicSet[i] = set[i];
	}
	
}

bool& IntegerSet::operator[](int index) {
	if (index > size)
		throw invalid_argument("Index out of bounds");
	else
		return dynamicSet[index-1];
}

IntegerSet &IntegerSet::insert(int index) {
	bool* oldSet = dynamicSet;
	IntegerSet newSet(index); //create a newset where the size is equal to the index you want to insert 'true' to

	if (index-size >= 0) {
		newSet.setVal(index-1, true);
		
		for (int i = 0; i < size; i++) {
			newSet[i] = oldSet[i]; //need operator overloading
		}
		return newSet;
	}

}

void IntegerSet::setVal(int index, bool val) {
	//use only to set existing members to a different value
	if (index >= size)
		throw invalid_argument("Index is out of range");
	else
		dynamicSet[index-1] = val;
}

void IntegerSet::remove(int i) {
	dynamicSet[i] = false;
}

void IntegerSet::printSet() {
	int i = 0;
	cout << "{";
	do {
		
		cout << dynamicSet[i]; //might need to use cin.ignore
		if (i < size-1)
			cout << ",";
		i++;
	} while (i < size);
	cout << "}";
}
