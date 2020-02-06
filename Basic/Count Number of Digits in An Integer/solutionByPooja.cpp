/*
     A positive number N is given to you and You need to Count Number of Digits in An Integer.
*/
#include<iostream>
using namespace std;

int count_digit(long long int n)
{
    int count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    return count;
}

int main()
{
    long long int  num;
    cout<<"Enter a positive integer ";
    cin>>num;

    if(num>=0)
    {
        if(num!=0)
             cout<<"\nNumber of Digits in "<<num<<" is "<<count_digit(num);
        else
             cout<<"\nNumber of Digits in "<<num<<" is 1";

    }

    else
          cout<<"\nNot a positive integer";
    return 0;
}
