#include <iostream>
#include <stdlib.h>

using namespace std;

double harmonicSeries(int N) {
    double sum = 1;

    if (N == 1) {
        return sum;
    }
    else {
        for (int i = 2; i <= N; i++) {
            sum += 1.0 / i;
        }
    }

    return sum;
}

void generateNum(int guess) {
    int ans = 1 + rand() % 1000;
    int lbound = 0;
    int hbound = 1000;

    string response = "y";
    while ((response == "y") || (response == "Y")) {
        for (int chance = 1; chance <= 10; chance++) {
            if (guess == ans) {
                cout << "You're right";
                break;
            }
            else if (guess > ans) {
                hbound = guess;
            }
            else
                lbound = guess;

            if (chance == 10) {
                cout << "Do you want to play again? y/n: ";
                cin >> response;
            }
        }

    }
}

int main() {
    srand(time(0));

    //int n;
    //cout << "Enter number: ";
    //cin >> n;
    //cout << harmonicSeries(n) << endl;

    cout << "Guess a number: ";
    int x;
    cin >> x;
    generateNum(x);
    return 0;
}