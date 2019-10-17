/*
Program Description:-Creating a program for calculating the factorial
                    of a number iteratively
-> The function fact() is used for calculating the factorial
*/
#include<iostream>

using namespace std;

long long int fact(int num)
{
    long long int ans=1;
    while(num)
    {
        ans*=num;
        num--;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter the number of which you wish to find a factorial"<<endl;
    cin>>num;
    long long int ans=fact(num);
    cout<<"The factorial of the given number is "<<ans<<endl;
}
