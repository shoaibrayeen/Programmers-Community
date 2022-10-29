#include <bits/stdc++.h>
using namespace std;

// Returns minimum difference between maximum
// and minimum values of distribution.
int minDiff(vector<int>arr, int n, int m)
{
    if (m > n)
        return -1;

    sort(arr.begin(), arr.end());
    int res = arr[m - 1] - arr[0];
    for (int i = 1; (i + m - 1) < n; i++)
        res = min(res, (arr[i + m - 1] - arr[i]));

    return res;
}

int main()
{
    int n, a;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    { 
      cin >> a;
      arr.push_back(a);
    }
    int m;
    cin >> m;
    cout << minDiff(arr, n, m);
    return 0;
}
