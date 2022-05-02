#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Auto{
    private:
    string marka;
    string model;
    int distance;
    float spalanie;
    float bak;
    public:
    Auto (string ma, string mo, float sp){
        marka=ma;
        model=mo;
        spalanie=sp;
        distance = 0;
        bak=10;
    }
    string getmarka(){
        return marka;
    }
    string getmodel(){
        return model;
    }
    int getdistance(){
        return distance;
    }
    void przejedz(float lkm){
        float sp=(1/100)*spalanie;
        bak=bak-sp;
        distance=distance+lkm;
    }
    float getbak(){
        return bak;
    }
    void tankowanie (float t){
        bak=bak+t;
    }
};





int main () {
    Auto Audi("Audi", "x3", 5);
    cout<<"Marka to "+Audi.getmarka()+" a model to "+Audi.getmodel()<<endl;
    cout<<Audi.getdistance()<<endl;
    Audi.przejedz(50);
    cout<<Audi.getdistance()<<endl;
    cout<<Audi.getbak()<<endl;
}