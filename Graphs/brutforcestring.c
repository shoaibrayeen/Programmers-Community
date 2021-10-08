#include<stdio.h>
#include<string.h>
int BF(char T[], char P[]);
int main()
{
    int i, j, n, m, r, count=0;
    char T[100], P[100];
    printf("Enter the text characters:\n");
    scanf("%s",T);
    printf("Enter the pattern:\n");
    scanf("%s",P);
    r=BF(T,P);
    if(r==-1)
    {
        printf("Pattern not found\n");
    }
    else
    {
        printf("Pattern found at %d position\n",r+1);
    }
    
}
int BF(char T[], char P[])
{
    int i, j, n, m, count=0;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<n;i++)
    {
        count++;
        j=0;
        while(j<m && P[j]==T[i+j])
        {
            j=j+1;
            if(j==m)
            {
                printf("Total number of comparisons done:%d\n",count);
                return i;
            }
        }
    }
     printf("Total number of comparisons done:%d\n",count);
    return -1;
}