#include <iostream.h>
#include <conio.h>

void main ()
{
  int nim[9]={1,5,0,0,1,0,3,1,0};
  int k;

  cout<<"|       UTS PRAKTIKUM STRUKTUR DATA       |"<<endl;
  cout<<"|=========================================|"<<endl;
  cout<<"|           KEVIN RYAN RINALDI            |"<<endl;
  cout<<"|            150010310 | BC151            |"<<endl;
  cout<<"|_________________________________________|"<<endl<<endl;

  for(k=0; k<8; k++)
  {
  		cout<<"Nilai Array ke - "<<k<<" = ";
      cout<<nim[k]<<endl;
  }

  getch();
}

