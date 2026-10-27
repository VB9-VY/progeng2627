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
    std::cout << "2^3: " << my_pow(2, 3) << std::endl;
    std::cout << "0.5^2: " << my_pow(0.5, 2) << std::endl;
    std::cout << "1^0: " << my_pow(1, 0) << std::endl;
    std::cout << "2^-2: " << my_pow(2, -2) << std::endl;

}