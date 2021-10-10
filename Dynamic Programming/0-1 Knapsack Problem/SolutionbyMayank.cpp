#include <bits/stdc++.h>
using namespace std;

const int M = 1000;
const int N = 1000;

int static arr[M][N];

int Knapsack(int* wt, int* val, int W, int n)
{

    if (n == 0 || W == 0)
        return 0;

    if (arr[n][W] != -1)
        return arr[n][W];

    if (wt[n - 1] <= W)
        return arr[n][W] = max(val[n - 1] + Knapsack(wt, val, W - wt[n - 1], n - 1), Knapsack(wt, val, W, n - 1));

    else if (wt[n - 1] >= W)
        return arr[n][W] = Knapsack(wt, val, W, n - 1);
}

int main()
{
    int n, W;

    cout << "Enter no. of item ";
    cin >> n;

    int* wt = new int[n];
    int* val = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the weight and value of " << i + 1 << " item : ";
        cin >> wt[i] >> val[i];
    }

    cout << "Enter Max. capacity of Knapsack ";
    cin >> W;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++)
            arr[i][j] = -1;
    }

    int max_val = Knapsack(wt, val, W, n);

    cout << "Maximum value\t: " << max_val;
}
