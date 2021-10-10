#include <iostream>
using namespace std;

void input(int a[10][10], int r1, int c1);
void multiplied(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2);
void display(int a[10][10], int r1, int c1);

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns in first matrix";
    cin >> r1 >> c1;
    cout << "Enter rows and columns in second matrix";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Multiplication cannot be possible\n";
        exit(0);
    }
    int a[10][10], b[10][10], multiply[10][10];
    cout << "Enter first matrix\t:\t";
    input(a, r1, c1);
    cout << "Enter second matrix\t:\t";
    input(b, r2, c2);
    multiplied(a, b, multiply, r1, c1, r2, c2);
    cout << "Multiplied matrix\n";
    display(multiply, r1, c2);
    return 0;
}

void input(int a[10][10], int r1, int c1)
{
    cout << "\nEnter Elements\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }
}

void display(int a[10][10], int r1, int c1)
{
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void multiplied(int a[10][10], int b[10][10], int multiply[10][10], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            multiply[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                multiply[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
