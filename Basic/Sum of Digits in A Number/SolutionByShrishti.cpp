#include <iostream.h>
void calculatesum(long b)
{
    long sum=0;
    while(b>0)
    {
        sum = sum + (b%10);
        b=b/10;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
}
int main() 
{
    long x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<endl;
    calculatesum(x);
    return 0;
}
