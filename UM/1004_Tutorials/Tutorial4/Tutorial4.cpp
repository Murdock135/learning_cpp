// Tutorial4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //2
    //int rank;
    //switch (rank) {
    //case 1:
    //case 2:
    //    cout << "Lower division" << endl;
    //    break;
    //case 3:
    //case 4:
    //    cout << "upper division" << endl;
    //    break;
    //case 5:
    //    cout << "Graduate Student" << endl;
    //default:
    //    cout << "Invalid rank" << endl;
    //}

    //3
    //double largestNum = 0;
    //double a, b, c;
    //cout << "Enter 3 nums: ";
    //cin >> a >> b >> c;

    //if (a > largestNum) {
    //    largestNum = a;
    //    if (b > largestNum) {
    //        largestNum = b;
    //        if (c > largestNum) {
    //            largestNum = c;
    //        }
    //    }
    //}
    //cout << largestNum << endl;

    //4
    //cout << "Enter your birth year and month: " << endl;
    //int year, month, year2, month2, age_year, age_month;
    //cin >> year >> month;
    //cout << "Enter your year and month for which you wish to know your age: " << endl;
    //cin >> year2 >> month2;

    //age_year = year2 - year;
    //age_month = abs(month - month2);

    //if (year2 < year) {
    //    cout << "You weren't born then" << endl;
    //}
    //else
    //    cout << "Your age in " << year2 << '/' << month2 << " will be " << age_year << " years " << age_month << " months";

    //5
    //double distance1_eye, distance2_eye ,distance3_eye,
    //    distance1_chinnose, distance2_chinnose, distance3_chinnose;

    //cout << "Enter values in cm." << endl;
    //cout << "Enter eye distance and nose-chin distance for Image 1: ";
    //cin >> distance1_eye >> distance1_chinnose;
    //cout << "Enter eye distance and nose-chin distance for Image 2: ";
    //cin >> distance2_eye >> distance2_chinnose;
    //cout << "Enter eye distance and nose-chin distance for Image 3: ";
    //cin >> distance3_eye >> distance3_chinnose;

    //double ratio1, ratio2, ratio3;
    //ratio1 = distance1_chinnose / distance1_eye;
    //ratio2 = distance2_chinnose / distance2_eye;
    //ratio3 = distance3_chinnose / distance3_eye;

    //if (abs(ratio1 - ratio2) < abs(ratio1 - ratio3))
    //    cout << "Best match is between image 1 and 2";
    //else
    //    cout << "Best match is between image 1 and 3";

    //6
    int seat, facingSeat;
    bool WS=false, MS=false, AS=false;
    cout << "Enter your seat number (1-108): ";
    cin >> seat;

    if (seat % 6 == 0 || seat % 6 == 1) {
        WS = true;
        if (seat % 6 == 0) {
            facingSeat = seat - 11;
        }
        else if (seat % 6 == 1) {
            facingSeat = seat + 11;
        }
    }

    if (seat % 3 == 0 || seat % 3 == 1) {
        AS = true;
        if (seat % 3 == 0) {
            facingSeat = seat + 7;
        }
        else if (seat % 3 == 1) {
            facingSeat = seat - 7;
        }

    }

    if (seat % 2 == 0 || seat % 2 == 1) {
        MS = true;
        if (seat % 2 == 0) {
            facingSeat = seat + 9;
        }
        else if (seat % 2 == 1) {
            facingSeat = seat - 9;
        }
    }

    if (WS)
        cout << "Your seat is " << seat << " and the seat facing you is " << facingSeat << " (WS)";
    else if (MS)
        cout << "Your seat is " << seat << " and the seat facing you is " << facingSeat << " (MS)";
    else if (AS)
        cout << "Your seat is " << seat << " and the seat facing you is " << facingSeat << " (AS)";


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
