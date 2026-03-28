//Number of digits in an Integer

#include <iostream>
using namespace std;

int main()
{
    long long int num;
    long long int n;
    cout << "Enter a positive integer ";
    cin >> num;
    n=num;

    int c = 0;
    while (n > 0) 
    {
        n /= 10;
        c++;
    }
    
    if (num >= 0) 
    {
        if (num != 0)
            cout << "\n Number of Digits in " << num << " is " << c;
        else
            cout << "\n Number of Digits in " << num << " is 1";
    
    }
    else
        cout << "\n Not a positive integer";
    return 0;
    }
