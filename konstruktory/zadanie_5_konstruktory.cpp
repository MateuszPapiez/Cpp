#include <iostream>
using namespace std;

class Klasa{
public:
    Klasa (int w){
        x=w;
        cout <<" Wywolano konstruktor (int)"<<endl;
    }
    int x;
    Klasa (){
        cout <<" Wywolano konstruktor domyslny"<<endl;
    }
    Klasa (const Klasa &f){
        x=f.x;
        cout <<" Wywolano copyconstructor &"<<endl;
    }
    Klasa (Klasa &&f){
        x=f.x;
        cout <<" Wywolano copyconstructor"<<endl;
    }
};
  void f(Klasa g ){
      cout<<"wywolano f"<<endl;
  }

    void f_2(Klasa &g ){
      cout<<"wywolano f2"<<endl;
      g.x=5;
  }
int main(){
    Klasa b = Klasa (5);
    Klasa c(5);
    Klasa d;
    Klasa e = 5;
    //Klasa f = b;
    f(d);
    f(Klasa(5));
    f_2(d);
}