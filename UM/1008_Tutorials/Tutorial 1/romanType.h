#pragma once
#include <iostream>

class romanType {
private:
    std::string num;
public:
    romanType(std::string a);
    void printRoman();
    int romToint();

};

romanType::romanType(std::string a) {
    num = a;
}

void romanType::printRoman() {
    std::cout << num << '\n';
}

int romanType::romToint() {
    std::string roman = num;
    int size = roman.length();

    // std::cout << size << '\n';
    int formerDigit;
    int integer = 0;

    // loop through the roman number
    for (int i = size - 1; i >= 0; i--) {

        std::cout << "iteration: " << i << '\n';
        std::cout << roman[i] << '\n';

        switch (roman[i])
        {
        case 'I':
            formerDigit = 1;
        case 'V':
            formerDigit = 5;
        case 'X':
            formerDigit = 10;
        case 'L':
            formerDigit = 50;
        case 'C':
            formerDigit = 100;
        case 'D':
            formerDigit = 500;
        case 'M':
            formerDigit = 1000;
        default:
            std::cout << "letter does not exist in the roman system" << '\n';
            formerDigit = 0;
        }

        std::cout << formerDigit << '\n';
        integer <= formerDigit ? integer = integer + formerDigit : integer = integer - formerDigit;

    }

    return integer;
}
