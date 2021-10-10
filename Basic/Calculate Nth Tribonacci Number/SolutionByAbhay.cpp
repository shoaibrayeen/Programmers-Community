#include <bits/stdc++.h>
using namespace std;
int tribonacci(int n)
{
    if (n == 2 || n == 1) {
        return 0;
    }
    if (n == 3) {
        return 1;
    }
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        cout << tribonacci(a);
    }
    return 0;
}
