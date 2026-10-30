#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);

    cout << v[0]*(v[1]+v[2]) << endl;
}