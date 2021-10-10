/*
    An Array is given and You need to sort it using Insertion Sort Algorithm.
*/
#include <iostream>
using namespace std;

void insertion_sort(int* arr, int n)
{
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        for (j = i - 1; j >= 0 && temp < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = key;
    }
}

int main()
{
    int size;
    cout << "Enter the size ";
    cin >> size;

    int* arr = new int[size];
    cout << "\nEnter the element of array ";
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);
    insertion_sort(arr, size);
    cout << "\nElement after sorting ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
