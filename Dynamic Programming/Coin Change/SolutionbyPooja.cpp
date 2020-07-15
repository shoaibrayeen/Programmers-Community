/*
    Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, How many ways can we make
    the change? The order of coins doesn’t matter.

    input:  N = 4
            S = [ 1, 2, 3 ]

    Output = 4

    There are four solutions: [ 1, 1, 1, 1 ],
                            [ 1, 1, 2 ],
                            [ 2, 2 ],
                            [ 1, 3 ].
*/
#include<iostream>
using namespace std;


int coin_change(int *arr, int N, int n)
{
    int t[n + 1][N + 1];

    for(int i = 0; i < N + 1; i++)
        t[0][i] = 0;

    for(int i = 0; i < n + 1; i++)
        t[i][0] = 1;

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < N + 1; j++)
        {
            if(arr[i - 1] <= j)
                t[i][j] = t[i - 1][j] + t[i][j - arr[i - 1]];
            else
                t[i][j] = t[i - 1][j];
        }
    }

    return t[n][N];
}

int main()
{
    int size, N;

    cout << "Array Size ";
    cin >> size;
    int *arr = new int [size];

    cout << "\nEnter coins ";
    for(int i = 0; i < size; i++)
        cin >> *(arr + i);

    cout << "Enter sum ";
    cin >> N;


    cout << "\nNo. of ways : " << coin_change(arr, N, size);
}
