// 1004_test answer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void price_takoyaki(int x) {
    //int free = x / 3;
    //cout << "free = " << free << endl;
    int priced_takoyakis = x;
    int free = 0;
    int count = 0;
    while (count <= x) {
        cout << "count = " << count << endl;
        if ((count != 0) & (count % 3 == 0)) {
            ++free;
            --priced_takoyakis;
            cout << "free = " << free << endl;
            cout << "priced takoyakis = " << priced_takoyakis << endl;
        }

        count += 3;
    }
    int total_takoyakis = priced_takoyakis + free;
    if(total_takoyakis>=x)
    //cout << "priced takoyakis = " << priced_takoyakis << endl;

}

int main()
{
    int x;
    cout << "How many Takoyakis? ";
    cin >> x;
    price_takoyaki(x);
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
