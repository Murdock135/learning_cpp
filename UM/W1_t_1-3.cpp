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


int main()
{
    using std::cout;
    using std::endl;

    myClass myObject1(5);
    myClass myObject2(7);

    // myObject1.printX();
    // myObject2.printX();
    // myObject1.printCount();
    // myObject2.printCount();

    myObject1.printX();
    cout << endl;
    myObject1.incrementCount();
    myObject1.printCount();
    cout << endl;
    myObject2.printCount();
    cout << endl;
    myObject2.printX();
    cout << endl;


    return 0;
}