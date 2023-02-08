#include <iostream>
#include <math.h>

using namespace std;

double Hypotenuse(double a, double b){
    double h;

    h = sqrt(a*a*1.0+b*b*1.0);

    return h;
}

bool multiple(int a, int b){
    bool mult = false;

    if(b%a==0){
        mult = true;
        cout << b << " is a multiple of "<<a<<endl;
    }
    else
        cout << b << " is not a multiple of "<<a<<endl;
        
    return mult;
}

int main(){
    // cout << Hypotenuse(4.5,4);
    cout << " Provide two integers"<<endl;
    int a, b;
    cin >> a >> b;

    bool r;
    r = multiple(a,b);
    return 0;
}