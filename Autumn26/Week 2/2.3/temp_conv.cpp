#include <iostream>
#include <string>

int main(){
    double tempNumIn, tempNumOut;
    std::string unitIn, unitOut;

    const double mult = 1.8;
    const double add = 32;

    std::cin >> tempNumIn >> unitIn;
    bool valid_unit = true;

    if ((unitIn == "C")||(unitIn == "c")){
        unitOut = "F";
        tempNumOut = (tempNumIn*mult) + add;
    }
    else if((unitIn == "F")||(unitIn == "f")){
        unitOut = "C";
        tempNumOut = (tempNumIn-add)/mult;
    }
    else{
        valid_unit = false;
    }

    if(valid_unit){
        std::cout<<tempNumOut<<" "<< unitOut << std::endl;

    }
    else{
    std::cout << "error, unit not recognised";
    }
}