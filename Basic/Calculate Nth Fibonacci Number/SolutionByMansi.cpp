#include<iostream.h>
#include<conio.h>

int fib(int n)
{
  if(n==0||n==1)
    return 1;
  else
  {
    return fib(n-1)+fib(n-2);
   }
  }
  
void main()
{
  clrscr();
  int n;
  cout<<"which fibonacci number you want to know?";
  cin>>n;
  cout<<"The "<<n<<"th fibonacci number is "<<fib(n);
  getch();
}
