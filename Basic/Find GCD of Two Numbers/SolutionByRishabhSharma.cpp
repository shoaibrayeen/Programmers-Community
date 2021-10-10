#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    int a, b;
    cout << "\nFirst Number\t:\t";
    cin >> a;
    cout << "\nSecond Number\t:\t";
    cin >> b;
    cout << "\nGCD\t:\t" << gcd(a, b) << endl;
    return 0;
}
