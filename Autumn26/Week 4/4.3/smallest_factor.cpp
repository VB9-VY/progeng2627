#include <iostream>

using namespace std;

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    cout<< smallest_factor(n) << endl;
}