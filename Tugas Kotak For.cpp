#include<iostream.h>
#include<conio.h>

main ()
{

for(int i=1; i<10; i++)
	{
		for(int j=1; j<=9; j++)
      {
      	if(i==0 || i==9 || j==0 || j==9)
      	{
         	cout<<"*";
       	}
         else
         {
         	cout<<" ";
         }
 	  	}
   	cout<<endl;
   }
getch();
}