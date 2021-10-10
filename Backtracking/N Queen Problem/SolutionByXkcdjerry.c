// N Queens
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ull unsigned long long
#define DAGMOD ((n << 1) - 1)
int *vert, *dag_1, *dag_2;
int n;
void init()
{
    vert = malloc(n * sizeof(int));
    dag_1 = malloc((n * 2 - 1) * sizeof(int));
    dag_2 = malloc((n * 2 - 1) * sizeof(int));

    memset(vert, 0, n * sizeof(int));
    memset(dag_1, 0, (n * 2 - 1) * sizeof(int));
    memset(dag_2, 0, (n * 2 - 1) * sizeof(int));
}
ull nqueens(int x, int y)
{
    int i;
    int nextx = x + 1;
    ull ans = 0;

    //printf("TESTING %d %d\n",x,y);
    if (x == n - 1)
        // the chessboard is filled!
        return 1ull;

    vert[y] = 1;
    dag_1[x + y] = 1;
    dag_2[(x - y + DAGMOD) % DAGMOD] = 1;

    for (i = 0; i < n; i++) {
        if (vert[i] || dag_1[nextx + i] || dag_2[(nextx - i + DAGMOD) % DAGMOD])
            continue;
        else
            ans += nqueens(nextx, i);
    }
    vert[y] = 0;
    dag_1[x + y] = 0;
    dag_2[(x - y + DAGMOD) % DAGMOD] = 0;

    return ans;
}
int main()
{
    ull ans = 0;
    int i;
    scanf("%d", &n);
    init();
    for (i = 0; i < n; i++)
        ans += nqueens(0, i);
    printf("\nNumber of ways\t:\t%llu", ans);
    return 0;
}
