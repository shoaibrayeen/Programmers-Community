//To apply insertion sort
#include <conio.h>
#include <iostream.h>
void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int a[], int size)
{
    for (int j = 0; j < size; j++) {
        cout << a[j] << " ";
    }
}
void Insertion(int a[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        display(a, size);
        cout << endl;
    }
}

void main()
{
    int size;
    clrscr();
    cout << "\nEnter the size\n ";
    cin >> size;
    int* a = new int[size];
    cout << "\nEnter the elements of the array\t:\t ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    Insertion(a, size);
    getch();
}
