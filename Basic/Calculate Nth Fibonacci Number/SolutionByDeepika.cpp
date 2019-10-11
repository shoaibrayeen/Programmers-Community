#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()

{
    int n;
    cout<<"Enter the number upto which fibonacci has to be found\n";
    cin>>n;
    int res=fibo(n);
    cout<<"Fibonnacci number of "<<n<<"th term is "<<res;
    return 0;
}
