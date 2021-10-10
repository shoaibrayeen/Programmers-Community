#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void two(ll a[], ll n)
{
    ll i, result = 0;
    for (i = 0; i < n; i++)
        result = result ^ a[i];
    ll temp = result;
    i = 0;
    while (temp > 0) {
        if (temp & 1)
            break;
        else {
            i++;
            temp = temp >> 1;
        }
    }
    ll mask = 1 << i;
    ll firstno = 0;
    for (i = 0; i < n; i++) {
        if ((mask & a[i]) != 0)
            firstno = firstno ^ a[i];
    }
    cout << firstno << endl;
    ll secondno = result ^ firstno;
    cout << secondno << endl;
}

int main()
{
    ll n, i;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    two(a, n);
    return 0;
}
