#include <iostream>
using namespace std;
long product(long n)
{
    if ( n == 0 ) {
        return 0;
    }
    long p=1;
    while(n>0)
    {
        if(n%10 != 0) {
            p=p*(n%10);
        }
        n=n/10;
    }
    return p;
}
int main()
{
    long a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The product is: "<<product(a) << endl;
    return 0;
}
