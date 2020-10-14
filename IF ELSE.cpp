#include <iostream.h>
#include <conio.h>

void main()
{
 float nilai;

 cout<<"Masukkan Nilai Mahasiswa: ";
 cin>>nilai;

 if ((nilai>=80)&(nilai<=100))
 {
  cout<<"Lulus";
 }
 else if((nilai>=0)&(nilai<=79)
 )
 {
  cout<<"Tidak Lulus";
 }

 getch();
}
