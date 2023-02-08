#include <iostream>

using namespace std;

double harmonicSeries(int N){
    double sum = 1;

    if(N==1){
        return sum;
    }
    else{
        for(int i=2; i<=N;i++){
            sum += 1.0/i;
        }
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << harmonicSeries(n)<<endl;
    return 0;
}