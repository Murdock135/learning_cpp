#include <iostream>

void happyBirthday(std::string name, int age); //function declaration

int main()
{

    std::string name = "Bro";
    int age = 12;
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string name, int age){
    using std::cout;

    cout << "Happy Birthday to you!\n";
    cout << "Happy Birthday to you!\n";
    cout << "Happy Birthday dear " << name << "!!";
    cout << "You are " << age << " years old!";
}

