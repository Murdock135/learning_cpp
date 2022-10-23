/*
This class is on the basic syntax of classes
*/

#include <iostream>
class gradeBook
{
private:
    std::string name; // all functions can access this variable
public:
    gradeBook(); // this is a default constructor
    int age = 20;
    void displayMessage();
    void displayName();
    void input();
};

void gradeBook::displayMessage()
{
    std::cout << "Welcome to the grade book!" << "\n";
}

void gradeBook::displayName()
{
    std::cout << name << "\n";
}

void gradeBook::input()
{
    std::cout << "What is your name" << "\n";
    std::cin >> name;
}

gradeBook::gradeBook()
{
    std::cout << "this is a constructor. It runs automatically" << "\n";
}


class secondGradeBook
{
private:
    std::string course;
public:
    secondGradeBook(std::string coursename);
};

secondGradeBook::secondGradeBook(std::string coursename)
{
    //course = coursename;
    std::cout << "Welcome to" << coursename << "\n";
}

int main()
{
    gradeBook course1;
    gradeBook course2;

    course1.displayMessage();
    course1.input();
    course1.displayName();
    std::cout << course1.age; // accessing a public variable

    secondGradeBook course3("KIE1008");

    return 0;
}
