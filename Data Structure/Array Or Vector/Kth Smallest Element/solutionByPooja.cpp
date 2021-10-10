/*
    An Array is given and You need to find Kth Smallest Number in the Array.
*/
#include <iostream>
using namespace std;

int smallest_kth_element(int* arr, int size, int k)
{
    int temp, i, j;
    for (i = 1; i < size; i++) {
        temp = arr[i];
        j = i - 1;
        for (; j >= 0 && temp < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
    return arr[k - 1];
}

int main()
{
    int size, k;
    cout << "Enter the size of array ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter elements of array ";
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);

    cout << "Enter index : ";
    cin >> k;

    if (k <= size)
        cout << k << " smallest element is: " << smallest_kth_element(arr, size, k);
    else
        cout << "\nenter valid index";
}
