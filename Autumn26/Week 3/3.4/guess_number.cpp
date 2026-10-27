#include <iostream> 
#include <random>

using namespace std;

int main(){
    int num, randomNum, lBound=0, uBound=100;
    string highLow;

    cout << "enter a number between 0 and 100 inclusive and I will guess it: " << endl;
    cin >> num;

    while(randomNum!=num){
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(lBound, uBound);
        int randomNum = distrib(gen);
        if (randomNum != num){
            cout << "is your number higher or lower than " << randomNum << endl;
            cin >> highLow;
            if(highLow == "higher"){
                lBound = randomNum+1;
            }
            else if (highLow == "lower"){
                uBound = randomNum-1;
            }
        }
        else{
            cout << "your number is " << randomNum << endl;
            break;
        }
    }
}