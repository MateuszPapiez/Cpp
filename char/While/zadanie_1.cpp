#include <iostream>
using namespace std;

struct human
{
    human (int _age, string _name){
        age=_age; 
        name=_name;
    }
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


int main () {
    int number;
    human x (20, "Michal");
    x.show();
}