#include<iostream.h>
#include<conio.h>

int fib(int n)
{
  if(n==0||n==1)
    return n;
  else
  {
    fib(n)=fib(n-1)+fib(n-2)
    return fib(n);
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
