#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

struct human
{

    human (string _name, int _year){
        age= 2021-(_year); 
        name=_name;
        year=_year;
    }

    human (){

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


 void operator<<(ostream &os,human h ){
    os<<h.name<<" "<<h.age<<endl;


 }

 void operator>>(istream &is, human &h ){
     is>>h.name>>h.age;
 }


 bool operator<(human osoba_1, human osoba_2 ){
    if (osoba_1.age<osoba_2.age){
        return true;
    }
    else {
        return false;
    }
 }

int main () {
    int liczba;
    cin>>liczba;
    vector<human> osoby;
    for(int i = 0; i<liczba; i++){
        human czlowiek ;
        cin>> czlowiek;
        osoby.push_back(czlowiek);
    
    }
    sort (osoby.begin(),osoby.end());
    for (int i =0;i<osoby.size(); i++){
        cout<<osoby[i];
    
    }
    ofstream tekst2("test2.txt");
    for (int i=0; i<osoby.size(); i++){
        tekst2<<osoby[i].name<<" "<<osoby[i].age<<endl;
    }
        
}
