#include <iostream>

using namespace std;

int merge(int* a, int* b, int m, int n, int k)
{
    int i = 0, j = 0, t = 0;
    int temp[m + n];
    while (i < m && j < n) {
        if (a[i] < b[j])
            temp[t++] = a[i++];
        else
            temp[t++] = b[j++];
    }

    while (i < m) {
        temp[t++] = a[i++];
    }

    while (j < n) {
        temp[t++] = b[j++];
    }
    return temp[k - 1];
}

int main()
{
    int m, n;
    cout << "Enter the size of the two arrays : ";
    cin >> m >> n;
    cout << endl;
    int a[m], b[n];
    cout << "Enter elements of array 1" << endl;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    cout << "Enter elements of array 2" << endl;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    cout << "Enter the index : ";
    int k;
    cin >> k;
    cout << merge(a, b, m, n, k);
    return 0;
}
