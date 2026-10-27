#include <iostream>
int main(){

    double number;

    std::cin >> number;
    for(int i = 1 ; i <= number; i++){
        for(int j = 1; j<= number; j++){
            std::cout<< i*j << "\t";
        }
        std::cout<<std::endl;
    }

}