/*
 Program Description - This program checks whether the string is palindrome or not
 Solution description - Getting the string as input, reverse it , and check it with origional.
 */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

 void Check_Palindrome(char s[])
 {
   int len = strlen(s);
   int flag = 1;

   for(int i=0;i<len/2;i++)
   {
     if (s[i]!=s[len-i-1])
	flag = 0;
   }
   if(flag == 0)
   { cout<<"\n NO ";
   }
   else
   {
    cout<<"\n YES ";
   }
 }

  void main()
  {
   clrscr();
   char str[100];
   cout<<"\n Enter the string you want to check for Palindrome :\t";
   gets(str);
   Check_Palindrome(str);
   getch();
  }
