#include<stdio.h>
#include<stdlib.h>
#define MAX 20
#define inf 99999
int arr[MAX][MAX];

int minimumDistane(int distance[],int visited[],int n){
    int min=inf;
    int u;
    for (int i = 0; i < n; i++)
    {
        if(visited[i]==0 && distance[i]<min){
            min=distance[i];
            u=i;
        }
    }
    return u;
}

void dijiktr(int n,int source){
    int u;
    int distance[n];
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        distance[i]=9999;
        visited[i]=0;
    }
    
    distance[source]=0;

    for (int i = 0; i < n; i++)
    {
        u=minimumDistane(distance,visited,n);
        visited[u]=1;
        for (int v = 0; v < n; v++)
        {  
            if(visited[v]==0 && distance[v]>distance[u]+arr[u][v]){
                distance[v]=distance[u]+arr[u][v];
            }
        }
        
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if(i==source)continue;
        printf("%d\t%d\n",i,distance[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
            if(i!=j && arr[i][j]==0)
               arr[i][j]=inf;
        }
        
    }
    dijiktr(n,0);
}