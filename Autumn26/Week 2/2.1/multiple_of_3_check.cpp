#include <iostream>

int main(){
    int num, rem;

    std::cout << "enter a number" << std::endl;
    std::cin >> num;

    rem = num % 3;

    if(rem == 0){
        std::cout << "multiple of 3" << std::endl;
    }
    else{
        std::cout << "number not multiple of 3" << std::endl;
    }
}