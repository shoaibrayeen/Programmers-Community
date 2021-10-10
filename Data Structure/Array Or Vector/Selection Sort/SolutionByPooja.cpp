/*
    An Array is given and You need to sort it using Selection Sort Algorithm.
*/
#include <iostream>
using namespace std;

void selection_sort(int* arr, int n)
{
    int min_index, temp;
    for (int i = 0; i < n - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_index])
                min_index = j;
        if (i != min_index) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of array ";
    cin >> size;

    int* arr = new int[size];

    cout << "\nEnter array element ";
    for (int i = 0; i < size; i++)
        cin >> *(arr + i);
    selection_sort(arr, size);

    cout << "\nSorted array is ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
