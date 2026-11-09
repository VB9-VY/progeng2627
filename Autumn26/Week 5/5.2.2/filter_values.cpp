#include <iostream>
#include <vector>

using namespace std;

void filter_v(const vector<double>& vin, double t, vector<double>& vout){
    for(int i=0; i<vin.size(); i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    vector<double> v;
    vector<double> v2;
    int length;
    double nums, t;

    cout << "Enter a length: " << endl;
    cin >> length;

    for(int i=1; i<=length; i++){
        cout<<"enter num: "<<endl;
        cin >> nums;
        v.push_back(nums);
    }

    cout << "enter number to compare" << endl;

    cin >> t;

    filter_v(v,t,v2);
    
    cout << "numbers less than " << t <<  endl;

    for(int i=0; i<v2.size();i++){
        cout<<v2[i]<<endl;
    }
}