#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n != 1) {
        return n * factorial(n - 1);
    } else
        return 1;
}
int main()
{
    int n;
    cin >> n;
    long long int ans;
    if (n == 0 || n == 1)
        cout << 1;
    else {
        ans = factorial(n);
        cout << ans;
    }
}
