#include <iostream>
using namespace std;

bool Binary(int* a, int n, int k)
{
    int f = 0, e = n - 1;
    int mid = 0;
    while (f <= e) {
        mid = (f + e) / 2;
        if (a[mid] == k) {
            return true;
        } else if (a[f] <= a[mid]) {
            if (k >= a[f] && k <= a[mid]) {
                e = mid - 1;
            } else {
                f = mid + 1;
            }
        } else {
            if (k >= a[mid] && k <= a[e]) {
                f = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    return false;
}

int main()
{
    int n;

    cout << "Enter Size" << endl;
    cin >> n;

    int* a = new int[n];

    cout << "Enter Values";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k = 0;
    cout << "Enter Element to be Searched " << endl;
    cin >> k;

    bool b = Binary(a, n, k);

    if (b)
        cout << "Yes";
    else
        cout << "No";
    delete[] a;
    return 0;
}
