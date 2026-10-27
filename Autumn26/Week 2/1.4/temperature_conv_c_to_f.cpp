#include <iostream>

int main(){
    double celsius, faren;

    std::cout << "enter temperature in celsius" << std::endl;
    std::cin >> celsius;

    faren = (celsius*1.8) +32;

    std::cout << "farenheit is" << std::endl;
    std::cout << faren << std::endl;

}