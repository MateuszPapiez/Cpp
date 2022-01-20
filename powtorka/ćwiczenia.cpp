#include <iostream>
using namespace std;

struct human
{
int age ;
string name = "";
};

void Info (human h){
    cout << h.name << " ma lat "<< h.age << endl;
};

int main (){
    human h;
    h.age = 25;
    h.name = "Arek";
    Info(h);

}