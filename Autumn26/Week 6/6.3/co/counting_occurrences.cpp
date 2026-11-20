#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

int count(string word, vector<string> text){
    int count=0;
    for(int i=0; i<text.size(); i++){
        if(text[i]==word){
            count=count+1;
        }
    }
    return count;
}

int txt_to_vector(string fileName, vector<string>& vout){
    std::ifstream infile; 
    infile.open(fileName);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    string tmp;

    while(infile >> tmp){
        vout.push_back(tmp); 

    }
    infile.close(); 
    return EXIT_SUCCESS;
}

void count(vector<string> text, vector<string> words){
    int numOfOcc;

    for(int i=0; i<words.size();i++){
        numOfOcc=0;
        for(int j =0; j<text.size();j++){
            if(text[j]==words[i]){
                numOfOcc=numOfOcc+1;
            }
        }
        cout << words[i] << ": " << numOfOcc << endl;
    }
}

int main(){
    vector<string> vText, vWords;
    txt_to_vector("text.txt", vText);
    txt_to_vector("words.txt", vWords);
    count(vText,vWords);
}