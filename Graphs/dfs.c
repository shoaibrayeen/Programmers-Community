#include <stdio.h>
#include <time.h>
void DFS(int);
int G[10][10], visited[10], n; //n is no of vertices and graph is sorted in array G[10][10]
void main()
{
    int i, j, source;
    clock_t starttime, endtime;
    printf("Enter number of island:");
    scanf("%d", &n);
    //read the adjecency matrix
    printf("\nEnter adjecency matrix of the digraph:");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &G[i][j]);
    //visited is initialized to zero
    for (i = 0; i < n; i++)
        visited[i] = 0;
    printf("Enter source island: \n");
    scanf("%d", &source);
    starttime = clock(); 
    DFS(source);
    endtime = clock();
    printf("\nTime for execution= %f seconds\n", (float)(endtime - starttime) / CLOCKS_PER_SEC);
    printf("reachable islands from source island %d are :\n", source);
    for (i = 0; i < n; i++) 
        if (i != source && visited[i]==1)
            printf("%d\n", i);
}
void DFS(int s)
{
    int j;
    //printf("\n %d",i); //reachable
    visited[s] = 1;
    for (j = 0; j < n; j++)
        if (visited[j]!=1 && G[s][j] == 1)
        {
            printf("%d--->%d\n", s, j); //dfs traversal
            DFS(j);
        }
}