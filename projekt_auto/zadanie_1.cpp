#include <iostream>
#include <vector>
#include <algorithm>
#include "auto.hpp"
using namespace std;





int main () {
    Auto Audi("Audi", "x3", 5);
    cout<<"Marka to "+Audi.getmarka()+" "+Audi.getmodel()<<endl;
    cout<< Audi.getdistance()<<endl;
    Audi.przejedz(100);
    cout<< Audi.getdistance()<<endl;
    cout<<Audi.getbak()<<endl;
    
}