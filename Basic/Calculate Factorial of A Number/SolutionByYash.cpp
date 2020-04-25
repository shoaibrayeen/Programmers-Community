#include<iostream.h>
#include<conio.h>

void main()
{
int fact=1,i,n;
cout<<"Enter the number: ";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"Factorial of given number is :"<<fact;
getch();
}

