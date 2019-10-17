#include <iostream>
using namespace std;

int DigitCount(long long num)
{
    if (num == 0) //Base case
        return 0;
    return 1 + DigitCount(num / 10);
}


int main(void)
{
    long long number ;
    cout<<"Enter a number: ";
    cin>>number;
    cout << "Total digits in the number "<<number<<" are "<<DigitCount(number);
    return 0;
}

