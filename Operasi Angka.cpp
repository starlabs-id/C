#include <iostream.h>
#include <conio.h>

void main ()
{
   int a,b,c;

   cout <<"Latihan Operasi Angka"<< endl;
   cout <<"1. Penjumlahan"<< endl;
   cout <<"2. Pengurangan"<< endl;
   cout <<"3. Perkalian"<< endl;
   cout <<"4. Pembagian"<< endl <<endl;

   cout <<"Masukkan Angka Pertama : ";
   cin >> a;
   cout <<"Masukkan Angka Kedua   : ";
   cin >> b;
   cout <<"Masukkan Menu          : ";
   cin >> c;

   switch (c)
   {
   	case 1:
      c=a+b;
      cout <<"Hasil = "<<c<< endl;
      break;
      case 2:
      c=a-b;
      cout <<"Hasil = "<<c<< endl;
      break;
      case 3:
      c=a*b;
      cout <<"Hasil = "<<c<< endl;
      break;
      case 4:
      c=a/b;
      cout <<"Hasil = "<<c<< endl;
      break;

      default:
      cout <<"Kode Anda Salah"<<endl;
      break;
   }

   getch();
}