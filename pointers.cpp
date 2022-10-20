#include <iostream>

// using namespace std;

int main()
{
    std::string name = "Bro";
    std::string pName = &name;

    std::cout << pName << std::endl; // outputs address
    std::cout << *pName; //outputs value at address
    return 0;
}
