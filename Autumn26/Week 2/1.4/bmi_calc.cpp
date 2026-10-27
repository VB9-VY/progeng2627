#include <iostream>

int main(){
    double mass, height, bmi;

    std::cout << "enter mass" << std::endl;
    std::cin >> mass;

    std::cout << "enter height" << std::endl;
    std::cin >> height;

    bmi = mass/(height*height);
    std::cout << bmi << std::endl;
}