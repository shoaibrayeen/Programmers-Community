/*
    An Array is given and you need to right rotate the Array with K Elements.
*/
#include <iostream>
using namespace std;

int* right_rotate(int* arr, int n, int k)
{
    int temp;
    for (int i = 0; i < k; i++) {
        temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = temp;
    }
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
