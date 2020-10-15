#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main ()
{
   int k,r,baris,kolom,a[10][10],b[10][10],hasil[10][10];

   cout<<"|       UTS PRAKTIKUM STRUKTUR DATA       |"<<endl;
   cout<<"|=========================================|"<<endl;
   cout<<"|                STARLABS                 |"<<endl;
   cout<<"|               1700 | 02558              |"<<endl;
   cout<<"|_________________________________________|"<<endl<<endl;

	do
   {
   	cout<<"Jumlah Baris = ";
      cin>>baris;
      cout<<"Jumlah Kolom = ";
      cin>>kolom;
   }
   while((baris>10)||(kolom>10));

   cout<<"\nMatrix A"<<endl;
   for(k=0; k<baris; k++)
   for(r=0; r<kolom; r++)
   	{
      	cout<<"data["<<k<<","<<r<<"]=";
         cin>>a[k][r];
      }

	cout<<"\nMatrix B"<<endl;
   for(k=0; k<baris; k++)
   for(r=0; r<kolom; r++)
   	{
      	cout<<"data["<<k<<","<<r<<"]=";
         cin>>b[k][r];
      }

   for(k=0; k<baris; k++)
   for(r=0; r<kolom; r++)
   hasil[k][r]=a[k][r]+b[k][r];
   cout<<"\nHasilnya..."<<endl;
   cout<<"Matrix A + Matrix B = Matrix C";
   for(k=0; k<baris; k++)
   	{
      	cout<<'\n';
         for(r=0; r<baris; r++)
         cout<<setw(4)<<a[k][r];
         cout<<" ";
         for(r=0; r<baris; r++)
         cout<<setw(4)<<b[k][r];
         cout<<" ";
         for(r=0; r<baris; r++)
         cout<<setw(4)<<hasil[k][r];
         cout<<" ";
         cout<<endl;
   	}

	getch();
}
