// assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;
void menu1(string, string arrayData[][7], int rows);
void menu2(string arrayData[][7], const int rows);
void menu3(string arrayData[][7], const int rows);
void menu4(string randomizedList[][7], const int rows);
int getListSize(string arrayData[][7], const int rows);
bool isMaxed(string group[], int lastIndex);

string filePath1 = "C:\\Users\\kople\\Documents\\Personal Git repos\\learning_c++\\UM\\1004 assignments\\assignment 2\\StudentList.csv";
string filePath2 = "C:\\Users\\kople\\Documents\\Personal Git repos\\learning_c++\\UM\\1004 assignments\\assignment 2\\StudentList2.csv";
string studentGroups[100][7] = {}; //Initialize student List array. 100 rows because of assumption that there are a maximum of a 100 students
//initialize groups
string KIE1001g1[30] = {};
string KIE1002g1[30] = {};
string KIE1003g1[30] = {};
string KIE1004g1[30] = {};
string KIE1001g2[30] = {};
string KIE1002g2[30] = {};
string KIE1003g2[30] = {};
string KIE1004g2[30] = {};
string* groups[2][4] = { {KIE1001g1, KIE1002g1, KIE1003g1, KIE1004g1}, {KIE1001g2, KIE1002g2, KIE1003g2, KIE1004g2} };



//int main() {
//    cout << groups[1][0][3];
//    return 0;
//}
int main()
{
    cout << "The program to allocate groups to students has started!" << endl;

    menu1(filePath2, studentGroups, 100);
    cout << "Before randomizing sequent" << endl;
    cout << "List size = "<< getListSize(studentGroups, 100) << endl;
    menu2(studentGroups, 100);
    cout << "---------------------------------------" << endl;
    menu3(studentGroups, 100);
    cout << "After randomizing sequent " << endl;
    cout << "List size = " << getListSize(studentGroups, 100) << endl;
    menu2(studentGroups, 100);
    return 0;
}

int menuSelection() {
    int i;
    cout << "Enter 1 to load csv file.\nEnter 2 to display data.\nEnter 3 to randomize the sequence of data and assign groups.\
        \nEnter 4 to assign timetable to students.\nEnter 5 to display timetable for all students.\nEnter 6 to display number\
         of students in each group.\nEnter 7 to exit program.";
    cin >> i;
    if ((i << 1) || (i >> 7))
        i = menuSelection();
    return i;
}

bool isMaxed(string group[], int lastIndex) {
    bool maxed = false;
    if (group[lastIndex] != "")
        maxed = true;
    return maxed;
}

int getListSize(string arrayData[][7], int rows) {
    int length = 0;
    for (int i = 0; i < rows; i++) {
        if (arrayData[i][0] == "")
            break;
        ++length;
    }
    return length;
}

void menu1(string filePath, string arrayData[][7], const int rows) {
    ifstream StudentListcsv;
    StudentListcsv.open(filePath);

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

void menu2(string arrayData[][7], const int rows) {
    int listLength = getListSize(arrayData, rows); //get the length of the array
    for (int i = 0; i < listLength; i++) {
        for (int j = 0; j < 7; j++) {
            cout << arrayData[i][j] << " ";
        }
        cout << endl;
    }
}

void menu3(string arrayData[][7], const int rows) {
    //part 1: Randomize sequence
    srand(time(0));
    int listLength = getListSize(arrayData, rows);
    for (int i = 0; i < listLength; i++) {
        int randomIndex = rand() % listLength;
        string tempRecord[7]; //make a temporary array to store record that will be replaced

        if (arrayData[randomIndex][0] != "") { //check if the record at random index is empty or not
            //store the record that will be replaced later
            for (int c = 0; c < 7; c++) {
                tempRecord[c] = arrayData[randomIndex][c];
            }
        }
        //insert current row's record into the random row/index
        for (int c = 0; c < 7; c++) {
            arrayData[randomIndex][c] = arrayData[i][c];
        }

        //insert the record at random index into the current index to complete the swapping
        for (int c = 0; c < 7; c++) {
            arrayData[i][c] = tempRecord[c];
        }
    }

}

void menu4() {
    int ListLength = getListSize(studentGroups, 100);
    for (int i = 0; i < ListLength; i++) {

    }
}



