#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void palindrome (char string,int letters);
void main()
{
 int letters;
 char string;
 cout<<"Enter word of letters of your choice";
 cin>>string;
 letters=strlen(string);
 palindrome (string,letters);
 getch();
 }

void palindrome( char string, int letters)
{
  int flag=0;
  for(int i=0;i < letters ;i++)
  {
	if(string[i] != string[letters-i-1])
	 {
	    flag = 1;
	    break;
	   }
    }
    if (flag)
     {
	cout << string << " is not a palindrome" << endl;
       }
     else
     {
	cout << string << " is a palindrome" << endl;
       }
  getch();
}
