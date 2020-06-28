/*
    Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer
    arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity,
    find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete
    item, or don’t pick it
*/

#include<iostream>
using namespace std;

const int M = 100;
const int N = 100;

int static arr[M][N];

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int Knapsack(int *wt, int *val , int W, int n)
{

    if(n == 0 || W == 0)
        return 0;

    if(arr[n][W] != -1)
        return arr[n][W];

    if(wt[n-1] <= W )
        return arr[n][W] = max(val[n-1] + Knapsack(wt, val, W - wt[n-1], n - 1), Knapsack(wt, val, W, n-1));

    else if(wt[n-1] >= W)
        return arr[n][W] = Knapsack(wt, val, W, n-1);
}

int main()
{
    int n, W;

    cout << "Enter no. of item ";
    cin >> n;

    int *wt = new int [n];
    int *val = new int [n];

    for(int i = 0; i < n; i++)
    {
        cout <<"Enter the weight and value of " << i + 1 << " item : ";
        cin >> wt[i] >> val[i];
    }

    cout << "Enter Max. capacity of Knapsack ";
    cin >> W;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0;j <= W; j++)
            arr[i][j] = -1;
    }

    int max_val = Knapsack(wt, val, W, n);

    cout << "Maximum value\t: " << max_val;
}
