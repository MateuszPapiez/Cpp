#include <iostream>
using namespace std;




class human {
    public:
    void setname (string imie){
        name=imie;
    }
    string &getname(){
        return name;
    }

    private:
    string name;
    int age;
};


int main(){
    human h;
    h.setname("Marek");
    h.getname()="ala";
    cout<<h.getname()<<endl;




}