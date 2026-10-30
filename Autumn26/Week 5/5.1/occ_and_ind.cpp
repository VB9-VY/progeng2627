#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int> ind;
    int length, nums, s, counter=0;

    cout << "Enter a length: " << endl;
    cin >> length;

    for(int i=1; i<=length; i++){
        cout<<"enter num: "<<endl;
        cin >> nums;
        v.push_back(nums);
    }
    
    cout << "enter an s: " << endl;
    cin >> s;
    
    for(int i=0; i<v.size();i++){
        if(v[i]==s){
            counter=counter+1;
            ind.push_back(i);
        }
    }
    if (counter>0){
        cout << "there are " << counter << " occurrences of " << s << endl;
        cout << "at indices: " << endl;

        for(int i=0; i<ind.size();i++){
            cout << ind[i] << endl;
        }
    }
    else{
        cout << "there are no occurrences of " << s << endl;  
    }
}