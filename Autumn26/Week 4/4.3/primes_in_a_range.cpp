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

void primes_in_range(int n1, int n2){
    for(int i = n1; i<n2; i++){
        if(i==1){
            i=i+1;
        }
        if(not smallest_factor(i)){
            cout << i << endl;
        }
    }
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    primes_in_range(n1,n2);
}