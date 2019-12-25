#include<iostream>

using namespace std;

int factorial(int x)
{
    int i,p=1;

    for(i=1;i<=x;i++)
    {
        p = p*i;
    }
return p;
}

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;

    cout<<"Factorial is "<<factorial(n);

return 0;
}
