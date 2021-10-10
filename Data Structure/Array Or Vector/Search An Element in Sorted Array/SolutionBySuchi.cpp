#include <iostream>
using namespace std;

int binsrch(int low, int high, int a[], int no)
{
    if (low <= high) {
        int mid = (low + high) / 2;
        if (no == a[mid]) {
            return mid;
        } else if (no < a[mid]) {
            return binsrch(low, mid - 1, a, no);
        } else if (no > a[mid]) {
            return binsrch(mid + 1, high, a, no);
        }
    }
    return -1;
}

int main()
{
    int size, no;
    cin >> size;
    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    cin >> no;
    int x = -1;
    x = binsrch(0, size, a, no);
    if (x == -1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
