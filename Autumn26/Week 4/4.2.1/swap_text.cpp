#include <iostream>
using namespace std;

void my_swap(string& a, string& b){
    string tmp;
    tmp = a;
    a=b;
    b=tmp;
}

int main(){
    string a,b;

    cin >> a >> b;

    my_swap(a,b);

    cout << a << " "<< b<<endl;
}