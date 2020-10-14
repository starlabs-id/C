#include<iostream.h>
#include<conio.h>

main()
{
short total, n;
float rata,jumlah;

total=0;

cout<<"Jumlah Nilai Yang Akan Input = ";
cin>>jumlah;

for(int i=1; i<=jumlah; i++)
{
cout<<"Masukkan Nilai "<<i<<" = ";
cin>>n;
total = total + n;
rata = total / jumlah;
}
cout<<"Total Keseluruhan = "<<total<<endl;
cout<<"Rata - Rata       = "<<rata<<endl;

getch();
}
