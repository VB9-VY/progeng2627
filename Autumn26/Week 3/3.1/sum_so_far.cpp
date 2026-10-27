#include <iostream>

int main(){

    double number, sum;

    bool numberCheck = false;
    while (not numberCheck){
        std::cout << "enter number: " << std::endl;
        std::cin >> number;
        sum=sum+number;
        if(number==0){
            numberCheck = true;
        }
        else{
            std::cout << "The sum so far is " << sum << std::endl;
        }
    }
    
    
}