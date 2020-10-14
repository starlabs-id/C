#include <iostream.h>
#include <conio.h>

main()
{
	int n1=0, n2=1, n3=0;
               
   for (int i=1; i<=10; i++)
   	{
   		cout<<n3<<endl;
   	   n3=n1+n2;
  		   n2=n1;
   	   n1=n3;
  		}

   getch();
}