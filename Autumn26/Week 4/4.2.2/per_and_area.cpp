#include <iostream>

void rectangle_facts(double& l1, double& l2, double& area, double& perimeter){
    area = l1*l2;
    perimeter = (l1+l2)*2;
}

int main(){
    double l1, l2, area = 0, perimeter = 0;
    std::cin>> l1 >> l2;
    rectangle_facts(l1,l2,area,perimeter);
    std::cout<<area<<std::endl<<perimeter;
}