#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <cstdlib>
using namespace std;

pair <int,int> game(string c, string h){
    
    int cow=0;
    int bull=0;
    bool visited_c []={false,false,false,false};
    bool visited_h []={false,false,false,false};

    for (int i=0;i<c.size();i++){
        if(c[i]== h[i]){
            bull+=1;
            visited_c[i]=true;
            visited_h[i]=true;
        }
    }
    for (int i=0;i<c.size();i++){
        for (int j=0;j<c.size();j++){
            if (c[j]==h[i] && visited_c[j]==false && visited_h[i]==false){
                cow+=1;
                visited_c[j]=true;
                break;
            }
        }
    }
    pair <int,int> wynik = make_pair(cow,bull);
    return wynik;
}

string number (){
    int random_c = rand () % 10000;
    string random_s = to_string(random_c);
    while (random_s.size()<4){
        random_s="0"+random_s;
    }
    return random_s;
} 




int main(){
    string nc = number ();
    string nh;
    cin>>nh;
    while (nh!=nc){
        pair <int,int> wynik = game (nh,nc);
        
        cout<<wynik.first<<"   "<<wynik.second<<endl;    
        cin>>nh;

    }

    cout<<"wygrales";
    


}