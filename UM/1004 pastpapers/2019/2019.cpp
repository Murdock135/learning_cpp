// 2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int NROWS = 2, NCOLS = 3;

void transpose(int arr1[NROWS][NCOLS], int arr2[NCOLS][NROWS]) {
    for (int i = 0; i < NCOLS; i++) {
        for (int j = 0; j < NROWS; j++) {
            arr2[i][j] = arr1[j][i];
        }
    }
}

void display2d(int arr[NCOLS][NROWS]) {
    for (int i = 0; i < NCOLS; i++) {
        for (int j = 0; j < NROWS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void display(int arr[]) {
    for (int j = 0; j < 8; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

void dec2bin(int dec, int bin[]) {
    for (int i = 7; i >= 0;i--) {
        bin[i] = dec % 2;
        cout << bin[i] << " ";
        dec /= 2;        
    }
    cout << endl;
}

void paritycheck(int bin[8]) {
    int count{};
    for (int i = 0; i < 8; i++) {
        if (bin[i] == 1)
            count++;

    }
    if (count % 2 != 0)
        bin[0] = 1;

    cout << "The parity bit is " << bin[0] << endl;
}

void func2(int low, int high) {
    while (low < high) {
        bool prime = true;
        for (int i = 2; i < low; i++) {
            if (low % i == 0)
                prime = false;
        }
        if (prime)
            cout << low << " ";
        low++;
    }
}

int funX(int x, int y) {
    int ans = (x > y) ? x : y;
    do {
        if (ans % x == 0 && ans % y == 0) {
            break;
        }
        else
            ++ans;
    } while (true);
    return ans;
}

int main()
{
    //int arr1[NROWS][NCOLS] = { {2,3,1},{1,5,4} };
    //int arr2[NCOLS][NROWS] = {};
    //transpose(arr1, arr2);
    //cout << endl;
    //display2d(arr2);
    //int bin[8] = {};

    //dec2bin(25, bin);
    //display(bin);
    //paritycheck(bin);
    //func2(10, 20);

    //cout << funX(20, 50) << endl;

    int ary[4] = { 0,1,2,3 };
    int* aryPtr = ary;
    int** aryAryPtr = &aryPtr;

    cout << ary << endl;
    cout << sizeof(int) << endl;
    cout << (ary + 1) << endl;
    cout << (ary + ary[3]) << endl;
    cout << *(ary + *(ary + 3)) << endl;
    cout << *(aryPtr + 1) << endl;
    cout << &aryPtr[1] << endl;
    cout << *aryAryPtr + 1 << endl;
    cout << *(*aryAryPtr + 1) << endl;
}

