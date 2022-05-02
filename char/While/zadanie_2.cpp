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


int main () {
    int number;
    human x ("Michal", 1912);
    x.show();
}
