#include <iostream>

class myClass
{
public:
//Function to output x.
void printX();
//Function to output count.
void printCount();
//Function to increment count.
void incrementCount();
//constructor with default parameters
//Postcondition set x as a;
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

class romanType
{
public:
    romanType(int num);
    void printNum();
    void printRoman();
};

int main()
{
    using std::cout;
    using std::endl;

    // Tutorial q-3
    // myClass myObject1(5);
    // myClass myObject2(7);

    // // myObject1.printX();
    // // myObject2.printX();
    // // myObject1.printCount();
    // // myObject2.printCount();

    // myObject1.printX();
    // cout << endl;
    // myObject1.incrementCount();
    // myObject1.printCount();
    // cout << endl;
    // myObject2.printCount();
    // cout << endl;
    // myObject2.printX();
    // cout << endl;

    //Tutorial q-4

    return 0;
}