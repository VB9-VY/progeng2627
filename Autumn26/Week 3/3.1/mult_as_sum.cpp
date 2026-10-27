#include <iostream>

int main(){
    double num, mult, result;
    int i = 0;

    std::cin>>num>>mult;

    while (i<mult){
        result=result + num;
        i = i + 1;
    }

    std::cout<<result<<std::endl;
}