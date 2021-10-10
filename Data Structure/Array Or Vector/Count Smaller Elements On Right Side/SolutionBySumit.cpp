#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int n;

    cin >> n;

    vector<int> input(n), output(n, 0);

    for (int i = 0; i < n; i++)
        cin >> input[i];

    set<int> s;
    for (int i = n - 1; i >= 0; i--) {
        s.insert(input[i]);
        output[i] = distance(s.begin(), s.lower_bound(input[i]));
    }
    for (int i = 0; i < n; i++)
        cout << output[i] << " ";
    cout << endl;
}
