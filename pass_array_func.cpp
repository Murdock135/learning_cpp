#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {92.3, 80.5, 84.2, 60.8};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;
}

double getTotal(double prices[], int size){
    double total = 0;
    
    for(int i=0; i<size; i++){
        total += prices[i];
    }

    return total;
}