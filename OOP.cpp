#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

        Student(std::string name, int age, double gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
            /* We only need to use this-> if the parameters have 
            the same name as the member variables.*/
        }
};

int main()
{
    Student student1("Spongebob",20,3.87);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    return 0;
}