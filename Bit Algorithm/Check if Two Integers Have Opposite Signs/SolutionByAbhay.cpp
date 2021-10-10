#include <bits/stdc++.h>
using namespace std;
bool isTwoDifferentSign(signed int a, signed int b)
{
    return ((a ^ b) < 0);
}
int main()
{
    signed int x, y;
    cin >> x >> y;
    if (isTwoDifferentSign(x, y))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}