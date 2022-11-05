#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int rows, cols, a[100][100], b[100][100];
    cout << "Enter the number of rows and columns" << endl;
    cin >> rows >> cols;
    cout << "Enter elements in a: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements in b: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }

    int c[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << c[i][j] << " ";
        }
    }

    return 0;
}