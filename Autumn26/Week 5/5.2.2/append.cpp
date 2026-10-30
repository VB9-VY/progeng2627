#include <iostream>
#include <vector>

using namespace std;

void append_vectors(const vector<int>& vin1, const vector<int>& vin2, vector<int>& vout){
    for(int i=0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i=0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    v1={1,2,3,4};
    v2={5,6,7,8};
    append_vectors(v1,v2,v3);

    for(int i=0;i<v3.size();i++){
        cout << v3[i] << " ";
    }
}