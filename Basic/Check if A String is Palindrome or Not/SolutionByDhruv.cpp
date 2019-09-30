#include<iostream.h>
#include<conio.h>
void main()
{
 char s[15];
 cout<<"Enter a word";
 gets (s);
 palindrome (s);
 getch();
 }

void palindrome( char s[])
{ 
  int b=0, l=string.length(s)-1;
  while(b>l)
   {
     if(s[b++]!=s[l--])
      {
          cout<<"\nString is not a palindrome";
        }
     }
    cout<<"\nString is a palindrome"<<s;
  getch();
}
