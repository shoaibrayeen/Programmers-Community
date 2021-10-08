#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void insertionsort(long long int num[], int);
int main()
{
    long long int n, num[50], i, t;
    clock_t start, end;
    double time;
    printf("Enter number of customers\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        num[i] = 9999999999-(rand() % 9999999999 + 1);
    printf("Customers' contact numbers are:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", num[i]);
    start = clock();
    insertionsort(num, n);
    end = clock();
    printf("\nSorted contact list in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", num[i]);
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken for execution=%lf\n", time);
    return 0;
}
void insertionsort(long long int num[], int n)
{
    int i, t, j;
    for (i = 0; i < n; i++)
    {
        t = num[i];
        j= i-1;
        while(j>=0 && num[j] > t){
            num[j+1] = num[j];
            j = j-1;
        }
        num[j + 1] = t;
    }
}