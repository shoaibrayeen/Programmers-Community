/*
    A Matrix is given and you need to print all triangular matrices.
    Input
        A Matrix
        its dimension

    Output
        Lower Triangular Matrix of Primary Diagonal
        Upper Triangular Matrix of Primary Diagonal
        Lower Triangular Matrix of Secondary Diagonal
        Lower Triangular Matrix of Secondary Diagonal
        Primary Diagonal
        Secondary Diagonal

*/
#include <iostream>
using namespace std;

class matrix {
public:
    int arr[20][20];
    int row, col;
    void input_matrix();
    void LTPD();
    void UTPD();
    void LTSD();
    void UTSD();
    void PD();
    void SD();
};
void matrix::input_matrix()
{
    cout << "Enter array element \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];
    }
}
void matrix::LTPD()
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j > i)
                cout << " ";
            else
                cout << arr[i][j];

            cout << " ";
        }
        cout << endl;
    }
}
void matrix::UTPD()
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i > j)
                cout << " ";
            else
                cout << arr[i][j];

            cout << " ";
        }
        cout << endl;
    }
}
void matrix::LTSD()
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i + j < row - 1)
                cout << " ";
            else
                cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }
}
void matrix::UTSD()
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i + j >= (row + col) / 2)
                cout << " ";
            else
                cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }
}
void matrix::PD()
{
    for (int i = 0; i < row; i++)
        cout << arr[i][i] << " ";
}
void matrix::SD()
{
    for (int i = 0; i < row; i++)
        cout << arr[i][row - 1 - i] << " ";
}

int main()
{
    matrix obj;
    int op;

    cout << "Enter the dimensions of the matrix ";
    cin >> obj.row >> obj.col;
    obj.input_matrix();

    cout << "\n1.Lower Triangular Matrix of Primary Diagonal";
    cout << "\n2.Upper Triangular Matrix of Primary Diagonal";
    cout << "\n3.Lower Triangular Matrix of Secondary Diagonal";
    cout << "\n4.Upper Triangular Matrix of Secondary Diagonal";
    cout << "\n5.Primary Diagonal";
    cout << "\n6.Secondary Diagonal";
    cout << "\n7.exit\n";

    while (1) {
        cout << "\nEnter operation ";
        cin >> op;
        if (op == 1)
            obj.LTPD();
        else if (op == 2)
            obj.UTPD();
        else if (op == 3)
            obj.LTSD();
        else if (op == 4)
            obj.UTSD();
        else if (op == 5)
            obj.PD();
        else if (op == 6)
            obj.SD();
        else if (op == 7)
            exit(0);
        else
            cout << "\nWrong choice";
    }
}
