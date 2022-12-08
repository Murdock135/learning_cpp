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
	IntegerSet unions(IntegerSet);
	IntegerSet intersection(IntegerSet);
	void insert(int);
	void remove(int);
	void printSet();
	void isEqualTo(IntegerSet);
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

void IntegerSet::insert(int i) {
	dynamicSet[i] = true;
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
