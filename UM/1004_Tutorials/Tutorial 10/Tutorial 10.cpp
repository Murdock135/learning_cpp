// Tutorial 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//2-global vars
const int row = 3;
const int column = 5;


//2-function
void cal_sum(int arr[row][column], int row_sum[row], int col_sum[column]) {

    //calculate row sum
    for (int i = 0; i < row; i++) {
        int sum = 0;

        for (int j = 0; j < column; j++) {
            sum += arr[i][j];
        }
        row_sum[i] = sum;

    }

    //calculate column sum
    for (int i = 0; i < column; i++) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            sum += arr[j][i];
        }
        col_sum[i] = sum;
    }
}

int main()
{

    //2
    cout << "Q2" << endl;
    int row_sum[row] = {};
    int col_sum[column] = {};

    int a[row][column] = { {25,34,26,12,8},{19,27,24,11,4},{6,15,35,36,18} };
    cal_sum(a, row_sum, col_sum);

    cout << "row sum = " << endl;
    for (int i=0; i < row; i++) {
        cout << row_sum[i] << endl;
    }
    cout << endl;

    cout << "column sum = " << endl;
    for (int i = 0; i < column; i++) {
        cout << col_sum[i] << endl;
    }
    cout << endl;

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
