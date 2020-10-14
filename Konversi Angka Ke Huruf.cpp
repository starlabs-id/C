#include <iostream.h>
#include <conio.h>

void main ()
{
	int kode_angka;

   clrscr();

   	cout <<"Mengkoversi Angka ke Huruf"<< endl;
      cout <<""<<endl;
      cout <<"1-5= A"<< endl;
      cout <<"6-10= B"<< endl;
      cout <<"11-15= C"<< endl;
      cout <<"Kode angka (1.....15)"<< endl;
      cout <<"==========================="<<endl;
      cout <<""<<endl;
      cout <<"Masukkan Angka: ";
      cin >> kode_angka;

      switch (kode_angka)
      {
      	case 1:
         cout <<"A"<< endl;
         break;
         case 2:
         cout <<"A"<< endl;
         break;
         case 3:
         cout <<"A"<< endl;
         break;
         case 4:
         cout <<"A"<< endl;
         break;
         case 5:
         cout <<"A"<< endl;
         break;
         case 6:
         cout <<"B"<< endl;
         break;
         case 7:
         cout <<"B"<< endl;
         break;
         case 8:
         cout <<"B"<< endl;
         break;
         case 9:
         cout <<"B"<< endl;
         break;
         case 10:
         cout <<"B"<< endl;
         break;
         case 11:
         cout <<"C"<< endl;
         break;
         case 12:
         cout <<"C"<< endl;
         break;
         case 13:
         cout <<"C"<< endl;
         break;
         case 14:
         cout <<"C"<< endl;
         break;
         case 15:
         cout <<"C"<< endl;
         break;

         default:
         cout <<"Kode yang Anda masukkan salah"<< endl;
         break;
      }

   getch();
}