#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char str[100], temp[100];
	int i, j=0;
	cout<<"Enter the String : ";
	gets(str);
	
	for(i=strlen(str)-1;i>=0;i--)
  {
    temp[j]=str[i];
    j++;
  }
	cout<<"Reverse of the String = "<<temp;
	getch();
}
