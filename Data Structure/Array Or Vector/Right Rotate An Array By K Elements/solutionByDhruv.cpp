#include <conio.h>
#include <iostream.h>

void right_rotation(int a[], int n, int k);

void main()
{
    int n, k;
    cout << "\nEnter Size of Array\t:\t"; //Number of elements in array a[]
    cin >> n;
    int a[n];
    cout << "\nEnter Array Elements\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "\nEnter how many times you want to right rotate the array\t:\t";
    cin >> k;
    right_rotation(a, n, k);
    getch();
}

void right_rotation(int a[], int n, int k)
{
    int avail[n];
    for (int i = n - 1; i > 0; i++) {
        if (i + k >= n) {
            avail[i + k - n] = a[i];
        } else {
            avail[i + k] = a[i]; //Save the element in avail[] array
        }
    }
    cout << "\nRotated Array\t:\t";
    for (int i = 0; i < n; i++) {
        cout << avail[i] << " ";
    }
    return;
}
