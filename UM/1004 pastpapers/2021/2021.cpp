// 2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double calculate(double marks[], double markDiff[], int numOfStudents) {
    double sum{}, ave{};
    for (int i = 0; i < numOfStudents; i++) {
        sum += marks[i];
        ave = sum / (i + 1);
    }

    for (int i = 0; i < numOfStudents; i++) {
        markDiff[i] = marks[i] - ave;
    }
    return ave;
}
int main()
{
    const int SIZE = 50;
    double marks[SIZE] = {77,63,85,91,75,52};
    double markDiff[SIZE] = {};

    int numOfStudents;
    bool err = false;
    cout << "Enter number of participants: (1-50)";
    do {
        cin >> numOfStudents;
        if (numOfStudents > 50 || numOfStudents < 1) {
            err = true;
            cout << "Error, enter value between 1-50: ";
        }
        else {
            err = false;
        }
    } while (err == true);
    cout << calculate(marks, markDiff, 6) << endl;

    for (int i = 0; i < 6; i++) {
        cout << markDiff[i] << endl;
    }

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
