#include <bits/stdc++.h>
using namespace std;

int coin_change(vector<int>&arr, int c, int n)
{
vector<vector<int>>dp;

    for (int i = 0; i < c+1; i++)
        dp[0][i] = 0;

    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 1;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < c + 1; j++) {
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j] + dp[i][j - arr[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][c];
}

int main()
{
    int n, amount;

    cout << "Array Size ";
    cin >> n;
    vector<int> arr(n);

    cout << "\nEnter coins ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter sum ";
    cin >> amount;

    cout << "\nNo. of ways : " << coin_change(arr, amount, c);
}
