// assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
void menu1(string, string arrayData[][7], int rows);
void menu2(string arrayData[][7], const int rows);
void menu3(string arrayData[][7], const int rows);
void menu4();
void menu5();
int getListSize(string arrayData[][7], const int rows);
bool isMaxed(string group[], int lastIndex);
void groupingAlgo();
bool isIn(string studentID, string group[]);

string filePath1 = "C:\\Users\\kople\\Documents\\Personal Git repos\\learning_c++\\UM\\1004 assignments\\assignment 2\\StudentList.csv";
string filePath2 = "C:\\Users\\kople\\Documents\\Personal Git repos\\learning_c++\\UM\\1004 assignments\\assignment 2\\StudentList2.csv";
string students[100][7] = {}; //Initialize student List array. 100 rows because of assumption that there are a maximum of a 100 students
string randomizedStudents[100][7] = {};
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
string groupNames[2][4] = { {"KIE1001g1","KIE1002g1","KIE1003g1","KIE1004g1"},{"KIE1001g2","KIE1002g2","KIE1003g2","KIE1004g2"} };
string courses[4] = { "KIE1001", "KIE1002","KIE1003","KIE1004" };



//int main() {
//    string* groups[2][4] = { {KIE1001g1, KIE1002g1, KIE1003g1, KIE1004g1}, {KIE1001g2, KIE1002g2, KIE1003g2, KIE1004g2} };
//
//    cout << groups[0][0];
//    return 0;
//}

int main()
{
    cout << "The program to allocate groups to students has started!" << endl;

    menu1(filePath2, students, 100);
    cout << "Before randomizing sequent" << endl;
    cout << "List size = "<< getListSize(students, 100) << endl;
    menu2(students, 100);
    cout << "---------------------------------------" << endl;
    menu3(students, 100);
    cout << "After randomizing sequent " << endl;
    cout << "List size = " << getListSize(students, 100) << endl;
    menu2(students, 100);
    cout << "---------------------------------------" << endl;
    cout << "After assigning groups" << endl;
    groupingAlgo();
    menu4();
    cout << "---------------------------------------" << endl;
    menu5();

    return 0;
}

int menuSelection() {
    int i;
    cout << "Enter 1 to load csv file.\nEnter 2 to display data.\nEnter 3 to randomize the sequence of data and assign groups.\
        \nEnter 4 to assign timetable to students.\nEnter 5 to display timetable for all students.\nEnter 6 to display number\
         of students in each group.\nEnter 7 to exit program.";
    cin >> i;
    if ((i < 1) || (i > 7))
        i = menuSelection();
    return i;
}

bool isMaxed(string group[], int lastIndex) {
    bool maxed;
    if (group[lastIndex] != "") {
        maxed = true;
    }
    else
         maxed = false;
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

void groupingAlgo() {
    int ListLength = getListSize(students, 100);
    int KIE1001g1_index = 0, KIE1002g1_index = 0, KIE1003g1_index = 0, KIE1004g1_index = 0, KIE1001g2_index = 0, \
        KIE1002g2_index = 0, KIE1003g2_index = 0, KIE1004g2_index = 0;

    for (int i = 0; i < ListLength; i++) { //this loop iterates through the studentList
        string currentStudentID = students[i][0];

        //assigning groups for KIE1001 and KIE1002
        if (isMaxed(KIE1001g1, 29) == false) {
            KIE1001g1[KIE1001g1_index] = currentStudentID;
            ++KIE1001g1_index;

            if (isMaxed(KIE1002g1, 29) == false) {
                KIE1002g1[KIE1002g1_index] = currentStudentID;
                ++KIE1002g1_index;
            }
        }
        else {
            if (isMaxed(KIE1001g2, 29) == false) {
                KIE1001g2[KIE1001g2_index] = currentStudentID;
                ++KIE1001g2_index;

                if (isMaxed(KIE1002g2, 29) == false) {
                    KIE1002g2[KIE1002g2_index] = currentStudentID;
                    ++KIE1002g2_index;
                }
            }

        }

        //assigning groups for KIE1003 and KIE1004
        if (isMaxed(KIE1003g1, 29) == false) {
            KIE1003g1[KIE1003g1_index] = currentStudentID;
            ++KIE1003g1_index;

            if (isMaxed(KIE1004g1, 29) == false) {
                KIE1004g1[KIE1004g1_index] = currentStudentID;
                ++KIE1004g1_index;
            }
        }
        else {
            if (isMaxed(KIE1003g2, 29) == false) {
                KIE1003g2[KIE1003g2_index] = currentStudentID;
                ++KIE1003g2_index;
                if (isMaxed(KIE1004g2, 29) == false) {
                    KIE1004g2[KIE1004g2_index] = currentStudentID;
                    ++KIE1004g2_index;

                }
            }
        }
    }
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
        
        
        students[i][0] = studentID;
        students[i][1] = KIE1001group;
        students[i][2] = KIE1002group;
        students[i][3] = KIE1003group;
        students[i][4] = KIE1004group;
        students[i][5] = otherGroup1;
        students[i][6] = otherGroup2;
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
    //List out the studentID's who did not get a group for the respective courses
    for (int group = 0; group < 4; group++) {
        cout << courses[group] << "could not fit in the following students:" << endl;
        for (int student = 0; student < 100; student++) {
            string currentStudent = students[student][0];
            if ((isIn(currentStudent, groups[0][group]) == false) && (isIn(currentStudent, groups[1][group]) == false))
                cout << currentStudent << endl;
        }
    }
}

void menu5() {
    int gap = 10;
    cout << setw(gap) << " ";
    for (int course = 0; course < 4; course++) {
        cout << setw(gap) << courses[course];
    }
    //for (int row = 0; row < 2; row++) {
    //    for (int group = 0; group < 4; group++) {
    //        cout << groupNames[row][group] << " students:" << endl;;

    //            for (int student = 0; student < 30; student++) {
    //                cout << groups[row][group][student] << endl;
    //            }
    //    }
    //}
    
    cout << endl;
    for (int i = 0; i < 100; i++) {
        string currentStudent = students[i][0];
        cout << currentStudent;
        for (int group = 0; group < 4; group++) {
                if (isIn(currentStudent, groups[0][group]) == true)
                    cout << setw(gap) << "g1";
                else if (isIn(currentStudent, groups[1][group]) == true)
                    cout << setw(gap) << "g2";
                else
                    cout << setw(gap) << "--";
                //check KIE1001
        }
        cout << endl;
    }
    
}

bool isIn(string studentID, string group[]) {
    bool found = false;
    for (int i = 0; i < 30; i++) {
        if (group[i].find(studentID)!=string::npos)
            found = true;
    }
    return found;
}



