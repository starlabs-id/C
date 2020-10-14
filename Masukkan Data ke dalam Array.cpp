#include <iostream.h>
#include <conio.h>

void main ()
{
	int i,j;
   int L[4];

   for (i=0; i<=4; i++)
   {
   	cout<<"Masukkan Elemen Array ke "<<i<<" = ";
      cin>>L[i];
   }

   cout<<"Elemen Array L[4]:"<<endl;
   for (i=0; i<=4; i++)
   {
   	cout<<L[i];
      cout<<" ";
   }

   getch();
}