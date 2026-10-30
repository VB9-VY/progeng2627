#include <iostream>
#include <vector>

using namespace std;

int search_vector(int n, const vector<int>& vin){
    for(int i=0;i<vin.size();i++){
        if(vin[i]==n){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> v;
    int length, nums, n, nInd;

    cout << "Enter a length: " << endl;
    cin >> length;

    for(int i=1; i<=length; i++){
        cout<<"enter num: "<<endl;
        cin >> nums;
        v.push_back(nums);
    }

    cout << "enter number to search for: " << endl;
    cin >> n;

    nInd=search_vector(n,v);

    if(nInd==-1){
        cout << "Number not in vector" << endl;
    }

    else{
        cout << "Number is at index " << nInd << endl;
    }
}