#include <iostream>
#include <string>

using namespace std;

int main(){
    string firstname;
    cout << "Enter your name: ";
    getline(cin, firstname);

    cout << "\n" << "Your name is " << firstname;

}