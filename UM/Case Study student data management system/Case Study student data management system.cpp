// Case Study student data management system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    double marks;
    Student* link;
};

Student* createStudent(string name, int id, double marks) {
    Student* newStudent = new Student;
    newStudent->id = id;
    newStudent->name = name;
    newStudent->marks = marks;
    newStudent->link = NULL;
    return newStudent;
}

class Grade {
    Student* stackTop;
public:
    Grade();
    void add_entry(Student* newStudent);
    void print_entry(Student* s1);
};

Grade::Grade() {
    stackTop = NULL;
}

void Grade::add_entry(Student* newStudent) {
    //first create a student
    Student* newSt = new Student;
    
    //set equal to given student
    newSt->id = newStudent->id;
    newSt->name = newStudent->name;
    newSt->marks = newStudent->marks;

    //handle the link. The top needs to move to the new Student. Before that, link to the previous stacktop.
    newSt->link = stackTop;
    stackTop = newSt;
    
}

void Grade::print_entry(Student* s1) {
    if (stackTop->id != s1->id) {
        Student* current = new Student;
        current = stackTop;

        while (current->id != s1->id) {
            current = current->link;
        }
        cout << "Name : " << current->name << endl;
        cout << "id : " << current->id << endl;
        cout << "marks : " << current->marks << endl;

    }
    else {
        cout << "Name : " << stackTop->name << endl;
        cout << "id : " << stackTop->id << endl;
        cout << "marks : " << stackTop->marks << endl;
    }
}

int main()
{
    Student* s1 = createStudent("a", 1, 50);
    Grade G;

    G.add_entry(s1);
    G.print_entry(s1);
    return 0;
}