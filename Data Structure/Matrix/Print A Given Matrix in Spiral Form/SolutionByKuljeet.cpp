#include <algorithm>
#include <iostream>
using namespace std;

#define R 3
#define C 3
void printSpiral(int arr[R][C], int n, int m)
{
    int i, k = 0, l = 0;
    while (k < m && l < n) {
        for (i = 1; i < n; ++i) {
            cout << arr[k][i];
        }
        k++;
        for (i = k; i < m; ++i) {
            cout << arr[i][n - 1];
        }
        n--;
        if (k < m) {
            for (i = n - 1; i >= 1; --i) {
                cout << arr[m - 1][i];
            }
            m--;
        }
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << arr[i][l];
            }
            l++;
        }
    }
}

int main()
{
    int arr[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }

    printSpiral(arr, C, R);
    return 0;
}