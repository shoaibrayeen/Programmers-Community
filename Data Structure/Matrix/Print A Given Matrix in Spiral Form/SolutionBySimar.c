#include <stdio.h> 
#define R 100
#define C 100

void spiralPrint(int m, int n, int a[R][C]) 
{ 
	int i, k = 0, l = 0; 

	while (k < m && l < n) { 
		for (i = l; i < n; ++i) { 
			printf("%d ", a[k][i]); 
		} 
		k++; 

		for (i = k; i < m; ++i) { 
			printf("%d ", a[i][n - 1]); 
		} 
		n--; 

		if (k < m) { 
			for (i = n - 1; i >= l; --i) { 
				printf("%d ", a[m - 1][i]); 
			} 
			m--; 
		} 

		if (l < n) { 
			for (i = m - 1; i >= k; --i) { 
				printf("%d ", a[i][l]); 
			} 
			l++; 
		} 
	} 
} 

void main() 
{ 
	int a[R][C];
    int i=0,j=0;
    int m,n; 
    printf("Enter the rows of array");
    scanf("%d",&m);
    printf("Enter the columns of array");
    scanf("%d",&n);
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

	spiralPrint(m, n, a);  
} 

