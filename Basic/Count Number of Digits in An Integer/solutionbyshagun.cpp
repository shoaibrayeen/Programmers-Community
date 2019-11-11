#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    long int n;
    int count = 0;
    cout<<"Enter a number ";
    cin>>n;
    if(N==0)
    { 
      count++;
      cout<<"\nTotal Digits"<<count;
    }
    else
    {
    while(N!= 0)
    {
      count++;
      n /= 10;
    }
      cout<<"\nTotal digits:"<<count;
    }
   return 0;
}
