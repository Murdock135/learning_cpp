/*
This class is on the basic syntax of classes
*/

#include <iostream>
class gradeBook
{
private:
    std::string name; // all functions can access this variable
public:
    gradeBook();
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

int main()
{
    gradeBook course1;
    gradeBook course2;

    course1.displayMessage();
    course1.input();
    course1.displayName();
    std::cout << course1.age; // accessing a public variable

    return 0;
}