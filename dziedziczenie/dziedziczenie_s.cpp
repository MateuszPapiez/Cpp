#include <iostream>
#include <vector>
#include <algorithm>
#include "auto.hpp"
using namespace std;

class Sedan:public Auto{
    float poj_bag;
    public:
    Sedan(string ma, string mo, float sp,float p_b):Auto(ma,mo,sp){
    poj_bag=p_b;
    }
    float getpoj_bag(){
        return poj_bag;
    }

};

int main () {
    Sedan BMW("BMW","X7",18,25);
    cout<<BMW.getpoj_bag()<<endl;
    BMW.przejedz(10);
    cout<<BMW.getdistance()<<endl;
    cout<<BMW.getbak()<<endl;
    
}