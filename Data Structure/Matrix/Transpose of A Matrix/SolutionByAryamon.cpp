
#include <conio.h>
#include <iostream.h>
void main()
{
    clrscr();
    int rows, cols, i, j;
    cout << "\nEnter the rows and columns of the matrix\n ";
    cin >> rows >> cols;
    int a[100][100];
    cout << "\nEnter the elements of the matrix\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }
    int d[100][100];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            d[j][i] = a[i][j];
        }
    }
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            cout << d[i][j] << "  ";
        }
        cout << endl;
    }
    getch();
}
