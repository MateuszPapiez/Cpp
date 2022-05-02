#include <iostream>
using namespace std;

void e(int &x){
    x = x+1;
    cout << x <<endl;

    
}

void e(int *x){
    *x = *x+1;
    cout << *x << endl;

}

struct human
{
    int age ;
    string name = "";
    
    void show (){
        cout << "Mam na imie " << name << " i mam " << age << " lat"<< endl;

    }
    
    void older (int n){
        age=age+n;
        //age++
        //age+=1
    }

};

void show_human (human h){
    cout << h.name << h.age <<endl;
}
void new_age (human *h){
    (*h).age=(*h).age+1;

}



int main (){
    int x = 2;
    e(&x);
    cout << x <<endl;
    human h, b;
    h.age=20;
    b.age= 23;
    h.name = "Arek";
    b.name = "Tomek";
    //show_human(h);
    //new_age(&h);
    //show_human(h);
    b.show();
    h.show();
    b.older(3);
    h.older(2);
    b.show();
    h.show();
}

