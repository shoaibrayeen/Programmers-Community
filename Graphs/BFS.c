#include<stdio.h>
#include<time.h>
void bfs(int a[10][10],int n, int source)
{
    int visited[10],q[10],i,j,f=0,r=-1;
    for( i=0;i<n;i++){
        visited[i]=0;
    }
    q[++r]=source;
    visited[source]=1;
    while(f<=r){ 
        j=q[f++];
        for(i=0;i<n;i++){
            if(a[j][i]==1 && visited[i]==0)
            {
                q[++r]=i;
                printf("the bfs traversal is %d-->%d\n",j,i);
                printf("%d is reachable from source city %d \n",i,source);
                visited[i]=1;
            }
        }
    }
}

void main(){
    int a[10][10],n,i,j,s;
    double clk;
    clock_t starttime,endtime;
    printf("\nenter the no. of cities: ");
    scanf("%d",&n);
    printf("\nenter the matrix representation\n");
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter source city:");
    scanf("%d",&s);
    starttime = clock();
    bfs(a,n,s);
    endtime=clock();
    clk=(double)(endtime-starttime)/CLOCKS_PER_SEC;
    printf("\nthe run time is %f\n",clk);
}