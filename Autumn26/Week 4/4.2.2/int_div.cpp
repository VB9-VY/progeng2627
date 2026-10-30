#include <iostream>

void div(int& a, int& b, int& res, int& rem){
    res=a/b;
    rem = a%b;
}

int main(){
    int a,b,res,rem;
    std::cin >> a>>b;
    div(a,b,res,rem);
    std::cout << res << std::endl << rem;
}