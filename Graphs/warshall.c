#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void warshall(int a[][20], int n)
{
    int k, i, j;
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                a[i][j] = (a[i][j] || a[i][k] && a[k][j]);
}
void main()
{
    int n, a[20][20], i, j;
    double clk;
    clock_t starttime, endtime;
    printf("\n enter number of citites medical representative  has to visit \n ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix path for the cities :\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    starttime = clock();
    warshall(a, n);
    endtime = clock();
    printf(" the transitive closure matrix is  \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf(" \n");
    }
    clk = (double)(endtime - starttime) / CLOCKS_PER_SEC;
    printf("\nTime taken for searching %f seconds\n", clk);
}