#include <bits/stdc++.h>
#include <climits>
using namespace std;

int SecondLargest(int* a, int n)
{
    sort(a, a + n);
    if (n == 1) {
        return -1;
    }
    return a[n - 2];
}

int main()
{
    int n;
    cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k = SecondLargest(a, n);

    if (k == -1)
        cout << "No Second Largest Number";
    else
        cout << k;

    return 0;
}
