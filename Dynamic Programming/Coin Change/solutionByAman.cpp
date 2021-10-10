#include <bits/stdc++.h>
using namespace std;

int count(int S[], int m, int n)
{
    //we need a two dimensional matrix to store the result
    int table[m + 1][n + 1];

    // Initialize all table values as 0
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    for (int i = 0; i < m; i++) {
        table[0][i] = 1;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (S[i - 1] > j) {
                table[i][j] = table[i - 1][j];
            } else {
                table[i][j] = table[i - 1][j] + table[i][j - (i - 1)];
            }
        }
    }
    return table[m][n];
}

int main()
{
    int n, m;
    //Sum
    cin >> n;
    //Size of array
    cin >> m;
    //Array containing coins
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    cout << count(arr, m, n);
    return 0;
}
