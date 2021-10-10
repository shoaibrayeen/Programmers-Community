#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int c = 0;
    if (n == 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            c++;
        }
    }
    if (c > 0) {
        return false;
    } else {
        return true;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (isPrime(a))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}