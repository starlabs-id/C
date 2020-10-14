#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
	int n,i;

   cout<<"Menampilkan Urutan Bilangan Ganjil";
   cout<<"Dari angka terkecil ke angka terbesar";
	cout<<"Masukkan Nilai n: ";
   cin>>n;

   for (i=1 ; i<=n ; i++)
	if (i%2!=0)
   cout <<i<<' ';

	getch();
}