/*
 Program Description - This program finds the element from the array.
 Solution Description: Applied Binary Search using recursion to check whether the element is present or not in the array.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

bool binarySearch(int* arr, int start, int end, int element)
{
    if (end >= start) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == element) {
            return true;
        }

        if (arr[mid] > element) {
            return binarySearch(arr, start, mid - start, element);
        } else {
            return binarySearch(arr, mid + 1, end, element);
        }
    } else {
        return false;
    }
}

int main()
{
    int size;
    int element;

    cout << "Enter the size of Array :" << endl;
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the Array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: " << endl;
    cin >> element;

    bool result = binarySearch(arr, 0, size - 1, element);

    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
