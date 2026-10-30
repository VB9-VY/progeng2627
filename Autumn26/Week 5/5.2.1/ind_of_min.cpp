#include <iostream>
#include <vector>

using namespace std;

int min_vect_el(const vector<double>& vin){
    int min_val = -1;
    for(int i=0; i<vin.size(); i++){
        if(vin.size()==0){
            return -1;
        }
        else if(min_val == -1){
            min_val = vin[i];
        }
        else{
            if(vin[i]<min_val){
                min_val=vin[i];
            }
        }
    }
    return min_val;
}

int main(){
    vector<double> v;
    int length, nums, min_val;

    cout << "Enter a length: " << endl;
    cin >> length;

    for(int i=1; i<=length; i++){
        cout<<"enter num: "<<endl;
        cin >> nums;
        v.push_back(nums);
    }

    min_val = min_vect_el(v);
    if (min_val==-1){
        cout << "vector is empty"<<endl;
    }
    else{
        cout << "min val in vector is " << min_val << endl;
    }

}