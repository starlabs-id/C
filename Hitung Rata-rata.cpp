#include <iostream.h>
#include <conio.h>

void main ()
{
	float bil_a;
   float bil_b;
   float bil_c;
   float bil_d;
   float bil_e;

   cout <<"Masukkan sebuah bilangan:";
   cin >> bil_a;
   cout <<"Masukkan sebuah bilangan:";
   cin >> bil_b;
   cout <<"Masukkan sebuah bilangan:";
   cin >> bil_c;
   cout <<"Masukkan sebuah bilangan:";
   cin >> bil_d;
   cout <<"Masukkan sebuah bilangan:";
   cin >> bil_e;

   cout << "Rata-ratanya adalah=" <<(bil_a+bil_b+bil_c+bil_d+bil_e)/5<<endl;
   getch ();
}