#include <bits/stdc++.h>
using namespace std;
int knapsack(int max, vector<int>&wt, vector<int>&value, int n) //Knapsack function assigns the values into a matrix by tabular method
{
    int dp[n + 1][max + 1];
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= max; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (wt[i - 1] <= max) {

                if (dp[i - 1][j] >= (dp[i - 1][j - wt[i - 1]] + value[i - 1])) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j - wt[i - 1]] + value[i - 1];
                }
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][max];
}
int main()
{
    int n, cap;
    cout << "Enter the size: \n";
    cin >> n;
   vector<int> wt(n);
   vector<int> val(n);
    cout << "Enter the weights: \n";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }
    cout << "Enter the profits: \n";
    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }
    cout << "Enter the max weight of knapsack: \n";
    cin >> cap;
    cout << " Max profits is " << knapsack(cap, wt, val, n);
    return 0;
}
