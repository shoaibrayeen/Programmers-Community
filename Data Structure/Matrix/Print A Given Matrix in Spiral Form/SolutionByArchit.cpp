/*
  Program Description - This program prints A Given Matrix in Spiral Form.
*/

#include <iostream>
using namespace std;
void spiralPrint(int matrix[][1000], int row, int col)
{
    int i, rowStart = 0, colStart = 0;
    int numElements = (row * col), count = 0;
    while (count < numElements) {
        for (i = colStart; count < numElements && i < col; ++i) {
            cout << matrix[rowStart][i] << " ";
            count++;
        }
        rowStart++;
        for (i = rowStart; count < numElements && i < row; ++i) {
            cout << matrix[i][col - 1] << " ";
            count++;
        }
        col--;
        for (i = col - 1; count < numElements && i >= colStart; --i) {
            cout << matrix[row - 1][i] << " ";
            count++;
        }
        row--;
        for (i = row - 1; count < numElements && i >= rowStart; --i) {
            cout << matrix[i][colStart] << " ";
            count++;
        }
        colStart++;
    }
}
int main()
{
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> input[i][j];
        }
    }
    spiralPrint(input, row, col);
}
