#include<stdio.h>
#include<stdlib.h>
#define max 10
#define inf 999
struct edge{ 
    int src;
    int dest;
    int distance;
};

struct edge graph[max];
struct edge minTree[max-1];
int visited[max]={0};
int counter=0;
void sortEdges(int n){
    struct edge temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(graph[j].distance>graph[j+1].distance){
                temp=graph[j];
                graph[j]=graph[j+1];
                graph[j+1]=temp;
            }
        }
        
    }
    
}

void kruskal(int n){
    
    for (int i = 0; i < n; i++)
    {
        if((visited[graph[i].src]*visited[graph[i].dest])==0){
            minTree[counter++]=graph[i];
            visited[graph[i].src]=1;
            visited[graph[i].dest]=1;
        }
    }
    printf("\n");
    for (int i = 0; i < counter; i++)
    {
        printf("%d %d %d\n",minTree[i].src,minTree[i].dest,minTree[i].distance);
    }
    
}

int main(){
    int n,ne;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter the number of edges\n");
    scanf("%d",&ne);
    printf("Enter the edges as src dest and distance\n");
    for (int i = 0; i < ne; i++)
    {
        scanf("%d%d%d",&graph[i].src,&graph[i].dest,&graph[i].distance);
    }
    sortEdges(n);
    kruskal(n);
    
}