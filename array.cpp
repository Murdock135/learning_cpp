#include <iostream>

using namespace std;

int main()
{
    //std::string car[] = {"bmw", "mustang"};
    //std::cout << *car << std::endl; //one way of accessing element
    //std::cout << car[1] << std::endl; //main way of accessing element

    //std::string cars[3]; //arrays can be declared

    //cars[0] = "camaro";
    //cars[1] = "camri";
    //cars[2] = "camri";


    //// iterating over an array
    //double prices[] = {5.00, 7.50, 9.99};
    //
    //for(int i=0; i< sizeof(prices)/sizeof(double); i++){
    //    std::cout << prices[i] << "\n";
    //}
    bool* DynamicSet;
    DynamicSet = new bool[5];
    DynamicSet[5] = { false };
    for (int i=0;i<5;i++) {
        cout << DynamicSet[i] << endl;
    }
    cout << "--------------------------" << endl;
    DynamicSet[0] = true;
    for (int i=0;i<5;i++) {
        cout << DynamicSet[i] << endl;
    }
    return 0;
}
