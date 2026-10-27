#include <iostream>
using namespace std;

int main(){

    int num;

    cin>>num;
    while(num>0){
        if(num%3==0){
            cout<<"buzz"<<endl;
        }
        else if(num%5==0){
            cout<<"fizz"<<endl;
        }
        else{
            cout<<num<<endl;
        }
        num=num-1;
    }
}