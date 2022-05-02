#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



bool jest_p (string wyraz){
    for(int i=0;i<wyraz.size()/2;i++){
        if(wyraz[i]!=wyraz[wyraz.size()-1-i])
            return false;
    }
    return true;
}


int main(){
    cout<<jest_p("kajak")<<endl;
    cout<<jest_p("kfdfsdfdsf")<<endl;
    cout<<jest_p("dd");
}