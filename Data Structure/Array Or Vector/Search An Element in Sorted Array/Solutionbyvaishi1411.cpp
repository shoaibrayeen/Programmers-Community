#include <iostream>
using namespace std;

int is_search(int v[], int n, int);

int main()
{
    int n, i, item, res;
    cout << "\nEnter the size of the array: ";
    cin >> n;
    int* shi = new int[n];
    cout << "\nEnter the elements of an array: ";
    for (i = 0; i < n; i++) {
        cin >> shi[i];
    }
    cout << "\nEnter the element to be searched: ";
    cin >> item;
    res = is_search(shi, item, n);
    if (res == 1)
        cout << "\nFound!\n";
    else
        cout << "\nNot foundn";
    return 0;
}

int is_search(int v[], int item, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == item)
            res = 1;
    }
    return res;
}
