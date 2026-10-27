#include <iostream>

int main(){
    double number, i = 0, j = 0;
    std::cin>> number;
    while(i < number){
        j=0;
        while(j < number){
            std::cout<<"*";
            j=j+1;
        }
        std::cout<<std::endl;
        i=i+1;
    }
}