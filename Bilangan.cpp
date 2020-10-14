#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
	int x,y;
	int K[100];
	cout<<"Masukkan Jumlah Bilangan = ";
	cin>>y;
	cout<<endl;

	for(x=1; x<=y; x++)
	{
		cout<<"Masukkan Bilangan ke-"<<x<<" = ";
		cin>>K[x];

		if(K[x]%2==0)
		cout<<"";
		else
		break;
	}

	cout<<endl;
	cout<<"Elemen Array : "<<endl;

	for(x=1; x<=y; x++)
	{
		if(K[x]%2==0)
		{
			cout<<K[x];
			cout<<" ";
		}
		else
		break;
	}

	getch();
}