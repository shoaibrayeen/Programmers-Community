/*
    A Sequence is given and you need to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are
    sorted in increasing order.

    Input   :   {3, 10, 2, 1, 20}
    Output  :   3
*/

#include<iostream>
#include<cstring>
using namespace std;

int t[1001][1001];

int max(int a, int b)
{
    return a > b ? a : b;
}

int LIS(int *X, int m, int n)
{
    if(m == 0 || n == 0)
        return 0;

    if(t[m ][n] != -1)
        return t[m][n];

    if(X[n - 1] >= X[m - 1])
        return t[m][n] = max(1 + LIS(X, m - 1, m), LIS(X, m - 1, n));
    else
        return t[m][n] = LIS(X, m - 1, n);
}
int main()
{
    int N;
    cout << "Size ? ";
    cin >> N;
    cout << "Enter Sequence ";
    int *arr = new int[N];

    memset(t, -1, sizeof(t));

    for(int i = 0; i < N; i++)
        cin >> arr[i];

    cout << LIS(arr, N, N);

}
