/* C Program to print the palindrome pyramid something like this...
    1
   121
  12321
 1234321
123454321
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
}
