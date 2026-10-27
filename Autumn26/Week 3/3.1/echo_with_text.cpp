#include <iostream>

int main(){
    std::string word;

    while(word != "STOP"){
        std::cout << word << std::endl;
        std::cin >> word;
    }
}