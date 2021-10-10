#include <bits/stdc++.h>
using namespace std;
// function to check whether an integer is power of 2
bool isPoweroftwo(long long n)
{
    // if n and n-1 then it is false
    if (n & n - 1)
        return false;
    return true;
}
int main()
{
    long long n;
    cout << "Enter the number" << endl;
    cin >> n;
    if (isPoweroftwo(n))
        cout << "The given number is a power of two" << endl;
    else
        cout << "The given number is not a power of two" << endl;
}
