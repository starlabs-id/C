#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main ()
{
	int nilai [25];
   int k, r;
   int max,min;

   cout<<"Masukkan Nilai : ";
   cin>>k;
   cout<<endl;

   for (r=1; r<=k; r++)
   {
   	cout<<"Nilai ke - "<<r<<" = ";
      cin>>nilai[r];
   }

   max = nilai[1];
   min = nilai[1];

   for (r=1; r<=k; r++)
   	if (nilai[r]>=max)
      {
      	max = nilai[r];
		}
      else if (nilai[r]<=min)
      {
      	min = nilai[r];
      }

      cout<<endl;
      cout<<"Nilai Terendah  : "<<min<<endl;
      cout<<"Nilai Tertinggi : "<<max<<endl;

   getch();
}
