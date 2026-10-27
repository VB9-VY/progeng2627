#include <iostream>

using namespace std;

double min_max(double n1,double n2,double n3){
    double max;
    if(n1>=n2){
        if (n1>=n3){
            max = n1;
        }
        else{
            max = n3;
        }
    }
    else if(n1<=n2){
        if(n2>=n3){
            max = n2;
        }
        else{
            max = n3;
        }
    }
    return max;
}
    
int main(){
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << min_max(n1,n2,n3) << endl;
}

