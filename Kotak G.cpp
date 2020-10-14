#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	int n=0;
   cout<<"Masukkan Nilai: ";
   cin>>n;
   cout<<endl;
   
   for (int i=0; i<n; i++)
   	{
      	for (int j=0; j<n; j++)
      		{
             	if (((i==0)||(j==0))||(i==(n-1))||(j==(n-1)))
         			{
               		cout<<"*";
      				}
      			else
         			{
          			  	if((i>=2)&&(j>=2))
               			{
                   			if((i<=(n-3))&&(j<=(n-3)))
                  				{
                     				cout<<"*";
	                     		}
   	                  	else
      	            			{
         	            			if((i==(n-1))||(j==(n-1)))
            	            			{
               	            			cout<<"*";
                  	         		}
                     	   		else
                        				{
                           				cout<<" ";
                           			}
                     			}
                        }
               		else
               			{
                  			cout<<" ";
               			}
           			 }
            	}
               cout<<endl;
      }
   getch();
}