#include <iostream.h>
#include <conio.h>

void main()
{
 float nilai;

 cout<<"Inputkan nilai : ";
 cin>>nilai;

 if((nilai>=90)&(nilai<=100))
 {
  cout<<"A";
 }
 else if((nilai>=80)&(nilai<=89))
 {
  cout<<"B";
 }
 else if((nilai>=70)&(nilai<=79))
 {
  cout<<"C";
 }
 else if((nilai>=60)&(nilai<=69))
 {
  cout<<"D";
 }
 else if((nilai>=0)&(nilai<=59))
 {
  cout<<"E";
 }

 getch();
}