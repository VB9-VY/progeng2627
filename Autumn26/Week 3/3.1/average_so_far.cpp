#include <iostream>

int main(){

    double number, sum = 0, inputs = 0, avg = 0;

    bool numberCheck = false;
    while (not numberCheck){
        std::cout << "enter number: " << std::endl;
        std::cin >> number;
        sum=sum+number;
        inputs=inputs+1;
        avg=sum/inputs;
        
        if(number==0){
            numberCheck = true;
        }
        else{
            std::cout << "The average so far is " << avg << std::endl;
        }
    }
    
    
}