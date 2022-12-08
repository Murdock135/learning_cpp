#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class bankAccount {
private:
	int accNo;
	double balance;
public:
	bankAccount(double initBal);
	double credit(double);
	double debit(double);
	double getBalance() const { return balance; }
	void printInfo() const;
};

bankAccount::bankAccount(double initBal) {
	if (initBal >= 0)
	{
		balance = initBal;
		srand(0);
		accNo = 10000 + rand() % 100000;
	}
	else
		throw invalid_argument(" Initial balance must be positive");
}
double bankAccount::credit(double c) {
	balance = balance + c;
	return balance;
}
double bankAccount::debit(double d) {
	if (balance < d) {
		cout << " Debit amount exceeded account balance." << endl;
	}
	else
	{
		balance = balance - d;
		return balance;
	}
}



