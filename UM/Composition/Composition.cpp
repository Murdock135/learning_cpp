// Composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
#include "Employee.h"
#include "Point.h"
#include "Location.h"
#include "Employee_friend.h"
#include "Employer.h"
using namespace std;

int main()
{
    cout << "EXAMPLE 2 " << endl;
    //EXAMPLE 2
    Date birth(7, 24, 2000);
    Date hire(3, 12, 2020);
    Employee manager("Bob", "Blue", birth, hire);
    cout << endl;
    manager.print();
    cout << '\v' << endl;

    
    //EXAMPLE 1
    cout << "EXAMPLE 1 " << endl;
    Point p1(2, 7);
    Point p2(5, 9);
    Location loc(p1, p2);

    cout << "Distance between p1 and p2 = ";
    cout << loc.distance();

    cout << '\v' << endl;
    //SUBTOPIC: FRIEND FUNCTIONS
    Employee_friend e1(5);
    Employee_friend e2(10);

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
