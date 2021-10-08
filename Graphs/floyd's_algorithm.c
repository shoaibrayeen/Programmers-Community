// #include <stdio.h>
// #include <conio.h>
// int min(int, int);
// void floyds(int p[10][10], int n)
// {
//     int i, j, k;
//     for (k = 0; k < n; k++)
//         for (i = 0; i < n; i++)
//             for (j = 0; j < n; j++)
//                 p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
// }
// int min(int a, int b)
// {
//     if (a < b)
//         return (a);
//     else
//         return (b);
// }
// void main()
// {
//     int p[10][10], w, n, e, u, v, i, j;
//     printf("\n Enter the number of vertices:");
//     scanf("%d", &n);
//     printf("Enter the matrix represention of the cities represented using digraph: :\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &p[i][j]);
//         }
//     }
//     printf("\n Matrix of input data:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//             printf("%d \t", p[i][j]);
//         printf("\n");
//     }
//     floyds(p, n);
//     printf("\n The shortest paths are:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf(" %d\t", p[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int min(int a, int b)
// {
//     if (a < b)
//         return (a);
//     else
//         return (b);
// }
// void floyds(int p[10][10], int n)
// {
//     int i, j, k;
//     for (k = 1; k <= n; k++)
//         for (i = 1; i <= n; i++)
//             for (j = 1; j <= n; j++)
//             {
//                 if (i == j)
//                     p[i][j] = 0;
//                 else
//                     p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
//             }
// }
// void main()
// {
//     int route[10][10];
//     int n_city, n_routes, i, j, u, v, dist;
//     printf("\n Enter the number of cities:\t");
//     scanf("%d", &n_city);
//     printf("\n Enter the number of routes present:\t");
//     scanf("%d", &n_routes);

//     for (i = 1; i <= n_city; i++)
//         for (j = 1; j <= n_city; j++)
//         {
//             if (i == j)
//                 route[i][j] = 0;
//             else
//                 route[i][j] = 999;
//         }
//     for (i = 1; i <= n_routes; i++)
//     {
//         printf("Enter the end cities of route %d with its distance:\t", i);
//         scanf("%d%d%d", &u, &v, &dist);
//         route[u][v] = dist;
//     }
//     printf("\nMatrix representation of the routes present and their distances:\n");
//     for (i = 1; i <= n_city; i++)
//     {
//         for (j = 1; j <= n_city; j++)
//             printf("%d \t", route[i][j]);
//         printf("\n");
//     }
//     floyds(route, n_city);
//     printf("The shortest paths are:\n");
//     for (i = 1; i <= n_city; i++)
//     {
//         for (j = 1; j <= n_city; j++)
//             printf("%d \t", route[i][j]);
//         printf("\n");
//     }
// }

#include <stdio.h>
#include <time.h>
#include <math.h>
int mat[10][10], d_mat[10][10], n;
void Floyd()
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            d_mat[i][j] = mat[i][j];
        }
    }
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (d_mat[i][j] > (d_mat[i][k] + d_mat[k][j]))
                    d_mat[i][j] = (d_mat[i][k] + d_mat[k][j]);
            }
        }
    }
}

void main()
{
    clock_t start, end;
    double t;
    int i, j;
    printf("Enter the number of routes:\n");
    scanf("%d", &n);
    printf("Enter the matrix representation for the connection between the Firestation & Residence:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    start = clock();
    Floyd(mat);
    end = clock();
    printf("The Shortest path Matrix is \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", d_mat[i][j]);
        }
        printf("\n");
    }
    t = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time required : %f\n", t);
}