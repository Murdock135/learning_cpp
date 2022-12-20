// Operator Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Counter.h"
using namespace std;

int main()
{
    ////slide 3
    //string s1 = "Happy ";
    //string s2 = "Birthday";
    //string s3;
    //cout << "Assigning s1 to s3;" << endl;
    //s3 = s1; // assign s1 to s3
    //cout << "s3 is \"" << s3 << "\"";
    //cout << "\ns1 += s2 yields s1 =";
    //s1 += s2; // test overloaded concatenation
    //cout << s1;
    //string s4(s1); // test copy constructor
    //cout << "\ns4 = " << s4 << endl;

    ////Example 1
    //Point p1(1, 2), p2(4, 5);
    //// Use overloaded operator +
    //Point p3 = p1 + p2;
    //p1.print(); // (1,2)
    //p2.print(); // (4,5)
    //p3.print(); // (5,7)
    //// Invoke via usual dot syntax, same as p1+p2
    //Point p4 = p1.operator+(p2);
    //p4.print(); // (5,7)
    //// Chaining
    //Point p5 = p1 + p2 + p3 + p4;
    //p5.print(); // (15,21)

    //Overloading stream operators

    //overloading prefix and sufix
    Counter c1;
    cout << c1 << endl;

    cout << "Prefix adding to c1 gives = ";
    cout << ++c1 << endl;

    cout << "Postfix adding to c1 gives = ";
    cout << c1++ << endl;
    cout << c1 << endl;

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
