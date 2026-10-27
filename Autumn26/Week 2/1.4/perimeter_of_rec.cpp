#include <iostream>

int main(){
    double len1, len2, perimeter;

    std::cout << "enter length 1 of rectangle" << std::endl;
    std::cin >> len1;

    std::cout << "enter length 2 of rectangle" << std::endl;
    std::cin >> len2;

    perimeter = len2 + len2 + len1 +len1;
    std::cout << perimeter << std::endl;
}