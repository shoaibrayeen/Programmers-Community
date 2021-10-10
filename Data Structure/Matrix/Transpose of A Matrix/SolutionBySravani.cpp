#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(A[i][j], A[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    return 0;
}
