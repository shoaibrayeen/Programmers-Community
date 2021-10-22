#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans;
}