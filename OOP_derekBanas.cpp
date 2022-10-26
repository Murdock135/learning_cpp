#include <iostream>
#include <string>
using namespace std;

class Animal{
private:
    std::string name;
    double height;
    double weight;

    static int numOfAnimals; //same for all instances of object
    
public:
    std::string getName(){return name;}
    void setName(std::string name){this->name = name;}
    double getHeight(){return height;}
    void setHeight(double height){this->height=height;}
    void setWeight(double weight){this->weight=weight;}
    void setAll(std::string, double, double); //prototype
    Animal(std::string, double, double); //prototype
    Animal(); //overloaded constructor
    ~Animal(); //destructor
    static int getNumOfAnimals(){return numOfAnimals;} //can only access static variables
    void toString(); //prototype
};

class person{
    private:
        string name;
        int age;
    public:
        person(){
            this->name = "N/A";
            this->age = 0;
        }
    protected://used when you inherit stuff
};

int main(){
    person jake;
    return 0;
}