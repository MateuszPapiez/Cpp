#include <iostream>
using namespace std;


struct Vector 
{
    int current_size;
    int* tab;  //int* to wskaznik na int//
    int &operator[](int i){ 
        return tab[i];
    }
    Vector (){
        current_size=0;
        tab=nullptr;
    }
    Vector (Vector& v){
        current_size=v.current_size;
        tab = (int*)malloc(sizeof(int)*current_size);// adres naszego wektora (tablicy intow)//
        memcpy (tab,v.tab,current_size*sizeof(int));
    }
    void push_back(int element){
        if (tab==nullptr){
            tab=(int*)malloc(sizeof(int));
            tab[0]=element;
        }
        else{
            tab = (int*)realloc(tab,(current_size+1)*sizeof(int));
            tab [current_size]=element; 
        }
        current_size++;
    }
    int size (){
        return current_size;
    }

};


void f (Vector h){
    h[0]=0;
}
void f (int m){
    m=0;
}

int main(){
    int x = 5;
    f(x);
    cout <<x<<endl;
    Vector v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    //v[0]=0;
    f (v);
    for (int i=0;i<v.size();i++){
        cout<<v[i];
    }


//przekazywanie wektora w arg funkcji//

}