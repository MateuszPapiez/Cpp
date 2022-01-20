#include <iostream>
using namespace std;

struct human{
string name= "";
int age ;
};

void person (human h){
cout << h.name << h.age << endl;
}
void new_person (human *h){
    (*h).age=(*h).age+1;
}

int main(){
    human h;
    h.name = "Arek";
    h.age = 25;
    person(h);
    new_person(&h);
    person(h);
}