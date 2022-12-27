#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ////2
    //int gap = 5;
    //cout << setw(gap) << " ";
    //for (int i = 1; i <= 10; i++) {
    //    cout << setw(gap) << i;
    //}

    //cout << endl;
    //for (int i = 1; i <= 10; i++) {
    //    cout << setw(gap) << i;
    //    for (int j = 1; j <= 10; j++) {
    //        cout << setw(gap) << i * j;
    //    }
    //    cout << endl;
    //}


    //4
    //int sumOfPrimes = 0;
    //int numOfPrimes = 0;
    //cout << "Total of primes = " << sumOfPrimes << endl;
    //for (int i = 10; i <= 50; i++) {
    //    int count = 0;
    //    for (int j = 2; j < i / 2; j++) {
    //        if (i % j == 0) {
    //            cout << i << " is not prime" << endl;
    //            count++;
    //            break;
    //        }
    //    }
    //    if (count==0) {
    //        //if it doesn't break in line 36, it is a prime
    //        cout << i << " is a prime" << endl;
    //        numOfPrimes++;
    //        sumOfPrimes = sumOfPrimes + i;

    //        cout << "Number of primes = " << numOfPrimes << endl;
    //        cout << "Total of primes = " << sumOfPrimes << endl;

    //    }

    //}

    //5
    //int gap = 10;
    //double sum = 0;

    //cout << fixed;
    //cout << setw(gap) << "n" << setw(gap) << "pi" << endl;

    //for (int n = 1; n <= 500; n += 1) {
    //    sum += pow(-1, n + 1) * (4.0 / (2 * n - 1));
    //    if(n%10==0)
    //        cout << setw(gap) << n << setw(gap) << setprecision(5) << sum << endl;
    //}

    //6
    double salary;
    double taxable = 0;
    cout << "Enter salary: " << endl;
    cin >> salary;
    cout << endl;

    if ((salary > 5000)&&(salary<=15000))
        taxable = (salary-5000)*0.1;
    if ((salary > 15000) && (salary <= 35000)) {
        salary = salary - 15000;
        taxable = 0.1 * 10000 + 0.15 * (salary);
    }
    if (salary > 35000) {
        salary = salary - 35000;
        taxable = 0.1 * 10000 + 0.15 * 20000 + 0.2 * salary;
    }

    cout << "Tax = " << taxable;
        


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
