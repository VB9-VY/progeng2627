#include <iostream>

int main(){
    double gbp, eu;

    std::cout << "enter amount of gbp" << std::endl;
    std::cin >> gbp;

    eu = gbp*1.19;
    std::cout << eu << std::endl;
}