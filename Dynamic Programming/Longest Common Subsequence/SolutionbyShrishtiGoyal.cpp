
#include <bits/stdc++.h>
using namespace std;


int lcs(string x, string y)
{
  int n = x.length();
  int m = y.length();
  vector<vector<int>> dp;

    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;

    for (int i = 0; i < m + 1; i++)
        dp[0][i] = 0;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[n][m];
}

int main()
{
    string s1, s2;

    cout << "Enter first string  ";
    cin >> s1;

    cout << "Enter second string ";
    cin >> s2;

    cout << lcs(s1, s2);
}
