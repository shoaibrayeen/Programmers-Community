#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(ll n)
{

    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main()
{
    //code

    ll n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}
