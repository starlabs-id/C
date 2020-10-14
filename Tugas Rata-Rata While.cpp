#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
	int pencacah;
   float nilai;
   float total;

   clrscr();
   cout	<< "Menghitung Nilai Rata-rata"	<<endl;
   cout	<< "Akhiri dengan memasukkan nilai negatif"	<<endl;

   pencacah	=	0;
   total		=	0;

   cout	<<"Nilai = ";
   cin	>>nilai;

   while (nilai>=0)
   {
   	pencacah++;
      total+=nilai;

      cout	<<"Nilai	= ";
      cin	>>	nilai;
   }
   cout	<<"Nilai Rata-Rata= " <<total/pencacah<<endl;
   getch ();
}
