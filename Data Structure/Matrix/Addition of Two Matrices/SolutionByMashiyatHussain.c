#include <stdio.h>
#include <stdlib.h>

void add_matrix(int [50][50], int[50][50],int,int,int[50][50]);
void main(){
    int row1,col1,row2,col2,mat1[50][50],mat2[50][50],res[50][50],i,j;
    printf("\n Enter the number of rows and columns of matrix1 ...");
    scanf("%d%d",&row1,&col1);
    printf("\n Entere the number of rows and columns of matrix2...");
    scanf("%d%d",&row2,&col2);
    if((row1!=row2)&&(col1!= col2))
    {
        printf("\n Matrix addition is not possible....");
        exit(1);
    }
    printf("\n Enter the matrix 1");
    for(i=0; i<row1; i++)
    for(j=0;j<col1;j++)
    scanf("%d", &mat1[i][j]);
    printf("\n Enter the matrix 2");
    for(i=0; i<row2; i++)
    for(j=0;j<col2;j++)
    scanf("%d", &mat2[i][j]);
    add_matrix(mat1,mat2,row1,col1,res);
    printf("\n The addition of two matrices\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        printf("\t%d",res[i][j]);
        printf("\n");
    }
}
void add_matrix(int mat1[50][50],int mat2[50][50],int r,int c, int res[50][50])
{
    int i,j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    res[i][j]=mat1[i][j]+mat2[i][j];
}
