#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

#define MAX 10

int lookup[MAX][MAX];

int MatrixChainMultiplication(int dims[], int i, int j)
{
    if (j <= i + 1)
        return 0;

    int min_cost = INT_MAX;
    if (lookup[i][j] == 0) {
        for (int k = i + 1; k <= j - 1; k++) {
            int cost = MatrixChainMultiplication(dims, i, k);

            cost += MatrixChainMultiplication(dims, k, j);

            cost += dims[i] * dims[k] * dims[j];

            if (cost < min_cost)
                min_cost = cost;
        }
        lookup[i][j] = min_cost;
    }

    return lookup[i][j];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << MatrixChainMultiplication(arr, 0, n - 1);

    return 0;
}