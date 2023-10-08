// coin flip consecutive heads.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    bool prev = false;
    bool current = false;
    int i = 1;
    bool both = false;
    while (both==false) {
        if (i % 2 != 0) {
            int r = rand() % 2;
            cout << "r: " << r << endl;
            if (r == 1)
                prev = true;
            else
                prev = false;

            cout << "prev: " << prev << endl;
            cout << "current: " << current << endl;

        }
        else {
            int r = rand() % 2;
            cout << "r: " << r << endl;

            if (r == 1)
                current = true;
            else
                current = false;

            cout << "prev: " << prev << endl;
            cout << "current: " << current << endl;

        }
        if (current == true && prev == true)
            both = true;
        i++;
    }
    cout << i << endl;
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
