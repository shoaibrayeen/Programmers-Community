/*
    A Marix is given and you need to print it in Spiral Form.

*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j, k, l, m, n;

    cout << "Enter row and column of array ";
    cin >> row >> col;

    int arr[row][col];
    for (i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    cout << "\nspiral form is : ";
    if (row % 2 != 0)
        n = floor(row / 2) + 1;
    else
        n = row / 2;

    for (i = 0; i < n; i++) {
        //printing one loop at a time;
        for (j = i; j < col - i; j++) //printing 1st row
            cout << arr[i][j] << " ";

        for (k = i + 1; k < row - i; k++) //printing last col
            cout << arr[k][j - 1] << " ";

        for (l = j - 2; l >= i && k != i + 1; l--) //printing last row
            cout << arr[k - 1][l] << " ";

        for (m = k - 2; m > i; m--) //printing first col and this is for one loop
            cout << arr[m][l + 1] << " ";
    }
}
