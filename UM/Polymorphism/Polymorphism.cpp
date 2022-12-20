// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "classes.h"
#include "EmployeeClasses.h"
using namespace std;

int main()
{
    //baseClass b(1); //create base-class object
    //derivedClass1 d1(2); //create derived-class object
    //derivedClass2 d2(3); //create derived-class object
    //baseClass* bPtr1 = nullptr; //creates a base-class pointer
    //baseClass* bPtr2 = nullptr; //creates a base-class pointer
    //derivedClass1* d1Ptr = nullptr; //creates a derived-class pointer
    //derivedClass2* d2Ptr = nullptr; //creates a derived-class pointer
    //bPtr1 = &b; //Aiming a base-class pointer at a base-class object
    //bPtr1->info(); //base-class member function is invoked

    //d1Ptr = &d1; //Aiming a derived-class pointer at a derived-class object
    //d1Ptr->info(); //derived-class member function is invoked
    ////Aiming base-class pointers to derived class objects (upcast)
    //bPtr1 = &d1;
    //bPtr2 = &d2;
    ////Calling info function
    //bPtr1->info(); //base-class member function is invoked
    //bPtr2->info(); //base-class member function is invoked

    //case study
    SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800);
    Employee* employees[3];
    employees[0] = &salariedEmployee;

    employees[0]->print();
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
