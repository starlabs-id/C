#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
	int n,i;

   cout<<"Menampilkan Urutan Bilangan Genap"<<endl;
   cout<<"Dari angka terbesar ke terkecil"<<endl;
	cout<<"Masukkan Nilai n: ";
   cin>>n;

   for (i=n ; i>=0 ; i--)
	if (i%2!=1)
   cout <<i<<' ';

	getch();
}