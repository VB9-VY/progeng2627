#include <iostream>

int main(){

    double number, result=1;

    std::cin >> number;
    for(int i = number; i > 0; i--){
        result=result*i;
    }
    
    std::cout << result << std::endl;
}