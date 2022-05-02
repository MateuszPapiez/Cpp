using namespace std;
struct Auto {
    private:
    string marka ;
    string model ;
    int distance;
    float spalanie;
    float bak;
    public:
    Auto(string ma, string mo, float sp){
        marka=ma;
        model=mo;
        distance = 0;
        spalanie=sp;
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
        float sp = (lkm/100)*spalanie;
        bak=bak-sp;
        distance = distance + lkm;
    }
    float getbak(){
        return bak;
    }
    void tankowanie(float t){
        bak=bak+t;
    }
    
};
