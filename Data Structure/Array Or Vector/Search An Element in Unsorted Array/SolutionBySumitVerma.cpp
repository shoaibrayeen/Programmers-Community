#include <bits/stdc++.h>
using namespace std;
bool search(int a[], int n, int e)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == e)
            break;
    if (i < n)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ele, i;
    cin >> ele;

    if (search(a, n, ele))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
