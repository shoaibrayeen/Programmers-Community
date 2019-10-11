#include<iostream>

using namespace std;

int fibonacci(int x)
{
    int a,b,c,i;
    a=0;
    b=1;

    if(x==0)
    {
        return 0;
    }

    else if(x==1)
    {
        return 1;
    }

    else{
    for(i=2;i<=x;i++)
    {

        c=a+b;
        a=b;
        b=c;


    }

return c;

    }
}

int main()
{
    int n;

    cout<<"Enter the value of n\n";
    cin>>n;

    cout<<n<<"th Number in Fibonacci Series :- "<<fibonacci(n);


return 0;
}
