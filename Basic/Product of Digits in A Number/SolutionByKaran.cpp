#include <iostream>
using namespace std;
long product(long n)
{
    long p=1;
    while(n>0)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        p=p*(n%10);
        n=n/10;
    }
    return p;
}
int main() 
{
    long a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The product is: "<<product(a);
    return 0;
}
