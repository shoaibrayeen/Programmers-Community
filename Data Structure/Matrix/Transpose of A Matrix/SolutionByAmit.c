#include <stdio.h>

void main()
{
    int m,n;
    
    printf("Enter number of rows required in array: ");
    scanf("%d",&m);
    printf("Enter number of rows required in array: ");
    scanf("%d",&n);
    
    
    int array[m][n];
    int transpose_array[m][n];
    
    
    
    for(int i=0;i<m;i++)
    {                                              // Loop to input array elements
        for(int j=0;j<n;j++)
            scanf("%d",&array[i][j]);
            
    }
    
    
    for(int i=0;i<m;i++)
    {                                           // Loop to transpose array
        for(int j=0;j<n;j++)
            transpose_array[j][i] = array[i][j];
    }
    
    printf("Array : \n");
    
    for(int i=0;i<m;i++)
    {                                         // Loop to print original array
        for(int j=0;j<n;j++)
            printf("%d ",array[i][j]);
        
        printf("\n");
    }
    
    
    printf(" \n Transpose Array : \n");
    
    for(int i=0;i<m;i++)
    {                                      // Loop to print transpose array
        for(int j=0;j<n;j++)
            printf("%d ",transpose_array[i][j]);
            
        printf("\n");
    }

}
