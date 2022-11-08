#include<iostream>
using namespace std;
int main ()
{
    int A[10][10], m, n, i, j;
    cout << "Enter rows and columns of matrix : ";
    cin >> m >> n;
    cout << "Enter elements of matrix : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Entered Matrix : \n ";
    for (i = 0; i < m; i++)
    { 
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << "\n ";
    }
    cout << "Transpose of Matrix : \n ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << A[j][i] << " ";
        cout << "\n ";
    }
    return 0;
}
