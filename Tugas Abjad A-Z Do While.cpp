#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
	char abjad= 'A';

   do
   {
   	cout <<abjad<< endl;
      abjad+=1;
   }
   while (abjad<='Z');
   getch ();
}