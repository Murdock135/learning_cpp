// bar_chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arrSize = 11;
    int arr[arrSize] = { 0,3,0,0,0,0,1,2,4,2,1 };

    for (int i = 0; i < arrSize; i++) {
        if (i == 0)
            cout << "0-9: ";
        else if (i == 10)
            cout << "100: ";
        else
            cout << i * 10 << "-" << (i * 10) + 9 << ":";
        for (int j = 0; j < arr[i]; j++) {
            cout << "-";
        }
        cout << endl;
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
