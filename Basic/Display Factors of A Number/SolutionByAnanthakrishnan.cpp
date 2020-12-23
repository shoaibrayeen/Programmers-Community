#include <bits/stdc++.h>           // Header Files 

void factors(int n)
{
    if ( n == 1 ) {
        cout <<  n << "\n";
        return;
    }
    for(int i = 1;i <= n/2;i++)
    {
        if(n%i == 0)
        {
            cout << i << "\t";
        }
    }
    cout << n << "\n";
}

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    cout << "\nFactors\n";
    factors(n);
    return 0;
}
