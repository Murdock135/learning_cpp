#include <iostream>

int main()
{
    int x; //declaration
    x = 5; //assignment

    int y=6;
    int sum = x+y;
    int trunc_int = 7.5; //this will be truncated to 7 when outputted
    double gpa = 3.8; // this won't be truncated if outputted
    std::string name = "Bro";

    // std::cout<<x<<"\n"<<y<<"\n";
    // std::cout<<sum;
    std::cout<<name;

    return 0;
}