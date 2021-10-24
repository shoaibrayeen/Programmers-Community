#include <bits/stdc++.h>
using namespace std;
long long factorial(long long n)
{
    if (n <= 1)
        return 1;
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
    long long n;
    cin >> n;
    long long ans = factorial(n);
    cout << ans;
}
