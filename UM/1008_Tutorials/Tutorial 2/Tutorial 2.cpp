// Tutorial 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include "die.h"
#include "daytype.h"
#include "ticTacToe.h"


int main()
{
	//TUTORIAL 3
	// Q2
	//daytype day1("Tuesday");
	//int add = 13;
	//string calcDay = day1.addDays(add);
	//cout << "After adding " << add << "days, it is : " << calcDay;

	//Q4
	die dice[10]; //instantiating  10 objects
	int usersum, count = 0 ;
	cout << "Desired sum: ";
	cin >> usersum;
	cout << endl;

	for (int iteration = 0; iteration < 100; iteration++) {
		int rollSum = 0;

		for (int i = 0; i < 10; i++) {
			dice[i].roll();
			int roll = dice[i].getNum();
			rollSum += roll;
		}
		//cout << rollSum << endl;
		if (rollSum == usersum)
			count++;
	}
	cout << usersum << " was rolled " << count << " times";


	//Q5
	ticTacToe game1;
	int move = game1.getmoveCount();

	do {
		game1.printBoard();

		game1.request_move();
		move = game1.getmoveCount();
		cout << "moveCount: " << move << endl;

		if (game1.checkWin() == true) {
			game1.whoWon();
			break;
		}
	} while (move < 9);

	cout << "GAME OVER";


	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
