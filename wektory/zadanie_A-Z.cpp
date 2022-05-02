#include <iostream>
using namespace std;

int main(){
    char znak = 'Z'; //znak na A//
    
    char tab1[3]={'+','-','*'};
    
    cout<<tab1[10000]<<endl;

    while (znak<='Z'){
        cout<<znak<<endl;
        znak++;
    }
    while (znak>='A'){
        cout<<znak<<endl;
        znak--;
    }
}