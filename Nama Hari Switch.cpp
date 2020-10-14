#include <iostream.h>
#include <conio.h>

void main ()
{
	int kode_hari;

   clrscr();

   	cout <<"Menentukan Hari"<< endl;
      cout <<"1= Senin; 2= Selasa; 3= Rabu; 4= Kamis"<< endl;
      cout <<"5= Jumat; 6= Jumat; 7= Minggu"<< endl;
      cout <<"Kode hari (1.....7)"<< endl;
      cout <<"======================================="<<endl;
      cout <<""<<endl;
      cout <<"Masukkan Nama Hari: ";
      cin >> kode_hari;

      switch (kode_hari)
      {
      	case 1:
         cout <<"Senin"<< endl;
         break;
         case 2:
         cout <<"Selasa"<< endl;
         break;
         case 3:
         cout <<"Rabu"<< endl;
         break;
         case 4:
         cout <<"Kamis"<< endl;
         break;
         case 5:
         cout <<"Jumat"<< endl;
         break;
         case 6:
         cout <<"Sabtu"<< endl;
         break;
         case 7:
         cout <<"Minggu"<< endl;
         break;

         default:
         cout <<"Kode Hari Salah"<< endl;
         break;
      }

      getch();
}
