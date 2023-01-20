// Team members: Saifeddine Mejri S2162835, Muhamamd Ashraf Bin Mohd Saifullizan 17153641, Qazi Zarif Ul Islam (17143014/1)
// assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
// List of all functions used in our code
void menu1(string, string arrayData[][7], int rows);
void menu2(string arrayData[][7], const int rows);
void menu3(string arrayData[][7], string randomizedArray[][7], const int rows);
void menu4();
void menu5();
void menu6();
void menu7(string);
int getInput();
int getListSize(string arrayData[][7], const int rows);
bool isMaxed(string group[], int lastIndex);
void groupingAlgo(string array[][7]);
bool isIn(string studentID, string group[]);
bool isIn2(string studentID, string array[][7], int rows);
int* createRandomSequence(const int size);

//Important note: Please change the filepath of the csv files accordingly.
string filePath1 = "C:\\Users\\kople\\Documents\\Personal Git repos\\learning_c++\\UM\\1004 assignments\\assignment 2\\StudentList.csv";
string filePath2 = "C:\\Users\\kople\\Documents\\Personal Git repos\\learning_c++\\UM\\1004 assignments\\assignment 2\\StudentList2.csv";
string students[100][7] = {}; //Initialize student List array. 100 rows because of assumption that there are a maximum of a 100 students
string randomizedStudents[100][7] = {};// This array is filled up by menu 3, a randomized form of the students array.

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
string response;

// design the menu message
int main() {

    cout << "===================================================== \n";
    cout << " \t\tMENU \t \n";
    cout << "Enter 1 to load csv file.\nEnter 2 to display data.\nEnter 3 to randomize the sequence of data and assign groups.\
        \nEnter 4 to assign timetable to students.\nEnter 5 to display timetable for all students.\nEnter 6 to display number of students in each group.\nEnter 7 to exit program." << endl;
    cout << "Enter: ";
    int i = getInput();

    //switch statement allowing the user(s) to pick the menu function they want.
    switch (i)
    {
    case 1:
        menu1(filePath2, students, 100);
        main();
        break;

    case 2:
        menu2(students, 100);
        cout << "---------------------------------------" << endl;
        main();
        break;

    case 3:
        menu3(students, randomizedStudents, 100);
        cout << "After randomizing sequent " << endl;
        cout << "List size = " << getListSize(students, 100) << endl;
        main();
        break;

    case 4:
        groupingAlgo(randomizedStudents);
        cout << "After assigning groups" << endl;
        menu4();
        cout << "---------------------------------------" << endl;
        main();
        break;

    case 5:
        menu5();
        main();
        break;
    case 6:
        menu6();
        main();
        break;

    case 7:
        cout << "Exit Application? Press N or Y " << endl;
        cin >> response;
        menu7(response);
        break;

    default: cout << "Invalid, please choose a valid option." << endl;
        cin.clear();
        main();
        break;

    }

    return i;
}

// function to get input, this is used because cin does not work properly on its own in a loop/recurring function.
int getInput() {
    int i;
    cin >> i;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cerr << "You have to enter an integer: " << endl;
        main();
    }

    return i;
}

// checks if course groups are full
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
    // calculates size of array in terms of elements present. 
    int length = 0;

    for (int i = 0; i < rows; i++) {

        if (arrayData[i][0] == "")
            break;

        ++length;
    }
    return length;
}

int getListSize1D(string arrayData[]) {
    // same function as the one above but for 1 dimensional arrays
    int i = 0;

    while (arrayData[i] != "") {
        ++i;
    }
    return i;
}

void groupingAlgo(string array[][7]) {
    // this is the algorithm to assign groups in menu 4, menu 4 is used to display the students who didn't have a place in either of the groups
    int ListLength = getListSize(array, 100);
    int KIE1001g1_index = 0, KIE1002g1_index = 0, KIE1003g1_index = 0, KIE1004g1_index = 0, KIE1001g2_index = 0, \
        KIE1002g2_index = 0, KIE1003g2_index = 0, KIE1004g2_index = 0;

    for (int i = 0; i < ListLength; i++) { //this loop iterates through the studentList
        string currentStudentID = array[i][0];

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

int* createRandomSequence(const int s) {
    //this function creates a random sequence (array) of integers of size s
    int* randomSequence = new int[s];
    srand(time(0));
    int i = 0;

    while (i < s) {
        bool repeated = false; //set the bool to false every iteration
        int r = rand() % s;

        for (int index = 0; index < i; index++) {
            if (randomSequence[index] == r) {
                repeated = true;
                break;
            }
        }

        if (repeated == false) {
            randomSequence[i] = r;
            ++i;
        }

    }
    return randomSequence;
}

void menu1(string filePath, string arrayData[][7], const int rows) {
    //menu 1, uses ifstream to read csv file and store it in the students array. Important note: Please modify the file name in case of any differences.
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
        getline(record, otherGroup1, ','); //stores extra course that isn't in the timetable
        getline(record, otherGroup2, ','); //stores extra course that isn't in the timetable

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
    //function used to display the student array after it has been loaded with data from the csv source file.
    int listLength = getListSize(arrayData, rows); //get the length of the array
    for (int i = 0; i < listLength; i++) {
        for (int j = 0; j < 7; j++) {
            cout << arrayData[i][j] << " ";
        }
        cout << endl;
    }
}

void menu3(string arrayData[][7], string randomizedArray[][7], const int rows) {
    //this function randomizes the sequence that is found in the original csv file.
    const int listLength = getListSize(arrayData, rows);
    int* randomSequence = createRandomSequence(listLength);
    int index;
    for (int i = 0; i < listLength; i++) {
        index = randomSequence[i];

        for (int c = 0; c < 7; c++) {
            randomizedArray[i][c] = arrayData[index][c];
        }

    }
}

void menu4() {
    //List out the studentID's who did not get a group for the respective courses
    for (int group = 0; group < 4; group++) {
        cout << courses[group] << " could not fit in the following students:" << endl;
        for (int student = 0; student < 100; student++) {
            string currentStudent = students[student][0];
            if ((isIn(currentStudent, groups[0][group]) == false) && (isIn(currentStudent, groups[1][group]) == false))
                cout << currentStudent << endl;
        }
    }
}

void menu5() {
    //lists out every student's timetable, with respect to the groups they are in for each course.
    int gap = 10;
    cout << setw(gap) << " ";
    for (int course = 0; course < 4; course++) {
        cout << setw(gap) << courses[course];
    }

    cout << endl;
    int listLength = getListSize(students, 100);

    for (int i = 0; i < listLength; i++) {
        string currentStudent = students[i][0];
        cout << currentStudent;

        for (int group = 0; group < 4; group++) {
            if (isIn(currentStudent, groups[0][group]) == true)
                cout << setw(gap) << "g1";
            else if (isIn(currentStudent, groups[1][group]) == true)
                cout << setw(gap) << "g2";
            else
                cout << setw(gap) << "--";
        }
        cout << endl;
    }

}

void menu6() {
    //Display the number of students in Group 1 & 2 of KIE1001
    int total_1001g1 = sizeof(KIE1001g1) / sizeof(KIE1001g1[0]);
    cout << "Total Number of Students in Group 1 of KIE1001: " << total_1001g1 << endl;

    int total_1001g2 = sizeof(KIE1001g2) / sizeof(KIE1001g2[0]);
    cout << "Total Number of Students in Group 2 of KIE1001: " << total_1001g2 << endl;

    //Display the number of students in Group 1 & 2 of KIE1002
    int total_1002g1 = sizeof(KIE1002g1) / sizeof(KIE1002g1[0]);
    cout << "Total Number of Students in Group 1 of KIE1002: " << total_1002g1 << endl;

    int total_1002g2 = sizeof(KIE1002g2) / sizeof(KIE1002g2[0]);
    cout << "Total Number of Students in Group 2 of KIE1002: " << total_1002g2 << endl;

    //Display the number of students in Group 1 & 2 of KIE1003
    int total_1003g1 = sizeof(KIE1003g1) / sizeof(KIE1003g1[0]);
    cout << "Total Number of Students in Group 1 of KIE1003: " << total_1003g1 << endl;


    int total_1003g2 = sizeof(KIE1003g2) / sizeof(KIE1003g2[0]);
    cout << "Total Number of Students in Group 2 of KIE1003: " << total_1003g2 << endl;


    //Display the number of students in Group 1 & 2 of KIE1004
    int total_1004g1 = sizeof(KIE1004g1) / sizeof(KIE1004g1[0]);
    cout << "Total Number of Students in Group 1 of KIE1004: " << total_1004g1 << endl;


    int total_1004g2 = sizeof(KIE1004g2) / sizeof(KIE1004g2[0]);
    cout << "Total Number of Students in Group 2 of KIE1004: " << total_1004g2 << endl;

}

void menu7(string response) {
    // function to exit the program
    if (response == "Y" || response == "y")
    {
        exit(0);
    }
    else if (response == "N" || response == "n")
    {
        main();
    }
    else
    {
        cout << "Please choose one of the options.\n";//for invalid inputs 
        main();

    }
}

bool isIn(string studentID, string group[]) {
    // function to find a specific student in a 1 dimensional array.
    bool found = false;
    for (int i = 0; i < 30; i++) {
        if (group[i].find(studentID) != string::npos)
            found = true;
    }
    return found;
}

bool isIn2(string studentID, string array[][7], int rows) {
    // similar function to the one above except this is appilicable to 2 dimensional arrays instead.
    bool found = false;
    for (int i = 0; i < rows; i++) {
        if (array[i][0].find(studentID) != string::npos)
            found = true;
    }
    return found;
}
