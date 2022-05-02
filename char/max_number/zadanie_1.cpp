#include <iostream>
using namespace std;

int main () {
    int number [5];
    for (int b=0; b<=4 ; b++){
        cin >> number[b];
    }
    cout << endl;

    int max_number = 0;


    for (int n=4; n>=0 ; n--){
        if (max_number <number[n]){
            max_number= number[n];
        }
        
        
    }
    cout << max_number << endl;

}