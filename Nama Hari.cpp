#include <iostream.h>
#include <conio.h>

void main ()
{
	int nama_hari;
   cout <<"1. Senin"<< endl;
   cout <<"2. Selasa"<< endl;
   cout <<"3. Rabu"<< endl;
   cout <<"4. Kamis"<< endl;
   cout <<"5. Jumat"<< endl;
   cout <<"6. Sabtu"<< endl;
   cout <<"7. Minggu"<< endl;
   cout <<"==================="<<endl;
   cout <<"Masukkan Nama Hari: ";
   cin >>nama_hari;

   if (nama_hari==1)
   cout<<"Senin";
   else if (nama_hari==2)
   cout<<"Selasa";
   else if (nama_hari==3)
   cout<<"Rabu";
   else if (nama_hari==4)
   cout<<"Kamis";
   else if (nama_hari==5)
   cout<<"Jumat";
   else if (nama_hari==6)
   cout<<"Sabtu";
   else if (nama_hari==7)
   cout<<"Minggu";
   else
   cout<<"Kode yang anda masukkan salah";

   getch();
}