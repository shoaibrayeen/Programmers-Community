#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int row, int col)
{

    int row_min = 0, col_min = 0, row_max = row - 1, col_max = col - 1;
    int counter = 0;
    while (counter < (row * col)) {

        for (int i = row_min, j = col_min; j <= col_max && counter < (row * col); j++) {
            cout << input[i][j] << " ";
            counter++;
        }
        row_min++;

        for (int i = row_min, j = col_max; i <= row_max && counter < (row * col); i++) {
            cout << input[i][j] << " ";
            counter++;
        }
        col_max--;

        for (int i = row_max, j = col_max; j >= col_min && counter < (row * col); j--) {
            cout << input[i][j] << " ";
            counter++;
        }
        row_max--;

        for (int i = row_max, j = col_min; i >= row_min && counter < (row * col); i--) {
            cout << input[i][j] << " ";
            counter++;
        }
        col_min++;
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
