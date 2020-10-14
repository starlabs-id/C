#include <iostream.h>
#include <conio.h>

main ()
{
   int x,y;
	int k[8]={3,5,1,6,7,4,9,8};

   cout<<"QUIZ PRAKTIKUM BASIS DATA (STACK) "<<endl<<endl;
   cout<<"Data Masukkan   : ";
   for(x=0; x<=7; x++)
   {
   	cout<<k[x]<<"";
   }
   	cout<<endl;

   cout<<"Pembalikan Data : ";
   for(y=7; y>=0 ;y--)
   {
   	cout<<k[y]<<"";
   }
   	cout<<endl;

	getch();
}
