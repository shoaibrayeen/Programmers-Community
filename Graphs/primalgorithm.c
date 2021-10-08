#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
int V;
int minKey(int key[], int mstSet[])
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (mstSet[v] == 0 && key[v] < min)
           {
            min = key[v];
            min_index = v;
           }  
    return min_index;
}

void primMST(int graph[V][V])
{
   int parent[V];
    int key[V];
    int mstSet[V];
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = 0;
    key[0] = 0;
    parent[0] = -1; 
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = 1;
        for (int v = 0; v < V; v++)
  
            if (graph[u][v] !=0 && mstSet[v] == 0 && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
}


int main()
{
printf("Enter the number of offices:");
    scanf("%d",&V);
       int graph[V][V];
      printf("Enter the cost matrix\n");
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    primMST(graph);
    return 0;
}