#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;



int main () {
    
    ifstream tekst ("test.txt");
    vector<string> imiona;
    for (int i=0; i<=3; i++){
    
        string word;
        tekst>>word;
        imiona.push_back(word);
        
        cout<<word<<endl;
    }
    sort (imiona.begin(), imiona.end());
    ofstream tekst2("test2.txt");
    for (int i=0; i<imiona.size();i++){
        tekst2<<i+1<<" " + imiona[i]<<endl;
    }


}