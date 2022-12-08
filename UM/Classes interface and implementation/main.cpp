// Classes interface and implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Gradebook.h"
#include "Time.h"
#include "rectangle.h"
using namespace std;

int main()
{
    //Gradebook course;
    //course.printMsg();
    //Time t1(1, 34, 34);

    //SUBTOPIC: this pointer
    //Time t;
    //Time t2;
    //t2 = t.setHour2(10).setMin2(30);
    ////t.setHour(10);
    ////t.setMinute(30);

    //int t2_hour = t2.getHour();
    //int t2_min = t2.getMinute();
    //cout << "time of t2: ";
    //cout << t2_hour << " " << t2_min;

    //SUBTOPIC: Book example 13-3
    rectangle myRectangle;
    rectangle yourRectangle;

    cout << "myRectangle: " << endl;
    myRectangle.setLength(15.25).setWidth(12.00);
    myRectangle.print();
    cout << endl;

    cout << "yourRectangle: " << endl;
    yourRectangle.setLength(18.50);
    yourRectangle.setWidth(7.50);
    yourRectangle.print();
    cout << endl;

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
