#include<iostream>

using namespace std;
int fib(int n)
{

    int num=0;
    int num2=1;
    int temp;
    if(n==1)
        return num;
    else if(n==2)
        return num2;
    else
    {
        for(int i=3;i<=n;i++)
        {
            temp=num;
            num=num2;
            num2=temp+num;
        }
        return num2;
    }
}
int main()
{
    int num=0;
    int num2=1;
    int n;
    int temp;
    cout<<"Enter a number n to know the nth term in the fibonacci sequence"<<endl;
    cin>>n;
    int ans=fib(n);
    cout<<"The "<<n<<"th number in the fibonacci series is "<<ans<<endl;
}
