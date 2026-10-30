#include <iostream>

bool leap_year(int year){
    bool ly;

        if( (year % 4) == 0){ 
        // if multiple of 4

            if( (year % 100) == 0){ 
                // if (also) multiple of 100
                if( (year % 400) == 0){
                    ly = true;
                }

                else{
                    ly=false;
                }
            }
            else{ 
                ly = true;

            }
    }
    else{
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int thirty1Months[7] = {1,3,5,7,8,10,12};

    bool is31Month = false, isFeb = false, is30Month=false, isDec=false;

    for(int i=0; i<=7; i++){
        if(m1==thirty1Months[i]){
            is31Month=true;
        }
        else if(m1==2){
            isFeb=true;
        }
        else{
            is30Month=true;
        }
    }

    if(m1==12){
        isDec=true;
    }

    
    if(is30Month && d1==30){
        m2=m1+1;
        d2=1;
        y2=y1;
    }
    else if(is31Month && d1==31){
        if(isDec){
            d2=1;
            m2=1;
            y2=y1+1;
        }
        else{
            d2=1;
            m2=m1+1;
            y2=y1;
        }
    }
    else if(isFeb){
        if (leap_year(y1) && (d1==28)){
            d2=d1+1;
            m2=m1;
            y2=y1;
        }
        else{
            d2=d1+1;
            m2=m1;
            y2=y1;
        }
    }
    else{
        d2=d1+1;
        m2=m1+1;
        y2=y1;
    }

}

int main(){
    int d1,m1,y1,d2,m2,y2;
    std::cin >> d1>>m1>>y1;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout<< d2<<"/"<<m2<<"/"<<y2;
}