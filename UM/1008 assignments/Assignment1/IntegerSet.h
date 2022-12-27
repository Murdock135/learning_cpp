#pragma once
#include <iostream>
using namespace std;


class IntegerSet {
private:
	bool* dynamicSet;
	int size;
public:
	IntegerSet();
	IntegerSet(int size);
	IntegerSet(bool set[], int size);
	//~IntegerSet() { delete[] dynamicSet; }
	int getSize();
	IntegerSet &unions(IntegerSet&);
	IntegerSet &intersection(IntegerSet&);
	IntegerSet &insert(int);
	void setVal(int, bool);
	void deleteElement(int);
	void printSet();
	void isEqualTo(IntegerSet&);

	IntegerSet &operator = (IntegerSet& otherSet);
	bool &operator [] (int index);
};
IntegerSet::IntegerSet() {
	size = 5;
	dynamicSet = new bool[size];
}

IntegerSet::IntegerSet(int size) {
	this->size = size;
	dynamicSet = new bool[size];
	for (int i = 0; i < size; i++) {
		dynamicSet[i] = false;
	}
}

IntegerSet::IntegerSet(bool set[], int size) {
	this->size = size;

	//create new set with size 'size'.
	dynamicSet = new bool[size];

	for (int i=0; i < size;i++) {
		dynamicSet[i] = set[i];
	}
	
}


bool& IntegerSet::operator[](int index) {
	if (index > size)
		throw invalid_argument("Index out of bounds");
	else
		return dynamicSet[index];
}

IntegerSet &IntegerSet::operator=(IntegerSet& otherSet) {
	delete[] dynamicSet;
	this->size = otherSet.getSize();
	dynamicSet = new bool[size];

	for (int i = 0; i < size; i++) {
		dynamicSet[i] = otherSet[i];
	}
	return *this;
}

int IntegerSet::getSize() {
	return size;
}

void IntegerSet::setVal(int index, bool val = true) {
	//use only to set existing members to a different value
	if (index > size)
		throw invalid_argument("Index is out of range");
	else
		dynamicSet[index - 1] = val;
}

void IntegerSet::deleteElement(int i) {
	dynamicSet[i-1] = false;
}

void IntegerSet::printSet() {
	cout << "{";
	for (int i = 0; i < size; i++) {
		cout << dynamicSet[i];
		if (i < size - 1)
			cout << ", ";
	}
	cout << "}" << endl;
}

IntegerSet &IntegerSet::insert(int index) {
	//store oldset
	bool* oldSet = dynamicSet;
	int lastIndexOld = size - 1;
	//create a new set
	//bool* newSet = new bool[newSetsize];

	if (index > lastIndexOld) {
		int newSetsize = index + 1;
		IntegerSet newSet(newSetsize);

		for (int i = 0; i < size; i++) {
			newSet[i] = oldSet[i]; //need operator overloading for [] operator
		}
		newSet[index] = 1;

		*this = newSet;
		return *this;
	}

	if (index < lastIndexOld) {
		dynamicSet[index] = true;
		return *this;
	}

	if (index == lastIndexOld)
		cout << "Number already exists in Set" << endl;

}

IntegerSet& IntegerSet::unions(IntegerSet& otherSet) {
	int otherSize = otherSet.getSize();
	int greaterSize;
	size > otherSize ? greaterSize = size : greaterSize = otherSize;
	IntegerSet UnionSet(greaterSize);

	for (int i = 0; i < size; i++) {
		if (dynamicSet[i] == true)
			UnionSet[i] = true;
	}

	for (int i = 0; i < greaterSize; i++) {
		if (otherSet[i] == true)
			UnionSet[i] = true;

	}
	return UnionSet;
}

IntegerSet& IntegerSet::intersection(IntegerSet& otherSet) {
	int otherSize = otherSet.getSize();
	int greaterSize;
	size > otherSize ? greaterSize = size : greaterSize = otherSize;
	IntegerSet IntersectionSet(greaterSize);

	for (int i = 0; i < size; i++) {
		if ((dynamicSet[i] == true)&&(otherSet[i]==true))
			IntersectionSet[i] = true;
	}

	return IntersectionSet;
}

void IntegerSet::isEqualTo(IntegerSet& otherSet) {
	int otherSize = otherSet.getSize();
	int smallerSize, greaterSize;
	size <= otherSize ? smallerSize = size : smallerSize = otherSize;
	size > otherSize ? greaterSize = size : greaterSize = otherSize;

	int count = 0;
	// first compare only the elements within the bounds of the set that is smaller.
	for (int i = 0; i < smallerSize; i++) {
		if (dynamicSet[i] == otherSet[i])
			count++;
	}

	// then check if the remaining elements of the larger sets are 0.
	if (size>otherSize) {
		for (int i = otherSize; i < size; i++) {
			if (dynamicSet[i] != 0)
				--count;
		}
	}
	else if (otherSize > size) {
		for (int j = size; j < otherSize; j++) {
			if (otherSet[j] != 0)
				--count;
		}
	}
	if (count == smallerSize)
		cout << "The sets are equal" << endl;
	else
		cout << "The sets are NOT equal" << endl;
}

