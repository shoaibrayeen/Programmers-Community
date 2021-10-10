#include <bits/stdc++.h>
using namespace std;
int minArray(int* a, int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int main()
{
    int n;
    cout << "Enter Size " << endl;
    cin >> n;

    int* a = new int[n];
    cout << "Enter Elements " << endl;
    for (int i = 0; i < n; i++) {
        /* code */
        cin >> a[i];
    }

    cout << minArray(a, n);
    return 0;
}
