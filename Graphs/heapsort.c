#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int temp;
void HeapBottomUp(int resume[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && resume[left] > resume[largest])
        largest = left;
    if (right < n && resume[right] > resume[largest])
        largest = right;
    if (largest != i)
    {
        temp = resume[i];
        resume[i] = resume[largest];
        resume[largest] = temp;
        HeapBottomUp(resume, n, largest);
    }
}

void HeapSort(int resume[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        HeapBottomUp(resume, n, i);
    }

     
    for (i = n - 1; i >= 0; i--)
    {
        temp = resume[0];
        resume[0] = resume[i];
        resume[i] = temp;
        HeapBottomUp(resume, i, 0 );
    }
}

void main()
{
    int i, n;
    double clk;
    clock_t start, end;
    printf("SUNSINE---A job searching Portal\n\n");
    printf("Enter the number of gradugates submitted the Resume \n");
    scanf("%d", &n);
    int resume[n];
    for (i = 0; i < n; i++)
    {
        resume[i] = rand() % 10000;
    }
    printf("These are the ranks secured by the candinates:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", resume[i]);
    }
    start = clock();
    HeapSort(resume, n);
    end = clock();
    clk = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nThis is the sorted order of candinates based on ranks \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", resume[i]);
    }
    printf("\nThe time taken is %f seconds\n", clk);
}