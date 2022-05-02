#include <iostream>
using namespace std;


double wektor ( double x [],  double y [], int n){
    double wektor_iloczyn=0;
    for(int i=0;i<n;i++){
        wektor_iloczyn+=x[i]*y[i];
     
    }
    return wektor_iloczyn;

}



int main(){
    double w1 []={1,2,3};
    double w2 []= {1,2,3};
    cout<<wektor (w1,w2, 3)<<endl;
    
    




}