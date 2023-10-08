// linear_interpolation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool lin_interpolation(int p1, int p2, int fp1, int fp2, int p3){
    bool onLine = false;
    double fa = (double)fp1, fc = (double)fp2, a = (double)p1, c = (double)p2, b = (double)p3;
    double m1 = (fc - fa) / (c - a);
    return onLine;
}

int main()
{
    std::cout << "Hello World!\n";
}

