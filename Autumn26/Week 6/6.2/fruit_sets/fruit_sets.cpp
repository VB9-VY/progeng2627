#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>

int search_vector(std::string n, const std::vector<std::string>& vin){
    for(int i=0;i<vin.size();i++){
        if(vin[i]==n){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        auto check = search_vector(vin1[i], vout);
        if(check==-1){
            vout.push_back(vin1[i]);
        }
    }
    for(int i=0; i<vin2.size(); i++){
        auto check = search_vector(vin2[i], vout);
        if(check==-1){
            vout.push_back(vin2[i]);
        }
    }

}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        auto check = search_vector(vin1[i], vin2);
        if(check!=-1){
            vout.push_back(vin1[i]);
        }
    }
}


int main(){
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::vector<std::string> uv;
    std::vector<std::string> iv;
    
    std::ifstream infile; 
    infile.open("warehouse1.txt");

    

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v1.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }


    infile.close();

    infile.open("warehouse2.txt");


    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    

    while(infile >> tmp){
        v2.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close();
    
    union_vector(v1,v2,uv);
    intersection_vector(v1,v2,iv);

    std::ofstream outfile;
    outfile.open("union.txt");

    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i=0; i<uv.size(); i++){
        outfile << uv[i] << std::endl;
    }

    outfile.close();
    
    outfile.open("intersection.txt");

    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i=0; i<iv.size(); i++){
        outfile << iv[i] << std::endl;
    }

    outfile.close();

}