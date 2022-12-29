#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <dos.h>
#include <string>
using namespace std;

string cointoss() {
    int result = 1 + rand() % 2;
    string heads = "heads";
    string tails = "tails";

    switch (result) {
    case 1:
        return heads;
    case 2:
        return tails;
    }
}

bool checkGuessAndOfferValidity(string guess, int offer, int candies) {
    bool validity = true;
    string validGuesses[2] = { "heads","tails" };

    int count = 0;
    for (string validGuess : validGuesses) {
        if (guess == validGuess)
            ++count;
    }
    
    if (count==0) {
        cout << "Please guess either heads or tails (case sensitive)" << endl;
        validity = false;
    }
    else if (offer > candies) {
        cout << "Cannot offer more than you have, which is " << candies << " candies" << endl;
        validity = false;
    }

    return validity;
}

int getOffer() {
    int offer = -1;
    while (offer == -1) {
        cout << "How many candies do you want to offer: ";
        cin >> offer;
        while (cin.fail()) {   // could also be �while (!cin) {�
            cin.clear();
            cin.ignore(1000, '\n');
            cerr << "You have to enter an integer: ";
            cin >> offer;
        }
    }
    return offer;
}

string getGuess() {
    string guess;
    cout << "Guess heads or tails (case sensitive): ";
    cin >> guess;
    cout << endl;
    return guess;
}

int guessingGame(string playerName, int candies, int count = 1) {

    bool gameValidity = true;


    while ((gameValidity == true) && (count <= 3)) {
        cout << endl;
        cout << "Round " << count << ". You currently have " << candies << " candies" << endl;
        
        int offer = getOffer();
        string guess = getGuess();

        //check for valid guess or not
        gameValidity = checkGuessAndOfferValidity(guess, offer, candies);
        if (gameValidity == false)
            candies = guessingGame(playerName, candies, count);

        //check if guess is correct
        string coinResult = cointoss();
        if (coinResult == guess) {
            candies = candies + offer;
            cout << "Your guess was right! You now have " << candies << " candies" << endl;
        }
        else {
            candies = candies - offer;
            cout << "Your guess was wrong :(( You now have " << candies << " candies" << endl;
        }
        ++count;
    }
    return candies;
}

void checkWinner(string p1n, string p2n, string p3n, int p1Candies, int p2Candies, int p3Candies) {
    if ((p1Candies > p2Candies) && (p1Candies > p3Candies))
        cout << p1n << " has won! SHABBASSH MANTAP GG" << endl;
    if ((p2Candies > p1Candies) && (p2Candies > p3Candies))
        cout << p2n << " has won! SHABBAS MANTAP GG" << endl;
    if ((p3Candies > p1Candies) && (p3Candies > p2Candies))
        cout << p2n << " has won! SHABBASSH MANTAP GG" << endl;
}



int main()
{
    srand(time(NULL));
    int p1Candies = 10, p2Candies = 10, p3Candies = 10;

    cout << "Welcome. Can 3 players step forward and submit their names please?" << endl;
    string p1n, p2n, p3n;
    cout << "1st player. What is your name? ";
    getline(cin, p1n);
    cout << "2nd player. What is your name? ";
    getline(cin, p2n);
    cout << "3rd player. What is your name? ";
    getline(cin, p3n);
    cout << endl;
    cout << "Welcome, " << p1n << " " << p2n << " and " << p3n << endl;
    
    cout << "--------------------------------------------------------" << endl;
    cout << "AND THE GAME STARTS" << endl;
    cout << "\v";

    cout << "Hello " << p1n << " it's your turn." << endl;
    p1Candies = guessingGame(p1n, p1Candies);
    cout << endl;
    cout << "--------------------------------------------------------" << endl;

    cout << "Hello " << p2n << " it's your turn." << endl;
    p2Candies = guessingGame(p2n, p2Candies);
    cout << endl;
    cout << "--------------------------------------------------------" << endl;

    cout << "Hello " << p3n << " it's your turn." << endl;
    p3Candies = guessingGame(p3n, p3Candies);
    cout << endl;

    cout << "--------------------------------------------------------" << endl;
    cout << "Checking winner" << endl;

    cout << p1n << " has " << p1Candies << endl;
    cout << p2n << " has " << p2Candies << endl;
    cout << p3n << " has " << p3Candies << endl;
    checkWinner(p1n, p2n, p3n, p1Candies, p2Candies, p3Candies);
    cout << "GAME OVER";
    return 0;
}
