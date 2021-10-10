#include <bits/stdc++.h>
using namespace std;

long long ugly(long long n)
{

    long long dp[n] = { 1 };

    long long i2 = 0, i3 = 0, i5 = 0;

    long long next_ugly_2 = dp[i2] * 2;
    long long next_ugly_3 = dp[i3] * 3;
    long long next_ugly_5 = dp[i5] * 5;

    for (int i = 1; i < n; ++i) {

        long long next_no = min(next_ugly_2, min(next_ugly_3, next_ugly_5));

        dp[i] = next_no;

        if (next_no == next_ugly_2) {
            i2++;
            next_ugly_2 = dp[i2] * 2;
        }

        if (next_no == next_ugly_3) {
            i3++;
            next_ugly_3 = dp[i3] * 3;
        }

        if (next_no == next_ugly_5) {
            i5++;
            next_ugly_5 = dp[i5] * 5;
        }
    }

    return dp[n - 1];
}

int main()
{
    long long n;
    cin >> n;
    cout << ugly(n);

    return 0;
}
