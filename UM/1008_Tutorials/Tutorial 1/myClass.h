#pragma once
#include <iostream>

class myClass
{
public:
    void printX();
    void printCount();
    void incrementCount();
    myClass(int a = 0);

private:
    int x;
    int count;
};

myClass::myClass(int a)
{
    x = a;
}

void myClass::printX()
{
    std::cout << x << "\n";
}

void myClass::printCount()
{
    std::cout << count << "\n";
}

void myClass::incrementCount()
{
    count++;
}
