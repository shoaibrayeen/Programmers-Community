/*
   A Number is given and You need to find sum of all digits in the number.
   Input:
        An Integer ( Positive )
*/
#include<iostream>
using namespace std;

int digit_sum(int n)
{
    int sum=0;
    for(int i=1;n>0;i++)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter a number ";
    cin>>num;

    if(num>=0)
           cout<<"\nSum of all digits of "<<num<<" is "<<digit_sum(num);
}
