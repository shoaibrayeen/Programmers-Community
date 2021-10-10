#include <iostream>

using namespace std;

int main()
{
    int search(int[], int, int);
    int n, i, a[100], e, res;
    cout << "Enter the number of elements:";
    cin >> n;
    cout << "\nEnter the elements in ascending order\n";

    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "\nEnter the element to search:";
    cin >> e;

    res = search(a, n, e);

    if (res != -1)
        cout << "\nElement is at position " << res + 1;
    else
        cout << "\nElement is not in the list....!!!";

    return 0;
}

int search(int a[], int n, int e)
{
    int f, l, m;
    f = 0;
    l = n - 1;

    while (f <= l) {
        m = (f + l) / 2;
        if (e == a[m])
            return (m);
        else if (e > a[m])
            f = m + 1;
        else
            l = m - 1;
    }

    return -1;
}
