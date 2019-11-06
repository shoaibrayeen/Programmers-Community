/*
     A Number is given and You need to reverse it.
     Input :
           An Integer ( Positive )
*/
#include<iostream>
using namespace std;

int reverse(int num)
{
    int rev=0;
    for(int i=1;num>0;i++)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    return rev;
}
int main()
{
    int num;
    cout<<"Enter a number ";
    cin>>num;

    if(num>=0)
        cout<<"\nReverse of "<<num<<" is "<<reverse(num);
}
