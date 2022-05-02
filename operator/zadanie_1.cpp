#include <iostream>
using namespace std;

struct human
{

    human (string _name, int _year){
        age= 2021-(_year); 
        name=_name;
        year=_year;
    }
    int age ;
    string name = "";
    int year ;
    

    void show (){
        cout << "Mam na imie " << name << " i mam " << age << " lat"<< endl;

    }

    
    void older (int n){
        age=age+n;
        //age++
        //age+=1
    }

};


struct Vector {

    Vector (int _x, int _y){
        x=_x;
        y=_y;
    }

    int x;
    int y;
    void show (){
        cout << x <<" "<< y << endl;
    }


};

 Vector operator+(Vector a, Vector b){
     Vector c (a.x + b.x, a.y + b.y);
     return c;
 }

 void operator<<(ostream &os,human h ){
    os<<h.name<<" "<<h.age<<endl;


 }

 void operator>>(istream &is, human &h ){
     is>>h.name>>h.age;
 }

int main () {
    int number;
    human x ("Michal", 1912);
    //x.show();
    Vector V (5,3);
    V.show();
    Vector ABC (4,9);
    ABC.show();
    Vector Wynik = V + ABC;
    Wynik.show();
    cout<<x;
    cin>>x;
    cout<<x;
}
