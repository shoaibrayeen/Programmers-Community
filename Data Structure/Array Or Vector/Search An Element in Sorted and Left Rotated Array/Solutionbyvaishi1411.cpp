
#include <iostream>
using namespace std;

int is_search(int v[], int n, int);

int main()
{
    int n, item, res;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* shi = new int[n];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++) {
        cin >> shi[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> item;
    res = is_search(shi, item, n);
    if (res == 1)
        cout << "Found!\n";
    else
        cout << "Not found!\n";
    return 0;
}

int is_search(int v[], int item, int n)
{
    for (int i = 0; i < n; i++) {
        if (v[i] == item)
            return 1;
    }
    return 0;
}
