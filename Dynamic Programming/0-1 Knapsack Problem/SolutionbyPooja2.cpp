/*
    Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer
    arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity,
    find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete
    item, or don’t pick it

    #Bottom-Up approach
*/

#include<iostream>
using namespace std;

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int Knapsack(int *wt, int *val , int W, int n)
{
    int arr[n + 1][W + 1];

    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j < W + 1; j++)
            if(i == 0 || j == 0)
                arr[i][j] = 0;
    }
    for(int i = 1 ; i < n + 1; i++)
    {
        for(int j = 1; j < W + 1; j++)
        {

            if(wt[i-1] <= j )
                arr[i][j] = max(val[i - 1] + arr[i - 1][j - wt[i - 1]], arr[i - 1][j]);

            else
                arr[i][j] = arr[i - 1][j];
        }
    }

    return arr[n][W];
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


    int max_val = Knapsack(wt, val, W, n);

    cout << "Maximum value: " << max_val;
}
