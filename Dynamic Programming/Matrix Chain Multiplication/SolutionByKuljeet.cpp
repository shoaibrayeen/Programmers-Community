#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int MatrixChainMultiplication(int dims[], int i, int j)
{
	if (j <= i + 1)
		return 0;

	int min_cost = INT_MAX;
	for (int k = i + 1; k <= j - 1; k++)
	{
		int cost = MatrixChainMultiplication(dims, i, k);

		cost += MatrixChainMultiplication(dims, k, j);

		cost +=	dims[i] * dims[k] * dims[j];

		if (cost < min_cost)
			min_cost = cost;
	}

	return min_cost;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin >> arr[i];
	cout << MatrixChainMultiplication(arr, 0, n - 1);

	return 0;
}