#include <iostream>
using namespace std;
int main() {
    int liczba1, liczba2;
    char znak;
    cin >>liczba1 >> znak >>liczba2;
    if (znak=='+'){
        cout << liczba1 + liczba2;
    }
    else if (znak=='-'){
        cout << liczba1 - liczba2;
    }
    else
        cout << "brak";

    return 0;
}
