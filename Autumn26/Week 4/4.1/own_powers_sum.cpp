#include <iostream>
using namespace std;

double my_pow(double base, int exp){
    double result = 1;
    if(exp<0){
        exp=exp*-1;
        for(int i = 1; i <= exp; i++){
            result = result*base;
        }
        result = 1/result;
    
    }
    else{
        for(int i = 1; i <= exp; i++){
            result = result*base;
        }
    }
    return result;
}


int main(){

    double total = 0;
    double num;
    int ub;

    cin>> num>>ub;

    for(int i = 1; i<=ub; i++){
        total = total + my_pow(num, i);
    }
    cout<<total;
}