//To find the maximum value from all elements of an array
#include <conio.h>
#include <iostream.h>
int maximum(int a[], int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

void main()
{
    int size;
    clrscr();
    cout << "\nEnter the size\n ";
    cin >> size;
    int* a = new int[size];
    cout << "\nEnter the elements of an array\t:\t ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    cout << "\nThe result is\t:\t " << maximum(a, size);
    getch();
}
