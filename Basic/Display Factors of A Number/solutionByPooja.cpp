/*
    A positive number N is given to you and You need to prints all the factor of the number.
*/
#include<iostream>
using namespace std;

void factor(int n)
{
    cout<<"1";
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            cout<<" "<<i;
    }
    cout<<" "<<n;
}
int main()
{
    int num;
    cout<<"Enter a positive number ";
    cin>>num;

    if(num>=0)
    {

        if(num==0)
            cout<<num;
        else if(num==1)
            cout<<num;
        else
            factor(num);
    }
}
