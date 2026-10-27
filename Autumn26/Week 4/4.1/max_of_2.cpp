#include <iostream>

using namespace std;

double min_max(double n1, double n2){
    if(n1>n2){
        return n1;
    }
    else if(n2>n1){
        return n2;
    }
    else{
        cout << "numbers are equal" << endl;
        return 0;
    }
}

int main(){
    double n1, n2;
    cin >> n1 >> n2;
    cout << min_max(n1,n2) << endl;
}