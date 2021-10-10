/*
    A Matrix is given and you need to find the transpose of it.
    Input
        A Matrix
        its dimension

    Output
        Transpose Matrix
*/
#include <iostream>
using namespace std;

class matrix {
public:
    int arr[20][20];
    int row, col;
    void input_matrix();
};
void matrix::input_matrix()
{
    cout << "Enter array element \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];
    }
}

void transpose(matrix ob1, matrix ob2)
{
    for (int i = 0; i < ob1.row; i++) {
        for (int j = 0; j < ob1.col; j++)
            ob2.arr[j][i] = ob1.arr[i][j];
    }
    ob2.row = ob1.col;
    ob2.col = ob1.row;
    cout << "\nResultant matrix is : \n";
    for (int i = 0; i < ob2.row; i++) {
        for (int j = 0; j < ob2.col; j++)
            cout << ob2.arr[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    matrix obj[2];

    cout << "Enter the dimensions of the matrix ";
    cin >> obj[0].row >> obj[0].col;
    obj[0].input_matrix();

    transpose(obj[0], obj[1]);
}
