#include <iostream>
#include <vector>
using namespace std;





int main (){
    vector <int> v;
    while (true){
        int x ;
        cin >> x;
        if (x==0){
            break;
        }
        v.push_back(x);
    } 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    

 }