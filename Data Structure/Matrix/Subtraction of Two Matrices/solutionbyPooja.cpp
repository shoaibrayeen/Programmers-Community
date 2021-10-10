/*
    Two Marices are given and you need to subtract the second matrix from the first one.
    Input
        Two Matrices
        their dimensions
    Output
        Resultant Matrix
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

void subtraction(matrix ob1, matrix ob2, matrix ob3)
{
    if (ob1.row == ob2.row && ob1.col == ob2.col) {
        for (int i = 0; i < ob1.row; i++) {
            for (int j = 0; j < ob1.col; j++)
                ob3.arr[i][j] = ob1.arr[i][j] - ob2.arr[i][j];
        }

        cout << "\nResultant matrix is : \n";
        for (int i = 0; i < ob1.row; i++) {
            for (int j = 0; j < ob2.col; j++)
                cout << ob3.arr[i][j] << " ";
            cout << endl;
        }
    } else
        cout << "Subtraction NOt possible ";
}
int main()
{
    matrix obj[3];

    for (int i = 0; i < 2; i++) {

        cout << "Enter the dimensions of the matrix ";
        cin >> obj[i].row >> obj[i].col;
        obj[i].input_matrix();
    }

    subtraction(obj[0], obj[1], obj[2]);
}
