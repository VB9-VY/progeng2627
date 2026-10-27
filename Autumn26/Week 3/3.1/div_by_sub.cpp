#include <iostream>

int main(){

    double number = 0, divisor = 0, iters = 0;
    std::cout << "enter number: " << std::endl;
    std::cin >> number;
    std::cout << "enter number to divide by: " << std::endl;
    bool numberCheck = false;
    std::cin >> divisor;
    while (not numberCheck){
        if(number-divisor<=0){
            numberCheck = true;
        }
        else{
            std::cout << number << " is greater than " << divisor << " so subtract " << divisor << " from " << number << std::endl;
            number = number-divisor;
            iters=iters+1;
            std::cout << "we get " << number << std::endl;
            
        }
    }
    std::cout << "the quotient is " << iters << std::endl;
    std:: cout << "the remainder is " << number << std::endl;
    
    
}