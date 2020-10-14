#include<iostream.h>
#include<conio.h>

main()
{
int latihan2[4][3] = {{10, 30, 50},{40, 60, 20},{70, 80, 90},{100, 110, 120}};
int i,j;

for(i=0; i<4; i++)
{
  	for(j=0; j<3; j++)
   {
		cout<<latihan2[i][j];
      cout<<" ";
   }
   cout<<endl;
}

getch();
}