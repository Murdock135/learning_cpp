#include <iostream>

using namespace std;

int main()
{
    std::string name = "Bro";
    std::string *pName = &name;
    string* ptrName = &name;

    std::cout << pName << std::endl; // outputs address
    std::cout << *pName<< endl; //outputs value at address
    cout << ptrName;
    return 0;
}
