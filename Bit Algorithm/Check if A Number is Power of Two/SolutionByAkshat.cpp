/*
Program Description:-Finding whether a given number is a power of two or not
->checktwo() function performs the operation  of checking that whether a number is a power of two or not
*/
#include<iostream>

using namespace std;
int checktwo(int n)
{
    while(n%2==0&&n!=1&&n!=0)
    {
        n/=2;
    }
    if(n==1||n==-1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter the number that you want to check"<<endl;
    cin>>n;
    int ans=checktwo(n);
    if(ans==1)
        cout<<"The given number is a power of two"<<endl;
    else
        cout<<"The given number is not a power of two"<<endl;
}
