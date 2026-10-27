#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double total = 0;
    double num;
    int ub;

    cin>> num>>ub;

    for(int i = 1; i<=ub; i++){
        total = total + pow(num, i);
    }
    cout<<total;
}