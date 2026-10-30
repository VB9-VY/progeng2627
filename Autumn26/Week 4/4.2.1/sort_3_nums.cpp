#include <iostream>

void my_swap(double& a, double& b){
    double tmp;
    tmp = a;
    a=b;
    b=tmp;
}

void sort_3_numbers(double& s1, double& s2, double& s3){
    if(s1>s2){
        my_swap(s1,s2);
    }
    if(s2>s3){
        my_swap(s2,s3);
    }
    if(s1>s3){
        my_swap(s1,s3);
    }
    if(s1>s2){
        my_swap(s1,s2);
    }
    if(s2>s3){
        my_swap(s2,s3);
    }
    if(s1>s3){
        my_swap(s1,s3);
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_3_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " "<< n3 <<std::endl;
}