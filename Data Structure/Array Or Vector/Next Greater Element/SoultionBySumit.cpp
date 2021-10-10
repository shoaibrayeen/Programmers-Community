#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int n;

    cin >> n;

    vector<int> input(n), output(n, -1);

    for (int i = 0; i < n; i++)
        cin >> input[i];

    stack<int> s;
    for (int i = n - 1; i >= 0; i--) {

        while (!s.empty() && s.top() <= input[i])
            s.pop();

        if (!s.empty())
            output[i] = s.top();

        s.push(input[i]);
    }
    for (int i = 0; i < n; i++)
        cout << output[i] << " ";
    cout << endl;
}
