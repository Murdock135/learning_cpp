#pragma once

#include <iostream>
using namespace std;

class ticTacToe {
private:
	int board[3][3];
	bool player1, player2, tie;
	static int moveCount; //if moveCount is odd, then it's player 1, if it's even, then it's player 2. Play the game while either moveCount < 9 or a player wins (implement in main)
public:
	ticTacToe();
	void printBoard();
	void request_move();
	bool checkWin();
	bool checkTie();
	void whoWon();
	void whosTurn();
	static int getmoveCount();
};

int ticTacToe::moveCount = 0; //initialize static var

ticTacToe::ticTacToe() {
	player1 = false, player2 = false, tie = true;

	for (int column = 0; column < 3; column++) {
		for (int row = 0; row < 3; row++) {
			board[row][column] = 0;
		}

	}
}

int ticTacToe::getmoveCount() {
	return moveCount;
}

void ticTacToe::whosTurn() {
	if (moveCount % 2 != 0) { //odd, hence player1
		cout << "Player 1: " << endl;
	}
	else if (moveCount % 2 == 0) {//even, hence player2
		cout << "Player 2: " << endl;

	}

}

void ticTacToe::whoWon() {
	if (player1 == true && player2 == false) {
		cout << "player 1 won" << endl;
	}
	else if (player1 == false && player2 == true) {
		cout << "player 2 won" << endl;
	}
	else
		cout << "match tied" << endl;
}

void ticTacToe::printBoard() {
	for (int column = 0; column < 3; column++) {
		for (int row = 0; row < 3; row++) {
			cout << board[row][column];
		}
		cout << '\n';
	}
	cout << endl;
}


void ticTacToe::request_move() {
	moveCount++; //increase moveCount
	whosTurn();

	int row, column;
	cout << "Which block you want ah? (input 2 numbers from 0-2): ";
	cin >> row;
	cin >> column;

	if (row > 2 || column > 2) {
		cout << "Enter number from 0-2" << endl;
		moveCount--; //reset moveCount to previous value
		this->request_move(); //request move again (recursion)!!!
	}

	if (board[row][column] == 0) {
		if (moveCount % 2 != 0) { //odd, hence player1
			board[row][column] = 1;
		}
		if (moveCount % 2 == 0) {//even, hence player2
			board[row][column] == 2;
		}
	}
	else
	{
		cout << "This slot is occupied. Pick a different slot";
		moveCount--;
		this->request_move();
	}

}

bool ticTacToe::checkWin() {
	bool win = false;

	//check row win
	for (int row = 0; row < 2; row++) {
		if (board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][2] == 1) {
			player1 = true;
		}
		if (board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][2] == 2) {
			player2 = true;
		}
	}
	//check column win
	for (int column = 0; column < 2; column++) {
		if (board[0][column] == board[1][column] && board[1][column] == board[2][column] && board[2][column] == 1) {
			player1 = true;
		}
		if (board[0][column] == board[1][column] && board[1][column] == board[2][column] && board[2][column] == 2) {
			player2 = true;
		}
	}

	//check diagonal win
	int slots[3] = { 0 };
	int i = 0;
	for (int column = 0; column < 3; column++) {
		for (int row = 0; row < 3; row++) {
			if (column + row == 4) { //diagonal element indices always add up to 4 in a 3x3 matrix
				slots[i] = board[row][column]; //store diagonal element in an array
				i++;
			}
		}

	}
	if (slots[0] == slots[1] && slots[1] == slots[2] && slots[2] == 1) { //diagonal elements equal?
		player1 = true;
	}
	if (slots[0] == slots[1] && slots[1] == slots[2] && slots[2] == 2)
	{
		player2 = true;
	}

	player1 == true ? win = player1 : win = player2;
	return win;
}

bool ticTacToe::checkTie() {
	if (player1 == false && player2 == false)
		tie == true;
	return tie;
}
