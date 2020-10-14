#include <iostream.h>
#include <conio.h>

void main ()
{
	int nilai[5]= {56,67,57,76,72};
   int i;

   for(i=0; i<5; i++)
   {
   	cout<<"Nilai Array Index ke - "<<i<<" = ";
      cout<<nilai[i]<<endl;
   }
   getch();
}