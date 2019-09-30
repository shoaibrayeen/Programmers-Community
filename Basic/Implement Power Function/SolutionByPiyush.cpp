#include <iostream>
using namespace std;

int raise_to_power(int number, int power)
{
    int result = 1;
    result = number;
    for(int i = 2; i <= power; i++)
    {
        result = result * number;
    }
    return result;
}

int main()
{
    int number=0, power=0;
    cout<<"\nenter the number:";
    cin>>number;
    cout<<"\nEnter the power to which you want to raise the number:";
    cin>>power;
    
    cout<<raise_to_power(number, power);
    
    return 0;
}
