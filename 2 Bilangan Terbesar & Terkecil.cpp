#include <iostream.h>
#include <stdio.h>

main ()
{
	int data [10];
   int a,b;
   int max,min;

   printf("Masukkan Jumlah Bilangan: ");
   scanf("%d",&a);

   for (b=1;b<=a;b++)
   {
   	printf("\n\nbilangan ke-%d: ",b);
      scanf("%d",&data[b]);
   }

   max=data[1];
   min=data[1];
   for(b=1;b<=a;b++)
   if (data[b]>=max)
   {
   	max=data[b];
   }
   else if (data[b]<=min)
   {
   	min=data[b];
   }

   printf("\n\nnilai tertinggi:%d",max);
   printf("\n\nnilai terendah:%d",min);


}