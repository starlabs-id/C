#include <iostream.h>
#include <conio.h>

void main()
{
	int k [11] = {1,2,3,4,5,6,7,8,9,0,1};

   for(int q=0; q<11; q++)
   {
   	cout<<k[q];
   }
   cout<<" "<<endl;
   cout<<endl;

   	for(int w=10; w>=0; w--)
      {
			cout<<k[w];
   	}
getch();
}

