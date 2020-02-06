#include <iostream>
using namespace std;
int count_digits(long n)
{
    long temp=n;
    if(n==0)
    {
    	return 1;
    }
    else
    {
        int i=0;
        while(temp>0)
        {
            i++;
            temp=temp/10;
        }
        return i;
    }
}
int main() 
{	
    long a;
    cout<<"Enter the number: \n";
    cin>>a;
    cout<<"Number of digits: "<<count_digits(a);
    return 0;
}
