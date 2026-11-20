#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int v1count=0, v2count=0, v1size=v1.size(), v2size=v2.size();
    while((v1count<v1size)&&(v2count<v2size)){
        if(v1[v1count]<v2[v2count]){
            merged.push_back(v1[v1count]);
            v1count=v1count+1;
        }
        else{
            merged.push_back(v2[v2count]);
            v2count=v2count+1;
        }
    }
    if((v1count==v1size)&&(v2count<v2size)){
        for(int i=v2count; i<v2size;i++){
            merged.push_back(v2[i]);
        }
    }
    if((v2count==v2size)&&(v1count<v1size)){
        for(int i=v1count; i<v1size;i++){
            merged.push_back(v1[i]);
        }
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6, 11,12,13,14};
    v2 = {4, 6, 10,22};
    expected_output = {1, 3, 4, 5, 6, 6, 10, 11,12,13,14,22};

    merge_vectors_int(v1, v2, out);

    for(int i=0; i<out.size();i++){
        std::cout<<out[i]<<std::endl;
    }

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}