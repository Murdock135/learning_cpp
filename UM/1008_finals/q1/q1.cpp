// q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
class A {
    float d;
public:
    int a;
    void change(int i) {
        a = i;
    }
    void value_of_a() {
        cout << a;
    }
};

class B: public A {
    int a = 15;
public:
    void print() {
        cout << a;
    }
};
int main()
{
    B b;
    b.change(10);
    b.print();
    b.value_of_a();
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
