#include <iostream.h>
#include <conio.h>
#define phi 3.14

void main ()
{
   int bil_x;
   float bil_y;

   cout <<"Masukkan Jari=";
   cin >> bil_x;
   cout <<"Masukkan Phi=";
   cin >> bil_y;

   cout <<"Luas Bola=" <<4*3.14*bil_x*bil_x<< endl;
   cout <<"Volume Bola=" <<4/3*(3.14*bil_x*bil_x*bil_x)<< endl;
   getch();


}
