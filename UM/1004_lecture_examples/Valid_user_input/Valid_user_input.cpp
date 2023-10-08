// Valid_user_input.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int x{-1};
    int count{1};
    int arr[5] = {};

    while (count < 6 && x!=9999) {
        cout << "(" << count << "): ";
        cin >> x;
        arr[count - 1] = x;
        cout << endl;
        count++;
    }

    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        arr[i] < min ? min = arr[i] : min = min;
    }
    cout << min << endl;
    return 0;
}

//int main() {
//    int count = 0;
//    int input;
//
//    while (count < 5) {
//        std::cout << "Enter an integer: ";
//        std::cin >> input;
//        count++;
//    }
//
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
