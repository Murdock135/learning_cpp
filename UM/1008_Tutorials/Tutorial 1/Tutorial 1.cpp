// Tutorial 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myClass.h"
#include "romanType.h"
#include "swimmingPool.h"

int main()
{
    //q3
    //using std::cout;
    //using std::endl;

    //myClass myObject1(5);
    //myClass myObject2(7);

    //// myObject1.printX();
    //// myObject2.printX();
    //// myObject1.printCount();
    //// myObject2.printCount();

    //myObject1.printX();
    //cout << endl;
    //myObject1.incrementCount();
    //myObject1.printCount();
    //cout << endl;
    //myObject2.printCount();
    //cout << endl;
    //myObject2.printX();
    //cout << endl;

    //q4
    //romanType romanNum1("IV");
    //romanType romanNum2("CDX");
    //std::cout << "1st number" << '\n';
    //int int1 = romanNum1.romToint();
    //std::cout << "2nd number" << '\n';
    //int int2 = romanNum2.romToint();

    //std::cout << "the first number: " << int1 << '\n';
    //std::cout << "the second number: " << int2 << '\n';
 

    //q5
    swimmingPool swimmingPool1(20, 10.5, 3.8, 100, 50, 10);


    double waterToFill = swimmingPool1.water_needed();
    double timeToFill = swimmingPool1.time_needed();

    std::cout << swimmingPool1.volume << '\n';
    std::cout << swimmingPool1.prefill << '\n';

    std::cout << timeToFill << '\n';
    std::cout << waterToFill << '\n';

    double resultVolume = swimmingPool1.change_water_for_duration(-20, 5);
    std::cout << "Water after draining at 20 m^3/min for 5 min: " << resultVolume;



    return 0;

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
