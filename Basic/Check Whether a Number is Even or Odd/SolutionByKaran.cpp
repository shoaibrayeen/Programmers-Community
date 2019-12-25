#include <iostream>
using namespace std;
void odd_even(int n)
{
    if(n & 1)
    {
        cout<<"Odd";
    }
    else 
    {
        cout<<"Even";
    }
}
int main() 
{	
    int a;
    cout<<"Enter a number: \n";
    cin>>a;
    odd_even(a);
    return 0;
}
