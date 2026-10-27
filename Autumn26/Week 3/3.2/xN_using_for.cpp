#include <iostream>

int main(){

    double power, number, result = 1;

    std::cin >> number >> power;
    for(int i = 0; i < power; i++){
        result=result*number;
    }

    std::cout << result << std::endl;
}