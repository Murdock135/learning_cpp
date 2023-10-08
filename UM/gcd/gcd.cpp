// gcd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int gcd_func(int x, int y) {
    if (y == 0)
        return x;
    return gcd_func(y, x % y);
}

void gcd_func2(int low, int high, int& gcd) {
    for (int i = 1; i < low; i++) {
        cout << "i: "<< i << endl;
        if (high % i == 0 && low % i == 0) {
            gcd = i;
            cout << "gcd: "<< gcd << endl;
        }
    }
}

int main()
{
    cout << gcd_func(28, 20) << endl;
    int gcd{ -1 };
    gcd_func2(20, 28, gcd);
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
