#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *p1, *p2, size1, size2;
void merge_and_throw(register int** p1, register int** p2, register int n)
{
    register int i;
    for (i = 0; i < n; i++) {
        if (**p1 < **p2) {
            (*p1)++;
        } else {
            (*p2)++;
        }
    }
}
void merge_even(int* p1, int* p2)
{
    merge_and_throw(&p1, &p2, (size1 + size2) / 2 - 1);
    printf("%.1f", (*p1 + *p2) / 2.0);
}
void merge_odd(int* p1, int* p2)
{
    merge_and_throw(&p1, &p2, (size1 + size2) / 2);
    if (*p1 < *p2)
        printf("%d", *p1);
    else
        printf("%d", *p2);
}
int* safealloc(int n)
{
    int size = sizeof(int) * (n + 1);
    int* p = malloc(size);
    // some more space can't be bad :)
    if (p == NULL) {
        printf("Bad alloc!");
        abort();
    }
    memset(p, 0x3f3f3f3f, size);
    return p;
}
void read(int* p, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", p + i);
    }
}
int main()
{
    scanf("%d", &size1);
    p1 = safealloc(size1);
    read(p1, size1);
    scanf("%d", &size2);
    p2 = safealloc(size2);
    read(p2, size2);
    if ((size1 + size2) & 1) {
        merge_odd(p1, p2);
    } else {
        merge_even(p1, p2);
    }
    return 0;
}
