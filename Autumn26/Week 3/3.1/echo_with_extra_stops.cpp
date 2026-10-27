#include <iostream>

int main(){
    std::string word;
    bool stop = false;

    while(not stop){
        std::cout << word << std::endl;
        std::cin >> word;
        if((word == "STOP") || (word == "stop") ||(word == "Stop")){
            stop = true;
        }
    }
}