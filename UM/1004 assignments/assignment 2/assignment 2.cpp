// assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string filePath1 = "C:\\Users\\kople\\Documents\\Personal Git repos\\learning_c++\\UM\\1004 assignments\\assignment 2\\StudentList.csv";
string filePath2 = "";
string studentGroups[100][7] = {};

void menu1(string, string arrayData[][7], int rows);
void menu2(string arrayData[][7], int rows);

int main()
{
    menu1(filePath1, studentGroups, 100);
    menu2(studentGroups, 100);

    return 0;
}

void menu1(string filePath, string arrayData[][7], int rows) {
    ifstream StudentListcsv;
    StudentListcsv.open(filePath1);

    string line = "";
    int i = 0;
    while (getline(StudentListcsv, line)) {
        string studentID, KIE1001group, KIE1002group, KIE1003group, KIE1004group, otherGroup1, otherGroup2;

        stringstream record(line);
        getline(record, studentID, ',');
        getline(record, KIE1001group, ',');
        getline(record, KIE1002group, ',');
        getline(record, KIE1003group, ',');
        getline(record, KIE1004group, ',');
        getline(record, otherGroup1, ',');
        getline(record, otherGroup2, ',');
        
        
        studentGroups[i][0] = studentID;
        studentGroups[i][1] = KIE1001group;
        studentGroups[i][2] = KIE1002group;
        studentGroups[i][3] = KIE1003group;
        studentGroups[i][4] = KIE1004group;
        studentGroups[i][5] = otherGroup1;
        studentGroups[i][6] = otherGroup2;
        ++i;
        line = "";
    }
}

void menu2(string arrayData[][7], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 7; j++) {
            cout << arrayData[i][j] << " ";
        }
        cout << endl;
    }
}