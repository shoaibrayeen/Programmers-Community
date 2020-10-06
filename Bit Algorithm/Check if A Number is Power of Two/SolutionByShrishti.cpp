#include<bits/stdc++.h>

using namespace std;
bool isPoweroftwo(long long n)
{
    if(n & n-1)
    return false;
    return true;
}
int main()
{
    long long n;
    cout<<"Enter the number that you want to check"<<endl;
    cin>>n;
    
    if(isPoweroftwo(n))
        cout<<"The given number is a power of two"<<endl;
    else
        cout<<"The given number is not a power of two"<<endl;
}
