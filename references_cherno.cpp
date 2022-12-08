#include <iostream>
using namespace std;

void increment(int& value){
    value++;
}

int main()
{
    int a = 5;
    // int& ref = a; //the program will compile and then NOT find ref as a variable
    // ref = 2; //this will change the value of a

    increment(a);
    cout << a;
}