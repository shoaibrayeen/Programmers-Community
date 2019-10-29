/*
     A positive number N is given to you and You need to calculate Nth Number in Fibonacci Series.
*/
#include<iostream>
using namespace std;

int fibonacci(int);

int main()
{   int num;
    cout<<"Enter a positive number ";
    cin>>num;

    if(num>0)
        cout<<"\n"<<num<<"th number in Fibonacci series is :"<<fibonacci(num);
    else
        cout<<num<<" is not positive";
}
int fibonacci(int n)
{
    int first=0,second=1,third;

    if (n==1)
          return first;
    else if(n==2)
          return second;
    else
    {

          for(int i=1;i<=n-2;i++)                          //using iteration
          {
                 third=second+first;
                 first=second;
                 second=third;
          }
          return third;
    }
}

