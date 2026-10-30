#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int length, nums, t;

    cout << "Enter a length: " << endl;
    cin >> length;

    for(int i=1; i<=length; i++){
        cout<<"enter num: "<<endl;
        cin >> nums;
        v.push_back(nums);
    }

    cout << "enter number to compare" << endl;

    cin >> t;

    cout << "numbers less than " << t <<  endl;

    for(int i=0; i<v.size();i++){
        if(v[i]<t){
            cout<<v[i]<<endl;
        }
    }
}