#include <stdio.h>
void transpose(int[50][50], int[50][50], int, int);
void main()
{
    int row1, col1, mat1[50][50], res[50][50], i, j;
    printf("\n Enterr the number of rows and columns of matrix....");
    scanf("%d%d", &row1, &col1);
    printf("\n Enter the matrix1");
    for (i = 0; i < row1; i++)
        for (j = 0; j < col1; j++)
            scanf("%d", &mat1[i][j]);
    transpose(mat1, res, row1, col1);
    printf("\n The transpose of the given matrix is\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++)
            printf("\t %d", res[i][j]);
        printf("\n");
    }
}
void transpose(int mat1[][], int res[][], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            res[j][i] = mat1[i][j];
}
