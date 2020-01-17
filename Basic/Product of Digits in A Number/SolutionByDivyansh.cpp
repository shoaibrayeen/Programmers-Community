#include<iostream>
using namespace std;

int mulOfDigits(int N)
{
    int mul=1;
    while(N>0)
    {
        if(N%10==0)
        {
            N=N/10;
        }
        else 
        {
            mul=mul*(N%10);
            N=N/10;
        }
    }
    return mul;
}

int main()
{
    int N,result;
    cout<<"Enter a number: "<<endl;
    cin>>N;
    if(N!=0)
    {
        cout<<"Product of digits: "<<mulOfDigits(N)<<endl;
    }
    else
    {
        cout<<"Product of digits: "<<0<<endl;
    }
    return 0;
}
