#include <iostream>
using namespace std;
void calculate_reverse(long a)
{
    long sum=0,t=a,b=1;
    int c=0;
    while(t>0)
    {
        t=t/10;
        c++;
    }
    for(int i=0;i<c-1;i++)
    {
        b = b * 10;
    }
    while(a>0)
    {
        sum = sum + ((a%10)*b);
        a=a/10;
        b=b/10;
    }
    cout<<"Reverse digit is: "<<sum<<endl;
}
int main() 
{
    long b;
    cout<<"Enter the number: ";
    cin>>b;
    cout<<endl;
    calculate_reverse(b);
    return 0;
}
