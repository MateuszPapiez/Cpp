#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void bubble_sort(vector <int> &v){

    for (int j=0;j<v.size();j++){
        bool zamieniono=false;
        
        for (int i=0;i<v.size()-1-j;i++){
            if (v[i]>v[i+1]){
                int n=v[i+1];
                v[i+1]=v[i];
                v[i]=n;
                zamieniono= true;
            } 
        }
       if (zamieniono == false){
           return ;
       } 
    }
    

}

int main(){
    vector <int> liczby ;
    int l;
    cin>>l;
    while (l!=0)
    {
        liczby.push_back(l);
        cin>>l;
    }
    bubble_sort(liczby);

    for (int i=0;i<liczby.size();i++){
        cout<<liczby[i]<<endl;
    }
}