#include <iostream>
using namespace std;

void sort(int* a, int n)
{
    int Z = 0, O = 0, T = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            Z++;
        else if (a[i] == 1)
            O++;
        else if (a[i] == 2)
            T++;
    }
    int i = 0;
    while (i < n) {
        while (Z > 0) {
            a[i++] = 0;
            Z--;
        }
        while (O > 0) {
            a[i++] = 1;
            O--;
        }
        while (T > 0) {
            a[i++] = 2;
            T--;
        }
    }
}
int main()
{

    int n;
    cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i];
}
