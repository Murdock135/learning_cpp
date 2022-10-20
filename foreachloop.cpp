#include <iostream>

int main()
{
    double marks[] = {92.3, 80.5, 84.2, 60.8};

    for(double mark : marks){
        std::cout << mark << "\n";
    }
}