#include <iostream>
using namespace std;

void f (char znak){
    for(int i=0; i<=20; i++)
		cout<<znak;

	cout<<endl;
}
int main()
{
	char znak;

	cout<<"Podaj znak, który chcesz powielić 20 razy: ";
	cin>>znak;
	
	//wywołanie funkcji powiel(char)
	f(znak);

	return 0;
}