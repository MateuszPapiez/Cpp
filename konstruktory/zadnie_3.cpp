#include <iostream>
using namespace std;

int sum (int a ,int b ){
    int suma= a+b;
    return suma;
}
void sum (int a, int b, int *c){
    *c=a+b;
}


int main(){
    int x=2;
    int y=4;
    cout<<sum(x,y)<<endl;
    int wynik;
    sum(x,y,&wynik);
    cout<<wynik;

}
