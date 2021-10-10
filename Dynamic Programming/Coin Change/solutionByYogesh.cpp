#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define debug(x) \
    (cerr << #x << ": " << (x) << endl)

ll mini;
ll c, n;
vector<ll> coins;
vector<ll> solutions;

void minCoins(ll j)
{
    for (int i = 0; i < n; i++) {
        if (coins[i] <= j) {
            mini = min(solutions[j - coins[i]] + 1, solutions[j]);
            solutions[j] = mini;
        }
    }
}

ll getMinCoins()
{
    int i;
    for (i = 1; i <= c; i++) {
        solutions.push_back(INT64_MAX - 1);
        minCoins(i);
    }
    return solutions[c];
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> c >> n;

    ll data;
    solutions.push_back(0);
    for (int i = 0; i < n; i++) {
        cin >> data;
        coins.push_back(data);
    }

    mini = getMinCoins();
    if (mini == (INT64_MAX - 1)) {
        cout << "impossible";
        return 0;
    }
    cout << mini;
    return 0;
}
