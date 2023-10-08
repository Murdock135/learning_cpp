// decimal_to_binary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "decimal_to_binary.h"
using namespace std;

int main()
{
    int bin;
    cout << "Enter an binary number: ";
    cin >> bin;
    int dec{};
    int i{ 0 };
    while (bin > 0) {
        cout << "bin: " << bin << endl;
        int digit = bin % 10;
        cout << "digit: " << digit << endl;
        dec = dec + digit * pow(2, i);
        cout << "decimal: " << dec << endl;
        bin /= 10;
        i++;
    }
    cout << "Ans: " << dec << endl;
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
