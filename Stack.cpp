#include <iostream>
#include <conio>

const MAX_STACK=10;

struct my_STACK{
	int top;
   int data[20];
};

my_STACK tumpuk;

void inisialisasi(){
	tumpuk.top=-1;
}

int isFULL(){
    if (tumpuk.top==MAX_STACK-1){
    	return 1;
    }else{
    	return 0;
    }

}

int isEMPTY(){
	if (tumpuk.top==-1){
   	return 1;
   }else{
   	return 0;
   }
}

void push(int data){
	tumpuk.top=tumpuk.top+1;
   tumpuk.data[tumpuk.top]=data;
}

void pop(){
	cout<<"Nilai yang di pop : "<<tumpuk.data[tumpuk.top]<<endl;
   tumpuk.top--;
}

void printSTACK(){
	for(int i=tumpuk.top;i>-1;i--){
   	cout<<"Nilai tumpuk "<<i<<" : "<<tumpuk.data[i]<<endl;
   }
}

int main(){
	inisialisasi();
   int pilih=0, nilai=0;

   cout<<"|       UTS PRAKTIKUM STRUKTUR DATA       |"<<endl;
   cout<<"|=========================================|"<<endl;
   cout<<"|                STARLABS                 |"<<endl;
   cout<<"|              1700 | 02788               |"<<endl;
   cout<<"|_________________________________________|"<<endl<<endl;

	do{
   	cout<<"=====MENU====="<<endl;
      cout<<"1. Push"<<endl;
      cout<<"2. Pop"<<endl;
      cout<<"3. Print"<<endl;
      cout<<"4. Exit"<<endl;
      cout<<"=====MENU====="<<endl;
      cout<<"Pilih : ";
      cin>>pilih;

      switch(pilih){
      	case 1 :
         	cout<<"Masukkan Nilai : ";
            cin>>nilai;
            if (isFULL()==0){
            	push(nilai);
            }else{
            	cout<<"STACK FULL"<<endl;
            }
         break;
         case 2 :
            if (isEMPTY()==0){
         		pop();
            }else{
            	cout<<"STACK EMPTY"<<endl;
            }
         break;
         case 3 :
            printSTACK();
         break;
         case 4 :
         	cout<<"Terima Kasih ";
         break;

      }


   }while(pilih!=4);

   char ch=getch();

}
