#include<iostream.h>
#include<conio.h>
void main()
{
 char string[15];
 cout<<"Enter a word";
 gets (string);
 palindrome (string);
 getch();
 }

void palindrome( char string[])
{ 
  int check=0, l=string.length(string)-1;
  while(check>l)
   {
     if(string[b++]!=string[l--])
      {
          cout<<"\nString is not a palindrome";
        }
     }
    cout<<"\nString is a palindrome"<<string;
  getch();
}
