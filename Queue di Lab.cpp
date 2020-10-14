#include <iostream.h>
#include <conio.h>
#define max 7 // Jumlah maksimum data yang dimasukkan

int data[max];
int head=-1, tail=-1;

bool IsEmpty() // kondisi head pada saat kosong
{
	if(head == -1 && tail == -1)
   	return true;
   else
   	return false;
}

bool IsFull() // kondisi head pada saat penuh
{
	if(tail == max-1)
   	return true;
   else
   	return false;
}

void Enqueue() // Memasukkan Data
{
	if(IsFull())
   {
   	cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
      getch();
   }
   else
   {
      if(IsEmpty())
   	{
      	head=tail=0;
         cout<<"Masukan data : ";
         cin>>data[tail];
      }
      else
      {
   		tail++;
      	cout<<"Masukkan data: ";cin>>data[tail];
   	}
   }
}

void Dequeue() // Mengambil Data (Paling Atas)
{
	if(IsEmpty())
   {
		cout<<"Antrian kosong!";
      getch();
   }
   else
   {
   	cout<<"Data yang diambil :"<<data[head];
      int a;
      for(a=head; a<=tail-1; a++)
      	data[a]=data[a+1];
      tail--;
      if(tail==-1)
      head = -1;
   }
}

void Clear() // Menghapus Semua Data
{
	head=tail=-1;
   cout<<"Antrian sudah dikosongkan! ";
   getch();
}

void View() // Menampilkan Semua Data
{
	if(IsEmpty())
   {
   	cout<<"Antrian kosong! ";
      getch();
   }
   else
   {
   	int a;
      	for(a=head; a<=tail; a++)
         cout<<"Data pada antrian ke "<<a<<" = "<<data[a]<<endl;
         getch();
   }
}

main() // Menbampilkan Program
{
	int jawab;
   do
   {
   	clrscr();
      cout<<"------- Program Queue by adeethunix -------"<<endl;
      cout<<"1. Enqueue"<<endl;
      cout<<"2. Dequeue"<<endl;
      cout<<"3. Clear"<<endl;
      cout<<"4. View"<<endl;
      cout<<"5. Exit"<<endl;
      cout<<"Masukkan pilihan anda :"<<endl;
      cin>>jawab;

      switch(jawab)
      {
      	case 1:
         Enqueue();
         break;

         case 2:
         Dequeue();
         break;

         case 3:
         Clear();
         break;

         case 4:
         View();
         break;
      }
      getch();
   }
   while(jawab !=5);
}
