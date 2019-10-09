/* 
 Program Discription- It gives the factorial of a program.
 Solution by Simarpreet Singh
*/

#include<iostream.h>
#include<conio.h>
void main()
{
long int fact=1;
int no, i;
clrscr();
cout<<"Enter the any no. : ";
cin>>no;
for(i=1;i<=no;i++)
{
fact=fact*i;
}
cout<<"Factorial: "<<fact;
getch();
}
