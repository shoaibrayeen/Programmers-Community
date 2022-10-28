#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    int fact = factorial(n);
    cout << fact << endl;
    return 0;
}
