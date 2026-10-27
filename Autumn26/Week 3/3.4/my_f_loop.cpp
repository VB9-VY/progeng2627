#include <iostream>

int main(){

    double numOfStars;

    std::cin >> numOfStars;
    
    for(int i = 1; i <= numOfStars; i++){
        for(int spaces = 0; spaces< (numOfStars-i); spaces++){
            std::cout<< " ";
        }
        for(int j = 0; j< i; j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}