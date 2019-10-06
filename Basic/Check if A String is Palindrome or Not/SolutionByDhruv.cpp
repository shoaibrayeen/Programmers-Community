#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char letters;
 cout<<"Enter letters in a word";
 cin>>(letters);
 char string[letters];
 cout<<"Enter word of "<<letters;
 gets(string[letters]);
 palindrome (string,letters);
 getch();
 }

void palindrome( char string[], int letters)
{ 
  for(i=0;i < letters ;i++){
        if(string[i] != string[length-i-1])
     {
            flag = 1;
            break;
       }
    if (flag)
     {
        cout << string1 << " is not a palindrome" << endl; 
       }    
     else
     {
        cout << string1 << " is a palindrome" << endl; 
       }
  getch();
}
