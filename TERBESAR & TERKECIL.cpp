#include <iostream.h>
#include <conio.h>

void main ()
{
	int a,b;
	cout << "Masukkan Bilangan Pertama : ";
	cin>>a;
	cout << "Masukkan Bilangan Kedua : ";
	cin>>b;
	if (a>b)
		cout << "Bilangan Terbesar = "<<a;
	else
		cout << "Bilangan Terbesar = "<<b;

	getch();
}