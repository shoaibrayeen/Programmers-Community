#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll n, i;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    cout << a[n - 2] << endl;

    return 0;
}
