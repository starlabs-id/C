#include <iostream.h>
#include <conio.h>

void main ()
{
	int a;
	cout << "Masukkan Bilangan Bulat Kosong, Genap, Ganjil  \n";
	cout << "Masukkan Bilangan : ";
	cin>>a;

	if (a == 0 )
		cout << "Bilangan Kosong "<<endl;
	else if(a % 2 == 0 )
		cout << "Bilangan Genap "<<endl;
	else
		cout << "Bilangan Ganjil "<<endl;
	getch();
}
