#include <algorithm>
#include <iostream>
using namespace std;

int combination(int n, int k)
{
    int arr[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    return arr[n][k];
}

double allSubsetSum(int arr[], int n)
{
    double result = 0.0;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    for (int j = 1; j <= n; n++)
        result += (double)(sum * (combination(n - 1, j - 1))) / j;

    return result;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << allSubsetSum(arr, n) << endl;
    return 0;
}
