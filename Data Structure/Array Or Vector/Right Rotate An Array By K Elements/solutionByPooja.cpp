/*
    An Array is given and you need to right rotate the Array with K Elements.
*/
#include <iostream>
using namespace std;

int* right_rotate(int* arr, int n, int k)
{
    int i, j = 0;
    int arr1[n - k];
    int arr2[k];

    for (i = 0; i < n - k; i++) //first two four loop divide the array into two pieces such that arr1 contains element before kth
        arr1[i] = arr[i]; //location and arr2 contain rest of elements
    for (i = n - k; i < n; i++)
        arr2[j++] = arr[i];

    for (i = 0; i < k; i++) //last two four loop merge the two array into one array
        arr[i] = arr2[i];
    for (j = 0; j < n - k; j++)
        arr[i++] = arr1[j];

    return arr;
}

int main()
{
    int size, k;
    cout << "Enter the size of array ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter array element ";
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);
    cout << "Enter the K ";
    cin >> k;

    arr = right_rotate(arr, size, k);
    cout << "Element of array after " << k << " rotation: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
