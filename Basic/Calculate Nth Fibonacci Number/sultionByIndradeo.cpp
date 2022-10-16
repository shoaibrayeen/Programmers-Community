#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int a;
    cout << "Enter which position of number you want: ";
    cin >> a;
    cout << fibonacci(a);
    return 0;
}