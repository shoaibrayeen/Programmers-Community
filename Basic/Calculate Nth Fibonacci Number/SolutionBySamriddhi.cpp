#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 2)
        return n - 1;

    int i = 0, k = 1, f = 0;
    for (int j = 3; j <= n; j++) {
        f = i + k;
        i = k;
        k = f;
    }
    return f;
}
int main()
{
    int n;
    cin >> n; //Enter number n
    cout << fib(n); //Nth fibonacci number

    return 0;
}
