#include <bits/stdc++.h>
using namespace std;


int rod_cutting(vector<int>length, vector<int>prices, int l)
{
    vector<vector<int>> dp;

    for (int i = 0; i < l + 1; i++) {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }

    for (int i = 1; i < l + 1; i++) {
        for (int j = 1; j < l + 1; j++) {
            if (length[i - 1] <= j)
                dp[i][j] = max(prices[i - 1] + dp[i][j - length[i - 1]], dp[i - 1][j]);

            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[l][l];
}
int main()
{
    int n;
    cout << "Enter the length of rod ";
    cin >> n;

    vector<int>prices(n), length(n);

    for (int i = 0; i < n; i++)
        length[i] = i + 1;

    cout << "Enter the prices for each pieces\n ";
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    cout << "Maximum price is : " << rod_cutting(length, prices, n) << endl;
}
